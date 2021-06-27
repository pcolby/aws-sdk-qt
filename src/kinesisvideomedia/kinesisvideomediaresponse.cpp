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

#include "kinesisvideomediaresponse.h"
#include "kinesisvideomediaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoMedia {

/*!
 * \class QtAws::KinesisVideoMedia::KinesisVideoMediaResponse
 * \brief The KinesisVideoMediaResponse class provides an interface for KinesisVideoMedia responses.
 *
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a KinesisVideoMediaResponse object with parent \a parent.
 */
KinesisVideoMediaResponse::KinesisVideoMediaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new KinesisVideoMediaResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a KinesisVideoMediaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoMediaResponsePrivate.
 */
KinesisVideoMediaResponse::KinesisVideoMediaResponse(KinesisVideoMediaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void KinesisVideoMediaResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisVideoMediaResponse);
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
 * \class QtAws::KinesisVideoMedia::KinesisVideoMediaResponsePrivate
 * \brief The KinesisVideoMediaResponsePrivate class provides private implementation for KinesisVideoMediaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a KinesisVideoMediaResponsePrivate object with public implementation \a q.
 */
KinesisVideoMediaResponsePrivate::KinesisVideoMediaResponsePrivate(
    KinesisVideoMediaResponse * const q) : q_ptr(q)
{

}

} // namespace KinesisVideoMedia
} // namespace QtAws
