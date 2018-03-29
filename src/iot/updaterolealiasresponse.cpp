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

#include "updaterolealiasresponse.h"
#include "updaterolealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  UpdateRoleAliasResponse
 *
 * @brief  Handles IoT UpdateRoleAlias responses.
 *
 * @see    IoTClient::updateRoleAlias
 */

/**
 * @brief  Constructs a new UpdateRoleAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRoleAliasResponse::UpdateRoleAliasResponse(
        const UpdateRoleAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateRoleAliasResponse(new UpdateRoleAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateRoleAliasRequest(request));
    setReply(reply);
}

const UpdateRoleAliasRequest * UpdateRoleAliasResponse::request() const
{
    Q_D(const UpdateRoleAliasResponse);
    return static_cast<const UpdateRoleAliasRequest *>(d->request);
}

/**
 * @brief  Parse a IoT UpdateRoleAlias response.
 *
 * @param  response  Response to parse.
 */
void UpdateRoleAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRoleAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRoleAliasResponsePrivate
 *
 * @brief  Private implementation for UpdateRoleAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRoleAliasResponse instance.
 */
UpdateRoleAliasResponsePrivate::UpdateRoleAliasResponsePrivate(
    UpdateRoleAliasResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT UpdateRoleAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRoleAliasResponsePrivate::parseUpdateRoleAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoleAliasResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
