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

#include "ec2instanceconnectresponse.h"
#include "ec2instanceconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectResponse
 * \brief The Ec2InstanceConnectResponse class provides an interface for Ec2InstanceConnect responses.
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a Ec2InstanceConnectResponse object with parent \a parent.
 */
Ec2InstanceConnectResponse::Ec2InstanceConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Ec2InstanceConnectResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Ec2InstanceConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Ec2InstanceConnectResponsePrivate.
 */
Ec2InstanceConnectResponse::Ec2InstanceConnectResponse(Ec2InstanceConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Ec2InstanceConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(Ec2InstanceConnectResponse);
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
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectResponsePrivate
 * \brief The Ec2InstanceConnectResponsePrivate class provides private implementation for Ec2InstanceConnectResponse.
 * \internal
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a Ec2InstanceConnectResponsePrivate object with public implementation \a q.
 */
Ec2InstanceConnectResponsePrivate::Ec2InstanceConnectResponsePrivate(
    Ec2InstanceConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ec2InstanceConnect
} // namespace QtAws
