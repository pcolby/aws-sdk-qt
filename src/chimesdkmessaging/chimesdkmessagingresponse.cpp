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

#include "chimesdkmessagingresponse.h"
#include "chimesdkmessagingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingResponse
 * \brief The ChimeSdkMessagingResponse class provides an interface for ChimeSdkMessaging responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChimeSdkMessagingResponse object with parent \a parent.
 */
ChimeSdkMessagingResponse::ChimeSdkMessagingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ChimeSdkMessagingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ChimeSdkMessagingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkMessagingResponsePrivate.
 */
ChimeSdkMessagingResponse::ChimeSdkMessagingResponse(ChimeSdkMessagingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ChimeSdkMessagingResponse::parseFailure(QIODevice &response)
{
    //Q_D(ChimeSdkMessagingResponse);
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
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingResponsePrivate
 * \brief The ChimeSdkMessagingResponsePrivate class provides private implementation for ChimeSdkMessagingResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChimeSdkMessagingResponsePrivate object with public implementation \a q.
 */
ChimeSdkMessagingResponsePrivate::ChimeSdkMessagingResponsePrivate(
    ChimeSdkMessagingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
