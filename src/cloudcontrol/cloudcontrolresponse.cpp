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

#include "cloudcontrolresponse.h"
#include "cloudcontrolresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CloudControlResponse
 * \brief The CloudControlResponse class provides an interface for CloudControl responses.
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CloudControlResponse object with parent \a parent.
 */
CloudControlResponse::CloudControlResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudControlResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudControlResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudControlResponsePrivate.
 */
CloudControlResponse::CloudControlResponse(CloudControlResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudControlResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudControlResponse);
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
 * \class QtAws::CloudControl::CloudControlResponsePrivate
 * \brief The CloudControlResponsePrivate class provides private implementation for CloudControlResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CloudControlResponsePrivate object with public implementation \a q.
 */
CloudControlResponsePrivate::CloudControlResponsePrivate(
    CloudControlResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudControl
} // namespace QtAws
