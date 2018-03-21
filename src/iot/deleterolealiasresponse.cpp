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

#include "deleterolealiasresponse.h"
#include "deleterolealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DeleteRoleAliasResponse
 *
 * @brief  Handles IoT DeleteRoleAlias responses.
 *
 * @see    IoTClient::deleteRoleAlias
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRoleAliasResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteRoleAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteRoleAliasRequest(request));
    setReply(reply);
}

const DeleteRoleAliasRequest * DeleteRoleAliasResponse::request() const
{
    Q_D(const DeleteRoleAliasResponse);
    return static_cast<const DeleteRoleAliasRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteRoleAlias response.
 *
 * @param  response  Response to parse.
 */
void DeleteRoleAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRoleAliasResponsePrivate
 *
 * @brief  Private implementation for DeleteRoleAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRoleAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRoleAliasResponse instance.
 */
DeleteRoleAliasResponsePrivate::DeleteRoleAliasResponsePrivate(
    DeleteRoleAliasQueueResponse * const q) : DeleteRoleAliasPrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteRoleAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRoleAliasResponsePrivate::DeleteRoleAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoleAliasResponse"));
    /// @todo
}
