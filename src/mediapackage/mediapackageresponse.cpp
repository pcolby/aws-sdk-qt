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

#include "mediapackageresponse.h"
#include "mediapackageresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::MediaPackageResponse
 * \brief The MediaPackageResponse class provides an interface for MediaPackage responses.
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a MediaPackageResponse object with parent \a parent.
 */
MediaPackageResponse::MediaPackageResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new MediaPackageResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a MediaPackageResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaPackageResponsePrivate.
 */
MediaPackageResponse::MediaPackageResponse(MediaPackageResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void MediaPackageResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaPackageResponse);
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
 * \class QtAws::MediaPackage::MediaPackageResponsePrivate
 * \brief The MediaPackageResponsePrivate class provides private implementation for MediaPackageResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a MediaPackageResponsePrivate object with public implementation \a q.
 */
MediaPackageResponsePrivate::MediaPackageResponsePrivate(
    MediaPackageResponse * const q) : q_ptr(q)
{

}

} // namespace MediaPackage
} // namespace QtAws
