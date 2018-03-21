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

#include "adminremoveuserfromgroupresponse.h"
#include "adminremoveuserfromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminRemoveUserFromGroupResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminRemoveUserFromGroup responses.
 *
 * @see    CognitoIdentityProviderClient::adminRemoveUserFromGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminRemoveUserFromGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminRemoveUserFromGroupResponsePrivate(this), parent)
{
    setRequest(new AdminRemoveUserFromGroupRequest(request));
    setReply(reply);
}

const AdminRemoveUserFromGroupRequest * AdminRemoveUserFromGroupResponse::request() const
{
    Q_D(const AdminRemoveUserFromGroupResponse);
    return static_cast<const AdminRemoveUserFromGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminRemoveUserFromGroup response.
 *
 * @param  response  Response to parse.
 */
void AdminRemoveUserFromGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminRemoveUserFromGroupResponsePrivate
 *
 * @brief  Private implementation for AdminRemoveUserFromGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminRemoveUserFromGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminRemoveUserFromGroupResponse instance.
 */
AdminRemoveUserFromGroupResponsePrivate::AdminRemoveUserFromGroupResponsePrivate(
    AdminRemoveUserFromGroupQueueResponse * const q) : AdminRemoveUserFromGroupPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminRemoveUserFromGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminRemoveUserFromGroupResponsePrivate::AdminRemoveUserFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminRemoveUserFromGroupResponse"));
    /// @todo
}
