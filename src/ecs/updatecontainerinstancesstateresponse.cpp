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

#include "updatecontainerinstancesstateresponse.h"
#include "updatecontainerinstancesstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  UpdateContainerInstancesStateResponse
 *
 * @brief  Handles ECS UpdateContainerInstancesState responses.
 *
 * @see    ECSClient::updateContainerInstancesState
 */

/**
 * @brief  Constructs a new UpdateContainerInstancesStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateContainerInstancesStateResponse::UpdateContainerInstancesStateResponse(
        const UpdateContainerInstancesStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new UpdateContainerInstancesStateResponsePrivate(this), parent)
{
    setRequest(new UpdateContainerInstancesStateRequest(request));
    setReply(reply);
}

const UpdateContainerInstancesStateRequest * UpdateContainerInstancesStateResponse::request() const
{
    Q_D(const UpdateContainerInstancesStateResponse);
    return static_cast<const UpdateContainerInstancesStateRequest *>(d->request);
}

/**
 * @brief  Parse a ECS UpdateContainerInstancesState response.
 *
 * @param  response  Response to parse.
 */
void UpdateContainerInstancesStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateContainerInstancesStateResponsePrivate
 *
 * @brief  Private implementation for UpdateContainerInstancesStateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContainerInstancesStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateContainerInstancesStateResponse instance.
 */
UpdateContainerInstancesStateResponsePrivate::UpdateContainerInstancesStateResponsePrivate(
    UpdateContainerInstancesStateResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS UpdateContainerInstancesStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateContainerInstancesStateResponsePrivate::UpdateContainerInstancesStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContainerInstancesStateResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
