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

#include "cloudwatcheventsclientresponse.h"
#include "cloudwatcheventsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  CloudWatchEventsClientResponse
 *
 * @brief  Handles CloudWatchEvents CloudWatchEventsClient responses.
 *
 * @see    CloudWatchEventsClient::cloudWatchEventsClient
 */

/**
 * @brief  Constructs a new CloudWatchEventsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudWatchEventsClientResponse::CloudWatchEventsClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudWatchEventsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudWatchEventsClientResponsePrivate
 *
 * @brief  Private implementation for CloudWatchEventsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchEventsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchEventsClientResponse instance.
 */
CloudWatchEventsClientResponsePrivate::CloudWatchEventsClientResponsePrivate(
    CloudWatchEventsClientQueueResponse * const q) : CloudWatchEventsClientPrivate(q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
