/*
    Copyright 2013-2020 Paul Colby

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

#include "mediastoredataresponse.h"
#include "mediastoredataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::MediaStoreDataResponse
 * \brief The MediaStoreDataResponse class provides an interface for MediaStoreData responses.
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a MediaStoreDataResponse object with parent \a parent.
 */
MediaStoreDataResponse::MediaStoreDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaStoreDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaStoreDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaStoreDataResponsePrivate.
 */
MediaStoreDataResponse::MediaStoreDataResponse(MediaStoreDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaStoreDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaStoreDataResponse);
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
 * \class QtAws::MediaStoreData::MediaStoreDataResponsePrivate
 * \brief The MediaStoreDataResponsePrivate class provides private implementation for MediaStoreDataResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a MediaStoreDataResponsePrivate object with public implementation \a q.
 */
MediaStoreDataResponsePrivate::MediaStoreDataResponsePrivate(
    MediaStoreDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
