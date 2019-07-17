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

#include "s3response.h"
#include "s3response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::S3Response
 * \brief The S3Response class provides an interface for S3 responses.
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a S3Response object with parent \a parent.
 */
S3Response::S3Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new S3ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a S3Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3ResponsePrivate.
 */
S3Response::S3Response(S3ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void S3Response::parseFailure(QIODevice &response)
{
    //Q_D(S3Response);
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
 * \class QtAws::S3::S3ResponsePrivate
 * \brief The S3ResponsePrivate class provides private implementation for S3Response.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a S3ResponsePrivate object with public implementation \a q.
 */
S3ResponsePrivate::S3ResponsePrivate(
    S3Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace S3
} // namespace QtAws
