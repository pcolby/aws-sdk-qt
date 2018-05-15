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

#include "cloudtrailresponse.h"
#include "cloudtrailresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CloudTrailResponse
 * \brief The CloudTrailResponse class provides an interface for CloudTrail responses.
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CloudTrailResponse object with parent \a parent.
 */
CloudTrailResponse::CloudTrailResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudTrailResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudTrailResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudTrailResponsePrivate.
 */
CloudTrailResponse::CloudTrailResponse(CloudTrailResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudTrailResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudTrailResponse);
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
 * \class QtAws::CloudTrail::CloudTrailResponsePrivate
 * \brief The CloudTrailResponsePrivate class provides private implementation for CloudTrailResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CloudTrailResponsePrivate object with public implementation \a q.
 */
CloudTrailResponsePrivate::CloudTrailResponsePrivate(
    CloudTrailResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudTrail
} // namespace QtAws
