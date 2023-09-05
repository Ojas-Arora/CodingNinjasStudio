double areaSwitchCase(int ch, vector<double> a) {

    // Write your code here

    cin>>ch;

    switch(ch)

    {

        case 1:

        {

            cin>>a[0];   //Enter 1 element for array

            double area = M_PI * a[0] * a[0];   //find the area of circle pi * r * r

            return area;

            break;

        }

 

        case 2:

        {

            cin>>a[0]>>a[1];     ////Enter 2 element for array

            double area = a[0] * a[1];           //find the area of rectangle l*b

            return area;

            break;

        }

    }

}
