/*
    Copyright 2013-2020 Paul Colby

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

#include "cloudwatchresponse.h"
#include "cloudwatchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::CloudWatchResponse
 * \brief The CloudWatchResponse class provides an interface for CloudWatch responses.
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a CloudWatchResponse object with parent \a parent.
 */
CloudWatchResponse::CloudWatchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudWatchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudWatchResponsePrivate.
 */
CloudWatchResponse::CloudWatchResponse(CloudWatchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudWatchResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudWatchResponse);
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
 * \class QtAws::CloudWatch::CloudWatchResponsePrivate
 * \brief The CloudWatchResponsePrivate class provides private implementation for CloudWatchResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a CloudWatchResponsePrivate object with public implementation \a q.
 */
CloudWatchResponsePrivate::CloudWatchResponsePrivate(
    CloudWatchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudWatch
} // namespace QtAws
