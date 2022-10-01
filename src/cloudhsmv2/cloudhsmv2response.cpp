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

#include "cloudhsmv2response.h"
#include "cloudhsmv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::CloudHsmV2Response
 * \brief The CloudHsmV2Response class provides an interface for CloudHsmV2 responses.
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CloudHsmV2Response object with parent \a parent.
 */
CloudHsmV2Response::CloudHsmV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudHsmV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudHsmV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHsmV2ResponsePrivate.
 */
CloudHsmV2Response::CloudHsmV2Response(CloudHsmV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudHsmV2Response::parseFailure(QIODevice &response)
{
    //Q_D(CloudHsmV2Response);
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
 * \class QtAws::CloudHsmV2::CloudHsmV2ResponsePrivate
 * \brief The CloudHsmV2ResponsePrivate class provides private implementation for CloudHsmV2Response.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CloudHsmV2ResponsePrivate object with public implementation \a q.
 */
CloudHsmV2ResponsePrivate::CloudHsmV2ResponsePrivate(
    CloudHsmV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
