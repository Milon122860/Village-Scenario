#include <windows.h>
#define PI 3.14159265358979323846
#include<math.h>
#include <GL/gl.h>
#include <GL/glut.h>


void cloud1()
{
    int i;
    GLfloat x=.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=.6f;
    GLfloat h=.82f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void cloud2()
{
    int i;
    GLfloat x=-.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=-.55f;
    GLfloat b=.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-.45f;
    GLfloat d=.83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=-.52f;
    GLfloat f=.8f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=-.6f;
    GLfloat h=.82f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glColor3ub(	0, 102, 204);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void hills()
{
    //hill-1
    glBegin(GL_TRIANGLES);
    glColor3ub(155,118,83); 
    glVertex2f(-1.2f, 0.2f); 
    glVertex2f(-0.1f, 0.2f); 
    glVertex2f(-0.6f, 0.7f); 
    glEnd();

    //hill-2
    glBegin(GL_TRIANGLES);
    glColor3ub(155,118,83); 
    glVertex2f(-0.35f, 0.2f); 
    glVertex2f(0.6f, 0.2f); 
    glVertex2f(0.1f, 0.65f); 
    glEnd();

    //hill-3
    glBegin(GL_TRIANGLES);
    glColor3ub(155,118,83); 
    glVertex2f(0.5f, 0.2f); 
    glVertex2f(1.3f, 0.2f); 
    glVertex2f(0.9f, 0.65f); 
    glEnd();
}

void sun()
{
    int i;
    GLfloat x=-0.225f;
    GLfloat y=.457f;
   // GLfloat y=.7f;
    GLfloat radius = .13f;
    int triangleAmount = 90;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 204, 0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void tree2()
{
    glBegin(GL_QUADS);
    glColor3ub(74, 132, 19);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-1.0f, 0.25f);
    glVertex2f(1.0f, 0.25f);
    glVertex2f(1.0f, 0.2f);
    glEnd();

     int i;

	GLfloat x=-1.0f; GLfloat y=.26f; GLfloat radius =.03f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    x + (radius * cos(i *  twicePi / triangleAmount)),
			y + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

    GLfloat a=-0.96f; GLfloat b=.27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(a, b); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    a + (radius * cos(i *  twicePi / triangleAmount)),
			b + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat c = -0.92f; GLfloat d = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(c, d); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    c + (radius * cos(i *  twicePi / triangleAmount)),
			d + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat e = -0.91f; GLfloat f = .29f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(e, f); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    e + (radius * cos(i *  twicePi / triangleAmount)),
			f+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat g = -0.88f; GLfloat h = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(g, h); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    g + (radius * cos(i *  twicePi / triangleAmount)),
			h + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat k = -0.84f; GLfloat l = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(k, l); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    k + (radius * cos(i *  twicePi / triangleAmount)),
			l + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat m = -0.81f; GLfloat n = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(m, n); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    m + (radius * cos(i *  twicePi / triangleAmount)),
			n + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat o = -0.77f; GLfloat p = .29f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(o, p); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    o + (radius * cos(i *  twicePi / triangleAmount)),
			p + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat q = -0.77f; GLfloat r = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(q, r); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    q + (radius * cos(i *  twicePi / triangleAmount)),
			r + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat s = -0.73f; GLfloat t = .32f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(s, t); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    s + (radius * cos(i *  twicePi / triangleAmount)),
			t + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat u = -0.73f; GLfloat v = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(u, v); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    u + (radius * cos(i *  twicePi / triangleAmount)),
			v + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w = -0.71f; GLfloat z = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w, z); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w + (radius * cos(i *  twicePi / triangleAmount)),
			z + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    //<------------------------------------------>
    GLfloat a1=-0.67f; GLfloat b1=.25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    a1 + (radius * cos(i *  twicePi / triangleAmount)),
			b1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat c1 = -0.615f; GLfloat d1 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(c1, d1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    c1 + (radius * cos(i *  twicePi / triangleAmount)),
			d1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat e1 = -0.58f; GLfloat f1 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(e1, f1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    e1 + (radius * cos(i *  twicePi / triangleAmount)),
			f1+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat g1 = -0.53f; GLfloat h1 = .26f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(g1, h1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    g1 + (radius * cos(i *  twicePi / triangleAmount)),
			h1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat k1 = -0.50f; GLfloat l1 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(k1, l1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    k1 + (radius * cos(i *  twicePi / triangleAmount)),
			l1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat m1 = -0.47f; GLfloat n1 = .31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(m1, n1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    m1 + (radius * cos(i *  twicePi / triangleAmount)),
			n1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat o1 = -0.465f; GLfloat p1 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(o1, p1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    o1 + (radius * cos(i *  twicePi / triangleAmount)),
			p1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat q1 = -0.45f; GLfloat r1 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(q1, r1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    q1 + (radius * cos(i *  twicePi / triangleAmount)),
			r1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat s1 = -0.40f; GLfloat t1 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(s1, t1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    s1 + (radius * cos(i *  twicePi / triangleAmount)),
			t1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat u1 = -0.36f; GLfloat v1 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(u1, v1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    u1 + (radius * cos(i *  twicePi / triangleAmount)),
			v1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w1 = -0.33f; GLfloat z1 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w1, z1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w1 + (radius * cos(i *  twicePi / triangleAmount)),
			z1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w11 = -0.29f; GLfloat z11 = .26f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w11, z11); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w11 + (radius * cos(i *  twicePi / triangleAmount)),
			z11 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w12 = -0.25f; GLfloat z12 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w12, z12); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w12 + (radius * cos(i *  twicePi / triangleAmount)),
			z12 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

    GLfloat w13 = -0.21f; GLfloat z13 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w13, z13); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w13 + (radius * cos(i *  twicePi / triangleAmount)),
			z13 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w14 = -0.18f; GLfloat z14 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w14, z14); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w14 + (radius * cos(i *  twicePi / triangleAmount)),
			z14 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w15 = -0.14f; GLfloat z15 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w15, z15); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w15 + (radius * cos(i *  twicePi / triangleAmount)),
			z15 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w16 = -0.10f; GLfloat z16 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w16, z16); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w16 + (radius * cos(i *  twicePi / triangleAmount)),
			z16 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w17 = -0.07f; GLfloat z17 = .29f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w17, z17); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w17 + (radius * cos(i *  twicePi / triangleAmount)),
			z17 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w18 = -0.04f; GLfloat z18 = .32f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w18, z18); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w18 + (radius * cos(i *  twicePi / triangleAmount)),
			z18 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w19 = -0.048f; GLfloat z19 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w19, z19); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w19 + (radius * cos(i *  twicePi / triangleAmount)),
			z19 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w20 = -0.01f; GLfloat z20 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w20, z20); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w20 + (radius * cos(i *  twicePi / triangleAmount)),
			z20 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w21 = 0.03f; GLfloat z21 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w21, z21); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w21 + (radius * cos(i *  twicePi / triangleAmount)),
			z21 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    /*<-------Right------------>*/

    GLfloat a2 = 0.96f; GLfloat b2 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(a2, b2); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    a2 + (radius * cos(i *  twicePi / triangleAmount)),
			b2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat c2 = 0.92f; GLfloat d2 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(c2, d2); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    c2 + (radius * cos(i *  twicePi / triangleAmount)),
			d2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat e2 = 0.91f; GLfloat f2 = .29f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(e2, f2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    e2 + (radius * cos(i *  twicePi / triangleAmount)),
			f2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat g2 = 0.88f; GLfloat h2 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(g2, h2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    g2 + (radius * cos(i *  twicePi / triangleAmount)),
			h2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat k2 = 0.84f; GLfloat l2 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(k2, l2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    k2 + (radius * cos(i *  twicePi / triangleAmount)),
			l2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat m2 = 0.81f; GLfloat n2 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(m2, n2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    m2 + (radius * cos(i *  twicePi / triangleAmount)),
			n2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat o2 = 0.77f; GLfloat p2 = .29f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(o2, p2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    o2 + (radius * cos(i *  twicePi / triangleAmount)),
			p2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat q2 = 0.77f; GLfloat r2 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(q2, r2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    q2 + (radius * cos(i *  twicePi / triangleAmount)),
			r2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat s2 = 0.73f; GLfloat t2 = .32f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(s2, t2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    s2 + (radius * cos(i *  twicePi / triangleAmount)),
			t2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat u2 = 0.73f; GLfloat v2 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(u2, v2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    u2 + (radius * cos(i *  twicePi / triangleAmount)),
			v2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w2 = 0.71f; GLfloat z2 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w2, z2); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w2 + (radius * cos(i *  twicePi / triangleAmount)),
			z2 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    //<------------------------------------------>
    GLfloat a3= 0.67f; GLfloat b3 =.25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(a3, b3); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    a3 + (radius * cos(i *  twicePi / triangleAmount)),
			b3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat c3 = 0.615f; GLfloat d3 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
    glVertex2f(c3, d3); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    c3 + (radius * cos(i *  twicePi / triangleAmount)),
			d3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat e3 = 0.58f; GLfloat f3 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(e3, f3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    e3 + (radius * cos(i *  twicePi / triangleAmount)),
			f3+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat g3 = 0.53f; GLfloat h3 = .26f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(g3, h3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    g3 + (radius * cos(i *  twicePi / triangleAmount)),
			h3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat k3 = 0.50f; GLfloat l3 = .23f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(k3, l3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    k3 + (radius * cos(i *  twicePi / triangleAmount)),
			l3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat m3 = 0.47f; GLfloat n3 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(m3, n3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    m3 + (radius * cos(i *  twicePi / triangleAmount)),
			n3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat o3 = 0.465f; GLfloat p3 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(o3, p3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    o3 + (radius * cos(i *  twicePi / triangleAmount)),
			p3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat q3 = 0.45f; GLfloat r3 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(q3, r3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    q3 + (radius * cos(i *  twicePi / triangleAmount)),
			r3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat s3 = 0.40f; GLfloat t3 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(s3, t3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    s3 + (radius * cos(i *  twicePi / triangleAmount)),
			t3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat u3 = 0.36f; GLfloat v3 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(u3, v3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    u3 + (radius * cos(i *  twicePi / triangleAmount)),
			v3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w3 = 0.33f; GLfloat z3 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w3, z3); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w3 + (radius * cos(i *  twicePi / triangleAmount)),
			z3 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w31 = 0.29f; GLfloat z31 = .26f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w31, z31); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w31 + (radius * cos(i *  twicePi / triangleAmount)),
			z31 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w41 = 0.24f; GLfloat z41 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w41, z41); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w41 + (radius * cos(i *  twicePi / triangleAmount)),
			z41 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

    GLfloat w32 = 0.24f; GLfloat z32 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w32, z32); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w32 + (radius * cos(i *  twicePi / triangleAmount)),
			z32 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

    GLfloat w33 = 0.21f; GLfloat z33 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w33, z33); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w33 + (radius * cos(i *  twicePi / triangleAmount)),
			z33 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w4 = 0.20f; GLfloat z4 = .32f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w4, z4); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w4 + (radius * cos(i *  twicePi / triangleAmount)),
			z4 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w34 = 0.18f; GLfloat z34 = .28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w34, z34); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w34 + (radius * cos(i *  twicePi / triangleAmount)),
			z34 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w35 = 0.14f; GLfloat z35 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w35, z35); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w35 + (radius * cos(i *  twicePi / triangleAmount)),
			z35 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w36 = 0.10f; GLfloat z36 = .27f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w36, z36); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w36 + (radius * cos(i *  twicePi / triangleAmount)),
			z36 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w37 = 0.07f; GLfloat z37 = .29f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w37, z37); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w37 + (radius * cos(i *  twicePi / triangleAmount)),
			z37 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat w38 = 0.07f; GLfloat z38 = .25f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(74, 132, 19);
	glVertex2f(w38, z38); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w38 + (radius * cos(i *  twicePi / triangleAmount)),
			z38 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    // GLfloat w39 = 0.048f; GLfloat z39 = .27f;
	// glBegin(GL_TRIANGLE_FAN);
	// glColor3ub(74, 132, 19);
	// glVertex2f(w19, z19); // center of circle
	// for(i = 0; i <= triangleAmount;i++) {
	// 	glVertex2f(
	// 	    w39 + (radius * cos(i *  twicePi / triangleAmount)),
	// 		z39 + (radius * sin(i * twicePi / triangleAmount))
	// 	);
	// }
    // glEnd();

    // GLfloat w40 = 0.01f; GLfloat z40 = .28f;
	// glBegin(GL_TRIANGLE_FAN);
	// glColor3ub(74, 132, 19);
	// glVertex2f(w40, z40); // center of circle
	// for(i = 0; i <= triangleAmount;i++) {
	// 	glVertex2f(
	// 	    w40 + (radius * cos(i *  twicePi / triangleAmount)),
	// 		z40 + (radius * sin(i * twicePi / triangleAmount))
	// 	);
	// }
    // glEnd();


}

void tree()
{
    //Lower Part

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(0.53f, 0.06f);
    glVertex2f(0.58f, 0.06f);
    glVertex2f(0.58f, -0.05f);
    glVertex2f(0.53f, -0.05f);
    glEnd();

    int i;

	GLfloat x=.56f; GLfloat y=.11f; GLfloat radius =.06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    x + (radius * cos(i *  twicePi / triangleAmount)),
			y + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

    GLfloat a=.49f; GLfloat b=.09f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
    glVertex2f(a, b); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    a + (radius * cos(i *  twicePi / triangleAmount)),
			b + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat c=.62f; GLfloat d=.09f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(c, d); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    c + (radius * cos(i *  twicePi / triangleAmount)),
			d + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat e=.68f; GLfloat f=.13f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(e, f); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    e + (radius * cos(i *  twicePi / triangleAmount)),
			f+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat g=.42f; GLfloat h=.13f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(g, h); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius * cos(i * twicePi / triangleAmount)),
			h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();
    
    GLfloat k = .42f; GLfloat l = .18f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(k, l); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		     k + (radius * cos(i *  twicePi / triangleAmount)),
			l + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat m = .69f; GLfloat n = .18f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(m, n); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    m + (radius * cos(i *  twicePi / triangleAmount)),
			n + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat o=.68f; GLfloat p=.22f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(o, p); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    o + (radius * cos(i *  twicePi / triangleAmount)),
			p + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat q=.42f; GLfloat r=.18f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(q, r); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    q + (radius * cos(i *  twicePi / triangleAmount)),
			r + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat s = .45f; GLfloat t = .22f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(s, t); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    s + (radius * cos(i *  twicePi / triangleAmount)),
			t+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat u=.56f; GLfloat v=.22f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(u, v); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    u + (radius * cos(i *  twicePi / triangleAmount)),
		    v+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);
    glVertex2f(0.65f,0.13f);
    glVertex2f(0.65f,0.24f);
    glVertex2f(0.45f,0.24f);
    glVertex2f(0.45f,0.13f);
    glEnd();

    GLfloat w=.61f; GLfloat z=.28f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(w, z); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w + (radius * cos(i *  twicePi / triangleAmount)),
			z+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
        
    GLfloat w1 = .51f; GLfloat z1 = .28f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
	glVertex2f(w1, z1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            w1 + (radius * cos(i * twicePi / triangleAmount)),
			z1+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    //Top Part
    //left
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(0.50f, 0.332f);
    glVertex2f(0.535f, 0.325f);
    glVertex2f(0.515f, 0.45f);
    glVertex2f(0.48f, 0.45f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(0.56f, 0.32f);
    glVertex2f(0.595f, 0.332f);
    glVertex2f(0.62f, 0.45f);
    glVertex2f(0.58f, 0.45f);
    glEnd();

    //
    GLfloat x1=.54f; GLfloat y1=.47f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
    glVertex2f(x1, y1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    x1 + (radius * cos(i *  twicePi / triangleAmount)),
			y1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

    GLfloat a1=.45f; GLfloat b1=.45f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    a1 + (radius * cos(i *  twicePi / triangleAmount)),
			b1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat c1=.6f; GLfloat d1=.45f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(c1, d1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    c1 + (radius * cos(i *  twicePi / triangleAmount)),
			d1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat e1=.66f; GLfloat f1=.49f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(e1, f1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    e1 + (radius * cos(i *  twicePi / triangleAmount)),
			f1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat g1=.44f; GLfloat h1=.49f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(g1, h1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g1 + (radius * cos(i * twicePi / triangleAmount)),
			h1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat k1 = .44f; GLfloat l1 = .54f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(k1, l1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		     k1 + (radius * cos(i *  twicePi / triangleAmount)),
			l1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    GLfloat m1 = .67f; GLfloat n1 = .54f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(m1, n1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    m1 + (radius * cos(i *  twicePi / triangleAmount)),
			n1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat o1=.66f; GLfloat p1=.58f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(o1, p1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    o1 + (radius * cos(i *  twicePi / triangleAmount)),
			p1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat q1=.44f; GLfloat r1=.54f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(q1, r1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    q1 + (radius * cos(i *  twicePi / triangleAmount)),
			r1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    GLfloat s1 = .47f; GLfloat t1 = .58f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(s1, t1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    s1 + (radius * cos(i *  twicePi / triangleAmount)),
			t1+ (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	GLfloat u1=.54f; GLfloat v1=.58f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(u1, v1); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    u1 + (radius * cos(i *  twicePi / triangleAmount)),
		    v1 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);
    glVertex2f(0.65f,0.49f);
    glVertex2f(0.65f,0.6f);
    glVertex2f(0.45f,0.6f);
    glVertex2f(0.45f,0.49f);
    glEnd();

    GLfloat w11=.59f; GLfloat z11=.64f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 51);
	glVertex2f(w11, z11); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f(
		    w11 + (radius * cos(i *  twicePi / triangleAmount)),
			z11 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();
        
    GLfloat w12 = .53f; GLfloat z12 = .64f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
	glVertex2f(w12, z12); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            w12 + (radius * cos(i * twicePi / triangleAmount)),
			z12 + (radius * sin(i * twicePi / triangleAmount))
		);
	}
    glEnd();

    
}

void ground()
{
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f, 0.0f);
    
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(1.0f, 0.2f);

    glVertex2f(0.0f, -0.02);
   
    glVertex2f(-0.2f, -0.30);
    
    glVertex2f(0.07f, -0.55);
    
    glVertex2f(-0.05f, -0.70);

    glVertex2f(0.3f, -1.0);

    glEnd();

    //river top ground-side
    glBegin(GL_QUADS);
    glColor3ub(155, 118, 83);
    glVertex2f(-0.38f, 0.12f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.051f, -0.09f);
    glVertex2f(-0.077f, -0.13f);
    glEnd();

    //river middle ground-side
    glBegin(GL_QUADS);
    glColor3ub(155, 118, 83);
    glVertex2f(-0.18f, -0.39f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(0.07f, -0.55f);
    glVertex2f(0.04f, -0.59f);
    glEnd();

    //river bottom ground-side
    glBegin(GL_QUADS);
    glColor3ub(155, 118, 83);
    glVertex2f(-0.03f, -0.78f);
    glVertex2f(-0.05f, -0.70f);
    glVertex2f(0.3f, -1.0f);
    glVertex2f(0.24f, -1.0f);
    glEnd();

}

void grass4()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.35f, -0.85f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.25f, -0.85f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.327f, -0.82f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.273f, -0.82f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.3f, -0.8f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.225f, -0.87f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.375f, -0.87f);
    glVertex2f(0.3f, -0.9f);
    glEnd();
     int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    GLfloat e=.35f;
    GLfloat f=-.85f;
    GLfloat radius11 =.02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i *  twicePi / triangleAmount)),
            f+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=0.25f;
    GLfloat h=-0.85f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i *  twicePi / triangleAmount)),
            h+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1=0.3f;
    GLfloat b1=-0.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(a1, b1); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void grass3()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(.95f, -0.85f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.85f, -0.85f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.927f, -0.82f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.873f, -0.82f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.9f, -0.8f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.825f, -0.87f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.975f, -0.87f);
    glVertex2f(0.9f, -0.9f);
    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    GLfloat e=.95f;
    GLfloat f=-.85f;
    GLfloat radius11 =.02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i *  twicePi / triangleAmount)),
            f+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=0.85f;
    GLfloat h=-0.85f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i *  twicePi / triangleAmount)),
            h+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1=0.9f;
    GLfloat b1=-0.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(a1, b1); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


}

void grass2()
{
    //grass2

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.95f, -0.65f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.85f, -0.65f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.927f, -0.62f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.873f, -0.62f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.825f, -0.67f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.975f, -0.67f);
    glVertex2f(0.9f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    GLfloat e=.95f;
    GLfloat f=-.65f;
    GLfloat radius11 =.02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i *  twicePi / triangleAmount)),
            f+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=0.85f;
    GLfloat h=-0.65f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i *  twicePi / triangleAmount)),
            h+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1=0.9f;
    GLfloat b1=-0.6f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(a1, b1); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void grass1()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.80f, -0.75f);
    glVertex2f(0.75f, -0.8f);
    glVertex2f(0.70f, -0.75f);
    glVertex2f(0.75f, -0.8f);
    glVertex2f(0.777f, -0.72f);
    glVertex2f(0.75f, -0.8f);
    glVertex2f(0.723f, -0.72f);
    glVertex2f(0.75f, -0.8f);
    glVertex2f(0.75f, -0.7f);
    glVertex2f(0.75f, -0.8f);
    glVertex2f(0.675f, -0.77f);
    glVertex2f(0.75f, -0.8f);
    glVertex2f(0.825f, -0.77f);
    glVertex2f(0.75f, -0.8f);
    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    GLfloat e=.80f;
    GLfloat f=-.75f;
    GLfloat radius11 =.02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i *  twicePi / triangleAmount)),
            f+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=0.70f;
    GLfloat h=-0.75f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i *  twicePi / triangleAmount)),
            h+ (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1=0.745f;
    GLfloat b1=-0.7f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(a1, b1); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void home2()
{
    //left side
    glBegin(GL_QUADS);
    glColor3ub(47, 79, 79);
    glVertex2f(0.1f, -0.32f);
    glVertex2f(0.2f, -0.35f);
    glVertex2f(0.2f, -0.14f);
    glVertex2f(0.1f, -0.14f);
    glEnd();

    //left-bottom
    glBegin(GL_QUADS);
    glColor3ub(155, 118, 83);
    glVertex2f(0.07f, -0.33f);
    glVertex2f(0.2f, -0.38f);
    glVertex2f(0.2f, -0.35f);
    glVertex2f(0.1f, -0.31f);
    glEnd();

    //window
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);
    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.17f, -0.21f);
    glVertex2f(0.17f, -0.28f);
    glVertex2f(0.13f, -0.27f);
    glEnd();

    //right side
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2f(0.2f, -0.35f);
    glVertex2f(0.35f, -0.32f);
    glVertex2f(0.35f, -0.14f);
    glVertex2f(0.2f, -0.14f);
    glEnd();

    //right bottom
    glBegin(GL_QUADS);
    glColor3ub(155, 118, 83);
    glVertex2f(0.2f, -0.38f);
    glVertex2f(0.38f, -0.34f);
    glVertex2f(0.35f, -0.318f);
    glVertex2f(0.2f, -0.35f);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);
    glVertex2f(0.25f, -0.34f);
    glVertex2f(0.3f, -0.33f);
    glVertex2f(0.3f, -0.22f);
    glVertex2f(0.25f, -0.22f);
    glEnd();

    //top-left
    glBegin(GL_TRIANGLES);
    glColor3ub(47, 79, 79);
    glVertex2f(0.1f, -0.14f);
    glVertex2f(0.19f, -0.14f);
    glVertex2f(0.145f, -0.03f);
    glEnd();

    //top-1st-left
    glBegin(GL_QUADS);
    glColor3ub(204, 153, 0);
    glVertex2f(0.1f, -0.14f);
    glVertex2f(0.05f, -0.14f);
    glVertex2f(0.12f, 0.0f);
    glVertex2f(0.157f, 0.0f);
    glEnd();

    //top-right
    glBegin(GL_QUADS);
    glColor3ub(204, 153, 0);
    glVertex2f(0.19f, -0.14f);
    glVertex2f(0.38f, -0.15f);
    glVertex2f(0.32f, 0.0f);
    glVertex2f(0.13f, 0.0f);
    glEnd();
}

