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

#include "cloudfrontresponse.h"
#include "cloudfrontresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CloudFrontResponse
 * \brief The CloudFrontResponse class provides an interface for CloudFront responses.
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CloudFrontResponse object with parent \a parent.
 */
CloudFrontResponse::CloudFrontResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudFrontResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudFrontResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudFrontResponsePrivate.
 */
CloudFrontResponse::CloudFrontResponse(CloudFrontResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudFrontResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudFrontResponse);
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
 * \class QtAws::CloudFront::CloudFrontResponsePrivate
 * \brief The CloudFrontResponsePrivate class provides private implementation for CloudFrontResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CloudFrontResponsePrivate object with public implementation \a q.
 */
CloudFrontResponsePrivate::CloudFrontResponsePrivate(
    CloudFrontResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudFront
} // namespace QtAws
