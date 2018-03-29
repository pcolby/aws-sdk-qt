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

#include "runtaskresponse.h"
#include "runtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  RunTaskResponse
 *
 * @brief  Handles ECS RunTask responses.
 *
 * @see    ECSClient::runTask
 */

/**
 * @brief  Constructs a new RunTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RunTaskResponse::RunTaskResponse(
        const RunTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new RunTaskResponsePrivate(this), parent)
{
    setRequest(new RunTaskRequest(request));
    setReply(reply);
}

const RunTaskRequest * RunTaskResponse::request() const
{
    Q_D(const RunTaskResponse);
    return static_cast<const RunTaskRequest *>(d->request);
}

/**
 * @brief  Parse a ECS RunTask response.
 *
 * @param  response  Response to parse.
 */
void RunTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RunTaskResponsePrivate
 *
 * @brief  Private implementation for RunTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RunTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RunTaskResponse instance.
 */
RunTaskResponsePrivate::RunTaskResponsePrivate(
    RunTaskQueueResponse * const q) : RunTaskPrivate(q)
{

}

/**
 * @brief  Parse an ECS RunTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RunTaskResponsePrivate::RunTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunTaskResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS
