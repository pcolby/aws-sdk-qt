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

/**
 * @class  CloudWatchEventsResponse
 *
 * @brief  Handles CloudWatchEvents CloudWatchEvents responses.
 *
 * @see    CloudWatchEventsClient::cloudWatchEvents
 */

/**
 * @brief  Constructs a new CloudWatchEventsResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudWatchEventsResponse::CloudWatchEventsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchEventsResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void CloudWatchEventsResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
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

/**
 * @internal
 *
 * @class  CloudWatchEventsResponsePrivate
 *
 * @brief  Private implementation for CloudWatchEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchEventsResponse instance.
 */
CloudWatchEventsResponsePrivate::CloudWatchEventsResponsePrivate(
    CloudWatchEventsQueueResponse * const q) : CloudWatchEventsPrivate(q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
