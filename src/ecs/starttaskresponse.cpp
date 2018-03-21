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

#include "starttaskresponse.h"
#include "starttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  StartTaskResponse
 *
 * @brief  Handles ECS StartTask responses.
 *
 * @see    ECSClient::startTask
 */

/**
 * @brief  Constructs a new StartTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartTaskResponse::StartTaskResponse(
        const StartTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new StartTaskResponsePrivate(this), parent)
{
    setRequest(new StartTaskRequest(request));
    setReply(reply);
}

const StartTaskRequest * StartTaskResponse::request() const
{
    Q_D(const StartTaskResponse);
    return static_cast<const StartTaskRequest *>(d->request);
}

/**
 * @brief  Parse a ECS StartTask response.
 *
 * @param  response  Response to parse.
 */
void StartTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartTaskResponsePrivate
 *
 * @brief  Private implementation for StartTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartTaskResponse instance.
 */
StartTaskResponsePrivate::StartTaskResponsePrivate(
    StartTaskQueueResponse * const q) : StartTaskPrivate(q)
{

}

/**
 * @brief  Parse an ECS StartTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartTaskResponsePrivate::StartTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTaskResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS
