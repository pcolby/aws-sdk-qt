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

#include "updateroleresponse.h"
#include "updateroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  UpdateRoleResponse
 *
 * @brief  Handles IAM UpdateRole responses.
 *
 * @see    IAMClient::updateRole
 */

/**
 * @brief  Constructs a new UpdateRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRoleResponse::UpdateRoleResponse(
        const UpdateRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateRoleResponsePrivate(this), parent)
{
    setRequest(new UpdateRoleRequest(request));
    setReply(reply);
}

const UpdateRoleRequest * UpdateRoleResponse::request() const
{
    Q_D(const UpdateRoleResponse);
    return static_cast<const UpdateRoleRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateRole response.
 *
 * @param  response  Response to parse.
 */
void UpdateRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRoleResponsePrivate
 *
 * @brief  Private implementation for UpdateRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRoleResponse instance.
 */
UpdateRoleResponsePrivate::UpdateRoleResponsePrivate(
    UpdateRoleQueueResponse * const q) : UpdateRolePrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRoleResponsePrivate::UpdateRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoleResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
