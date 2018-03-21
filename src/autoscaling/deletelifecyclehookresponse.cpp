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

#include "deletelifecyclehookresponse.h"
#include "deletelifecyclehookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DeleteLifecycleHookResponse
 *
 * @brief  Handles AutoScaling DeleteLifecycleHook responses.
 *
 * @see    AutoScalingClient::deleteLifecycleHook
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLifecycleHookResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteLifecycleHookResponsePrivate(this), parent)
{
    setRequest(new DeleteLifecycleHookRequest(request));
    setReply(reply);
}

const DeleteLifecycleHookRequest * DeleteLifecycleHookResponse::request() const
{
    Q_D(const DeleteLifecycleHookResponse);
    return static_cast<const DeleteLifecycleHookRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DeleteLifecycleHook response.
 *
 * @param  response  Response to parse.
 */
void DeleteLifecycleHookResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLifecycleHookResponsePrivate
 *
 * @brief  Private implementation for DeleteLifecycleHookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLifecycleHookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLifecycleHookResponse instance.
 */
DeleteLifecycleHookResponsePrivate::DeleteLifecycleHookResponsePrivate(
    DeleteLifecycleHookQueueResponse * const q) : DeleteLifecycleHookPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DeleteLifecycleHookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLifecycleHookResponsePrivate::DeleteLifecycleHookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLifecycleHookResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
