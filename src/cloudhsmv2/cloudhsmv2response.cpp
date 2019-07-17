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

#include "cloudhsmv2response.h"
#include "cloudhsmv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CloudHSMV2Response
 * \brief The CloudHSMV2Response class provides an interface for CloudHSMV2 responses.
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a CloudHSMV2Response object with parent \a parent.
 */
CloudHSMV2Response::CloudHSMV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudHSMV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudHSMV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHSMV2ResponsePrivate.
 */
CloudHSMV2Response::CloudHSMV2Response(CloudHSMV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudHSMV2Response::parseFailure(QIODevice &response)
{
    //Q_D(CloudHSMV2Response);
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
 * \class QtAws::CloudHSMV2::CloudHSMV2ResponsePrivate
 * \brief The CloudHSMV2ResponsePrivate class provides private implementation for CloudHSMV2Response.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a CloudHSMV2ResponsePrivate object with public implementation \a q.
 */
CloudHSMV2ResponsePrivate::CloudHSMV2ResponsePrivate(
    CloudHSMV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
