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

#include "createloggroupresponse.h"
#include "createloggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  CreateLogGroupResponse
 *
 * @brief  Handles CloudWatchLogs CreateLogGroup responses.
 *
 * @see    CloudWatchLogsClient::createLogGroup
 */

/**
 * @brief  Constructs a new CreateLogGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLogGroupResponse::CreateLogGroupResponse(
        const CreateLogGroupRequest &request,
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
    Q_D(CreateLogGroupResponse);
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
    CreateLogGroupResponse * const q) : CloudWatchLogsResponsePrivate(q)
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
} // namespace QtAws
