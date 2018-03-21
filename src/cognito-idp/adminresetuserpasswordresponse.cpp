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

#include "adminresetuserpasswordresponse.h"
#include "adminresetuserpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminResetUserPasswordResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminResetUserPassword responses.
 *
 * @see    CognitoIdentityProviderClient::adminResetUserPassword
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminResetUserPasswordResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminResetUserPasswordResponsePrivate(this), parent)
{
    setRequest(new AdminResetUserPasswordRequest(request));
    setReply(reply);
}

const AdminResetUserPasswordRequest * AdminResetUserPasswordResponse::request() const
{
    Q_D(const AdminResetUserPasswordResponse);
    return static_cast<const AdminResetUserPasswordRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminResetUserPassword response.
 *
 * @param  response  Response to parse.
 */
void AdminResetUserPasswordResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminResetUserPasswordResponsePrivate
 *
 * @brief  Private implementation for AdminResetUserPasswordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminResetUserPasswordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminResetUserPasswordResponse instance.
 */
AdminResetUserPasswordResponsePrivate::AdminResetUserPasswordResponsePrivate(
    AdminResetUserPasswordQueueResponse * const q) : AdminResetUserPasswordPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminResetUserPasswordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminResetUserPasswordResponsePrivate::AdminResetUserPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminResetUserPasswordResponse"));
    /// @todo
}
