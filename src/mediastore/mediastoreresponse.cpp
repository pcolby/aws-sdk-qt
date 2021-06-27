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

#include "mediastoreresponse.h"
#include "mediastoreresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::MediaStoreResponse
 * \brief The MediaStoreResponse class provides an interface for MediaStore responses.
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a MediaStoreResponse object with parent \a parent.
 */
MediaStoreResponse::MediaStoreResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new MediaStoreResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a MediaStoreResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaStoreResponsePrivate.
 */
MediaStoreResponse::MediaStoreResponse(MediaStoreResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void MediaStoreResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaStoreResponse);
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
 * \class QtAws::MediaStore::MediaStoreResponsePrivate
 * \brief The MediaStoreResponsePrivate class provides private implementation for MediaStoreResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a MediaStoreResponsePrivate object with public implementation \a q.
 */
MediaStoreResponsePrivate::MediaStoreResponsePrivate(
    MediaStoreResponse * const q) : q_ptr(q)
{

}

} // namespace MediaStore
} // namespace QtAws
