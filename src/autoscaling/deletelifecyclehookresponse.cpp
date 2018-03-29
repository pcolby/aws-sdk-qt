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

#include "deletelifecyclehookresponse.h"
#include "deletelifecyclehookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DeleteLifecycleHookResponse
 *
 * @brief  Handles AutoScaling DeleteLifecycleHook responses.
 *
 * @see    AutoScalingClient::deleteLifecycleHook
 */

/**
 * @brief  Constructs a new DeleteLifecycleHookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLifecycleHookResponse::DeleteLifecycleHookResponse(
        const DeleteLifecycleHookRequest &request,
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
} // namespace QtAws
