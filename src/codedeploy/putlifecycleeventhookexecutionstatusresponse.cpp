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

#include "putlifecycleeventhookexecutionstatusresponse.h"
#include "putlifecycleeventhookexecutionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  PutLifecycleEventHookExecutionStatusResponse
 *
 * @brief  Handles CodeDeploy PutLifecycleEventHookExecutionStatus responses.
 *
 * @see    CodeDeployClient::putLifecycleEventHookExecutionStatus
 */

/**
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutLifecycleEventHookExecutionStatusResponse::PutLifecycleEventHookExecutionStatusResponse(
        const PutLifecycleEventHookExecutionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutLifecycleEventHookExecutionStatusResponse(new PutLifecycleEventHookExecutionStatusResponsePrivate(this), parent)
{
    setRequest(new PutLifecycleEventHookExecutionStatusRequest(request));
    setReply(reply);
}

const PutLifecycleEventHookExecutionStatusRequest * PutLifecycleEventHookExecutionStatusResponse::request() const
{
    Q_D(const PutLifecycleEventHookExecutionStatusResponse);
    return static_cast<const PutLifecycleEventHookExecutionStatusRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy PutLifecycleEventHookExecutionStatus response.
 *
 * @param  response  Response to parse.
 */
void PutLifecycleEventHookExecutionStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutLifecycleEventHookExecutionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutLifecycleEventHookExecutionStatusResponsePrivate
 *
 * @brief  Private implementation for PutLifecycleEventHookExecutionStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutLifecycleEventHookExecutionStatusResponse instance.
 */
PutLifecycleEventHookExecutionStatusResponsePrivate::PutLifecycleEventHookExecutionStatusResponsePrivate(
    PutLifecycleEventHookExecutionStatusResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy PutLifecycleEventHookExecutionStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutLifecycleEventHookExecutionStatusResponsePrivate::parsePutLifecycleEventHookExecutionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLifecycleEventHookExecutionStatusResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
