/*
    Copyright 2013-2018 Paul Colby

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

#include "mediaconvertresponse.h"
#include "mediaconvertresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::MediaConvertResponse
 * \brief The MediaConvertResponse class provides an interface for MediaConvert responses.
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a MediaConvertResponse object with parent \a parent.
 */
MediaConvertResponse::MediaConvertResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaConvertResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaConvertResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaConvertResponsePrivate.
 */
MediaConvertResponse::MediaConvertResponse(MediaConvertResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaConvertResponse::parseFailure(QIODevice &response)
{
    Q_D(MediaConvertResponse);
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
 * \class QtAws::MediaConvert::MediaConvertResponsePrivate
 * \brief The MediaConvertResponsePrivate class provides private implementation for MediaConvertResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a MediaConvertResponsePrivate object with public implementation \a q.
 */
MediaConvertResponsePrivate::MediaConvertResponsePrivate(
    MediaConvertResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaConvert
} // namespace QtAws
