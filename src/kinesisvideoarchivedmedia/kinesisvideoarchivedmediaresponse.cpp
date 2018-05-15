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

#include "kinesisvideoarchivedmediaresponse.h"
#include "kinesisvideoarchivedmediaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaResponse
 * \brief The KinesisVideoArchivedMediaResponse class provides an interface for KinesisVideoArchivedMedia responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a KinesisVideoArchivedMediaResponse object with parent \a parent.
 */
KinesisVideoArchivedMediaResponse::KinesisVideoArchivedMediaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisVideoArchivedMediaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisVideoArchivedMediaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoArchivedMediaResponsePrivate.
 */
KinesisVideoArchivedMediaResponse::KinesisVideoArchivedMediaResponse(KinesisVideoArchivedMediaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisVideoArchivedMediaResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisVideoArchivedMediaResponse);
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
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaResponsePrivate
 * \brief The KinesisVideoArchivedMediaResponsePrivate class provides private implementation for KinesisVideoArchivedMediaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a KinesisVideoArchivedMediaResponsePrivate object with public implementation \a q.
 */
KinesisVideoArchivedMediaResponsePrivate::KinesisVideoArchivedMediaResponsePrivate(
    KinesisVideoArchivedMediaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
