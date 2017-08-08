try 
{
    cout << Server::compute(A,B) << endl;
}
    catch (bad_alloc& bad_alloc_exception) 
    {
        cout << "Not enough memory" << endl;
    }
    catch (exception& my_exception)
    {
        cout << "Exception: " << my_exception.what() << endl;
    }
    catch (...) // Use the variadic arguments
    {
        cout << "Other Exception" << endl;
    }