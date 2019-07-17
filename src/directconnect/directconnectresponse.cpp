/*
    Copyright 2013-2019 Paul Colby

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

#include "directconnectresponse.h"
#include "directconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DirectConnectResponse
 * \brief The DirectConnectResponse class provides an interface for DirectConnect responses.
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DirectConnectResponse object with parent \a parent.
 */
DirectConnectResponse::DirectConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DirectConnectResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DirectConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DirectConnectResponsePrivate.
 */
DirectConnectResponse::DirectConnectResponse(DirectConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DirectConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(DirectConnectResponse);
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
 * \class QtAws::DirectConnect::DirectConnectResponsePrivate
 * \brief The DirectConnectResponsePrivate class provides private implementation for DirectConnectResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DirectConnectResponsePrivate object with public implementation \a q.
 */
DirectConnectResponsePrivate::DirectConnectResponsePrivate(
    DirectConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DirectConnect
} // namespace QtAws
