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

#include "kinesisvideoresponse.h"
#include "kinesisvideoresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::KinesisVideoResponse
 * \brief The KinesisVideoResponse class provides an interface for KinesisVideo responses.
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a KinesisVideoResponse object with parent \a parent.
 */
KinesisVideoResponse::KinesisVideoResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new KinesisVideoResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a KinesisVideoResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoResponsePrivate.
 */
KinesisVideoResponse::KinesisVideoResponse(KinesisVideoResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void KinesisVideoResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisVideoResponse);
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
 * \class QtAws::KinesisVideo::KinesisVideoResponsePrivate
 * \brief The KinesisVideoResponsePrivate class provides private implementation for KinesisVideoResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a KinesisVideoResponsePrivate object with public implementation \a q.
 */
KinesisVideoResponsePrivate::KinesisVideoResponsePrivate(
    KinesisVideoResponse * const q) : q_ptr(q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
