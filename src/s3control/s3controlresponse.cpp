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

#include "s3controlresponse.h"
#include "s3controlresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::S3ControlResponse
 * \brief The S3ControlResponse class provides an interface for S3Control responses.
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a S3ControlResponse object with parent \a parent.
 */
S3ControlResponse::S3ControlResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new S3ControlResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a S3ControlResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3ControlResponsePrivate.
 */
S3ControlResponse::S3ControlResponse(S3ControlResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void S3ControlResponse::parseFailure(QIODevice &response)
{
    //Q_D(S3ControlResponse);
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
 * \class QtAws::S3Control::S3ControlResponsePrivate
 * \brief The S3ControlResponsePrivate class provides private implementation for S3ControlResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a S3ControlResponsePrivate object with public implementation \a q.
 */
S3ControlResponsePrivate::S3ControlResponsePrivate(
    S3ControlResponse * const q) : q_ptr(q)
{

}

} // namespace S3Control
} // namespace QtAws
