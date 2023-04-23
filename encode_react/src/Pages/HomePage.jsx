import Navbar from "../Components/Navbar";
import Footer from "../Components/Footer";

export default function HomePage(){
    const name="Jhon Doe"
    const age= 30
    const address="123 Main St"
    console.log(name)
    return (
        <div>
            <Navbar/>

            <h1>My name is {name}</h1>
            <h1>My age is {age}</h1>
            <h1>I live in {address}</h1>

            <p>
                Lorem ipsum dolor sit amet, consectutor adpiscising elit.
                Itaaque,
                consequator
            </p>
            <Footer/>
        </div>
    )
}