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

#include "createloggroupresponse.h"
#include "createloggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  CreateLogGroupResponse
 *
 * @brief  Handles CloudWatchLogs CreateLogGroup responses.
 *
 * @see    CloudWatchLogsClient::createLogGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLogGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new CreateLogGroupResponsePrivate(this), parent)
{
    setRequest(new CreateLogGroupRequest(request));
    setReply(reply);
}

const CreateLogGroupRequest * CreateLogGroupResponse::request() const
{
    Q_D(const CreateLogGroupResponse);
    return static_cast<const CreateLogGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs CreateLogGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateLogGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLogGroupResponsePrivate
 *
 * @brief  Private implementation for CreateLogGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLogGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLogGroupResponse instance.
 */
CreateLogGroupResponsePrivate::CreateLogGroupResponsePrivate(
    CreateLogGroupQueueResponse * const q) : CreateLogGroupPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs CreateLogGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLogGroupResponsePrivate::CreateLogGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLogGroupResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
