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

#include "appstreamresponse.h"
#include "appstreamresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AppStreamResponse
 * \brief The AppStreamResponse class provides an interface for AppStream responses.
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamResponse object with parent \a parent.
 */
AppStreamResponse::AppStreamResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppStreamResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppStreamResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppStreamResponsePrivate.
 */
AppStreamResponse::AppStreamResponse(AppStreamResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppStreamResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppStreamResponse);
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
 * \class QtAws::AppStream::AppStreamResponsePrivate
 * \brief The AppStreamResponsePrivate class provides private implementation for AppStreamResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamResponsePrivate object with public implementation \a q.
 */
AppStreamResponsePrivate::AppStreamResponsePrivate(
    AppStreamResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppStream
} // namespace QtAws
