
import java.applet.Applet;
import java.awt.Graphics;

public class problem13 extends Applet {
@Override
public void paint (Graphics g){
    int xpoints[]={20,120,220,20};
    int ypoints[]={20,120,20,20};
    int npoints = xpoints.length;
    g.drawPolygon (xpoints,ypoints,npoints);
}
}
