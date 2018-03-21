/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "tagloggroupresponse.h"
#include "tagloggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  TagLogGroupResponse
 *
 * @brief  Handles CloudWatchLogs TagLogGroup responses.
 *
 * @see    CloudWatchLogsClient::tagLogGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagLogGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new TagLogGroupResponsePrivate(this), parent)
{
    setRequest(new TagLogGroupRequest(request));
    setReply(reply);
}

const TagLogGroupRequest * TagLogGroupResponse::request() const
{
    Q_D(const TagLogGroupResponse);
    return static_cast<const TagLogGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs TagLogGroup response.
 *
 * @param  response  Response to parse.
 */
void TagLogGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TagLogGroupResponsePrivate
 *
 * @brief  Private implementation for TagLogGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagLogGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagLogGroupResponse instance.
 */
TagLogGroupResponsePrivate::TagLogGroupResponsePrivate(
    TagLogGroupQueueResponse * const q) : TagLogGroupPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs TagLogGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagLogGroupResponsePrivate::TagLogGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagLogGroupResponse"));
    /// @todo
}