void home3()
{
    //left side
    glBegin(GL_QUADS);
    glColor3ub(47, 79, 79);
    glVertex2f(0.45f, -0.38f);
    glVertex2f(0.65f, -0.4f);
    glVertex2f(0.65f, -0.2f);
    glVertex2f(0.45f, -0.2f);
    glEnd();

    //bottom left
    glBegin(GL_QUADS);
    glColor3ub(155, 118, 83);
    glVertex2f(0.45f, -0.38f);
    glVertex2f(0.65f, -0.4f);
    glVertex2f(0.65f, -0.43f);
    glVertex2f(0.43f, -0.41f);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);
    glVertex2f(0.52f, -0.39f);
    glVertex2f(0.57f, -0.394f);
    glVertex2f(0.57f, -0.28f);
    glVertex2f(0.52f, -0.28f);
    glEnd();

    //right side
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2f(0.65f, -0.4f);
    glVertex2f(0.75f, -0.37f);
    glVertex2f(0.75f, -0.2f);
    glVertex2f(0.65f, -0.2f);
    glEnd();

    //bottom right
    glBegin(GL_QUADS);
    glColor3ub(155, 118, 83);
    glVertex2f(0.65f, -0.4f);
    glVertex2f(0.75f, -0.37f);
    glVertex2f(0.77f, -0.39f);
    glVertex2f(0.65f, -0.43f);
    glEnd();

    //window
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);
    glVertex2f(0.677f, -0.32f);
    glVertex2f(0.725f, -0.31f);
    glVertex2f(0.725f, -0.25f);
    glVertex2f(0.677f, -0.26f);
    glEnd();

    //top-left
    glBegin(GL_QUADS);
    glColor3ub(204, 153, 0);
    glVertex2f(0.48f, -0.05f);
    glVertex2f(0.715f, -0.05f);
    glVertex2f(0.65f, -0.2f);
    glVertex2f(0.41f, -0.2f);
    glEnd();

    //top-middle
    glBegin(GL_TRIANGLES);
    glColor3ub(128, 128, 128);
    glVertex2f(0.65f, -0.2f);
    glVertex2f(0.75f, -0.2f);
    glVertex2f(0.7f, -0.08f);
    glEnd();

    //top-right
    glBegin(GL_QUADS);
    glColor3ub(204, 153, 0);
    glVertex2f(0.75f, -0.2f);
    glVertex2f(0.79f, -0.2f);
    glVertex2f(0.71f, -0.05f);
    glVertex2f(0.68f, -0.05f);
    glEnd();    

}

void boat()
{

    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
    glVertex2f(-0.25f, -0.53f);
    
    glVertex2f(-0.15f, -0.5f);
    glVertex2f(-0.25f, -0.6f);
    glVertex2f(-0.5f, -0.6f);
    glVertex2f(-0.6f, -0.5f);
    glVertex2f(-0.5f, -0.53f);

    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
    glVertex2f(0.01f, -0.34f);
    glVertex2f(0.01f, -0.45f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
    glVertex2f(0.01f, -0.40f);
    glVertex2f(-0.165f, -0.5f);
    glEnd();

}

void river()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 76, 153);
    glVertex2f(-1.0f,0.2f);
    glColor3ub(0, 128, 255);
    glVertex2f(1.0f,0.2f);
    glColor3ub(102, 178, 255);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glEnd();
}

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    sky();
    sun();
    cloud1();
    cloud2();
    hills();
    river();
    ground();
    home2();
    home3();
    boat();
    tree2();
	tree();
	grass1();
	grass2();
	grass3();
	grass4();

    glFlush();
}

void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth( 1.0 );
    glOrtho(-1, 1, -1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1240, 750);
    glutCreateWindow("Village Scenario");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
