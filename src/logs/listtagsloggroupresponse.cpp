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

#include "listtagsloggroupresponse.h"
#include "listtagsloggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  ListTagsLogGroupResponse
 *
 * @brief  Handles CloudWatchLogs ListTagsLogGroup responses.
 *
 * @see    CloudWatchLogsClient::listTagsLogGroup
 */

/**
 * @brief  Constructs a new ListTagsLogGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsLogGroupResponse::ListTagsLogGroupResponse(
        const ListTagsLogGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new ListTagsLogGroupResponsePrivate(this), parent)
{
    setRequest(new ListTagsLogGroupRequest(request));
    setReply(reply);
}

const ListTagsLogGroupRequest * ListTagsLogGroupResponse::request() const
{
    Q_D(const ListTagsLogGroupResponse);
    return static_cast<const ListTagsLogGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs ListTagsLogGroup response.
 *
 * @param  response  Response to parse.
 */
void ListTagsLogGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsLogGroupResponsePrivate
 *
 * @brief  Private implementation for ListTagsLogGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsLogGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsLogGroupResponse instance.
 */
ListTagsLogGroupResponsePrivate::ListTagsLogGroupResponsePrivate(
    ListTagsLogGroupQueueResponse * const q) : ListTagsLogGroupPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs ListTagsLogGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsLogGroupResponsePrivate::ListTagsLogGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsLogGroupResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
