/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ec2response.h"
#include "ec2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::Ec2Response
 * \brief The Ec2Response class provides an interface for EC2 responses.
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a Ec2Response object with parent \a parent.
 */
Ec2Response::Ec2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Ec2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Ec2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Ec2ResponsePrivate.
 */
Ec2Response::Ec2Response(Ec2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Ec2Response::parseFailure(QIODevice &response)
{
    //Q_D(Ec2Response);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::EC2::Ec2ResponsePrivate
 * \brief The Ec2ResponsePrivate class provides private implementation for Ec2Response.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a Ec2ResponsePrivate object with public implementation \a q.
 */
Ec2ResponsePrivate::Ec2ResponsePrivate(
    Ec2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EC2
} // namespace QtAws
