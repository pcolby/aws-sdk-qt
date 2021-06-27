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

#include "mediaconnectresponse.h"
#include "mediaconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::MediaConnectResponse
 * \brief The MediaConnectResponse class provides an interface for MediaConnect responses.
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a MediaConnectResponse object with parent \a parent.
 */
MediaConnectResponse::MediaConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new MediaConnectResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a MediaConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaConnectResponsePrivate.
 */
MediaConnectResponse::MediaConnectResponse(MediaConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void MediaConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaConnectResponse);
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
 * \class QtAws::MediaConnect::MediaConnectResponsePrivate
 * \brief The MediaConnectResponsePrivate class provides private implementation for MediaConnectResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a MediaConnectResponsePrivate object with public implementation \a q.
 */
MediaConnectResponsePrivate::MediaConnectResponsePrivate(
    MediaConnectResponse * const q) : q_ptr(q)
{

}

} // namespace MediaConnect
} // namespace QtAws
