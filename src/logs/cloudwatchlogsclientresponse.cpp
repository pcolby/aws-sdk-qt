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

#include "cloudwatchlogsclientresponse.h"
#include "cloudwatchlogsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  CloudWatchLogsClientResponse
 *
 * @brief  Handles CloudWatchLogs CloudWatchLogsClient responses.
 *
 * @see    CloudWatchLogsClient::cloudWatchLogsClient
 */

/**
 * @brief  Constructs a new CloudWatchLogsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudWatchLogsClientResponse::CloudWatchLogsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudWatchLogsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudWatchLogsClientResponsePrivate
 *
 * @brief  Private implementation for CloudWatchLogsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchLogsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchLogsClientResponse instance.
 */
CloudWatchLogsClientResponsePrivate::CloudWatchLogsClientResponsePrivate(
    CloudWatchLogsClientQueueResponse * const q) : CloudWatchLogsClientPrivate(q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
