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

#include "stsresponse.h"
#include "stsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::StsResponse
 * \brief The StsResponse class provides an interface for STS responses.
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a StsResponse object with parent \a parent.
 */
StsResponse::StsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new StsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a StsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from StsResponsePrivate.
 */
StsResponse::StsResponse(StsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void StsResponse::parseFailure(QIODevice &response)
{
    //Q_D(StsResponse);
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
 * \class QtAws::STS::StsResponsePrivate
 * \brief The StsResponsePrivate class provides private implementation for StsResponse.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a StsResponsePrivate object with public implementation \a q.
 */
StsResponsePrivate::StsResponsePrivate(
    StsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace STS
} // namespace QtAws
