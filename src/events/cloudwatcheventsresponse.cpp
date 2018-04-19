/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cloudwatcheventsresponse.h"
#include "cloudwatcheventsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::CloudWatchEventsResponse
 * \brief The CloudWatchEventsResponse class provides an interface for CloudWatchEvents responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CloudWatchEventsResponse object with parent \a parent.
 */
CloudWatchEventsResponse::CloudWatchEventsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchEventsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudWatchEventsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudWatchEventsResponsePrivate.
 */
CloudWatchEventsResponse::CloudWatchEventsResponse(CloudWatchEventsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudWatchEventsResponse::parseFailure(QIODevice &response)
{
    Q_D(CloudWatchEventsResponse);
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
 * \class QtAws::CloudWatchEvents::CloudWatchEventsResponsePrivate
 * \brief The CloudWatchEventsResponsePrivate class provides private implementation for CloudWatchEventsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CloudWatchEventsResponsePrivate object with public implementation \a q.
 */
CloudWatchEventsResponsePrivate::CloudWatchEventsResponsePrivate(
    CloudWatchEventsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
