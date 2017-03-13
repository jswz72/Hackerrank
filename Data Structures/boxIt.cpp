
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
    //Characteristics
    int l;  //length;
    int b;  //breadth
    int h;  //height
    
    public: 
    string objType = "Box";
    //Constructors:
    //Deafault constructor
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    //Parameterized constructor
    Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }
    //Copy constrctor
    Box(Box& existBox){
       l = existBox.getLength(); 
       b = existBox.getBreadth();
       h = existBox.getHeight(); 
    }
    
    //Functions:
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h;
    }
    
    //Operator overloading
    bool operator<(Box &Boxb){
        int b_l = Boxb.getLength();
        int b_b = Boxb.getBreadth();
        int b_h = Boxb.getHeight();
        
        if(l < b_l){
            return true;
        }
        else if(b < b_b && l == b_l){
            return true;
        }
        else if(h < b_h && b == b_b && l == b_l){
            return true;
        }
        else{
            return false;
        }
    }
};

//Operator overload, return out stream
ostream& operator<<(ostream& out, Box b){
       if(b.objType == "Box"){
           out << b.getLength() << " " << b.getBreadth() << " " << b.getHeight();
       } 
        return out;
    }





