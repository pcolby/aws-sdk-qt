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

#include "adminuserglobalsignoutresponse.h"
#include "adminuserglobalsignoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUserGlobalSignOutResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminUserGlobalSignOut responses.
 *
 * @see    CognitoIdentityProviderClient::adminUserGlobalSignOut
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminUserGlobalSignOutResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUserGlobalSignOutResponsePrivate(this), parent)
{
    setRequest(new AdminUserGlobalSignOutRequest(request));
    setReply(reply);
}

const AdminUserGlobalSignOutRequest * AdminUserGlobalSignOutResponse::request() const
{
    Q_D(const AdminUserGlobalSignOutResponse);
    return static_cast<const AdminUserGlobalSignOutRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminUserGlobalSignOut response.
 *
 * @param  response  Response to parse.
 */
void AdminUserGlobalSignOutResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminUserGlobalSignOutResponsePrivate
 *
 * @brief  Private implementation for AdminUserGlobalSignOutResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUserGlobalSignOutResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminUserGlobalSignOutResponse instance.
 */
AdminUserGlobalSignOutResponsePrivate::AdminUserGlobalSignOutResponsePrivate(
    AdminUserGlobalSignOutQueueResponse * const q) : AdminUserGlobalSignOutPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminUserGlobalSignOutResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminUserGlobalSignOutResponsePrivate::AdminUserGlobalSignOutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUserGlobalSignOutResponse"));
    /// @todo
}
