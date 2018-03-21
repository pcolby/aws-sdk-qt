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

#include "getidentitypoolrolesresponse.h"
#include "getidentitypoolrolesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  GetIdentityPoolRolesResponse
 *
 * @brief  Handles CognitoIdentity GetIdentityPoolRoles responses.
 *
 * @see    CognitoIdentityClient::getIdentityPoolRoles
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityPoolRolesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new GetIdentityPoolRolesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityPoolRolesRequest(request));
    setReply(reply);
}

const GetIdentityPoolRolesRequest * GetIdentityPoolRolesResponse::request() const
{
    Q_D(const GetIdentityPoolRolesResponse);
    return static_cast<const GetIdentityPoolRolesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity GetIdentityPoolRoles response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityPoolRolesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdentityPoolRolesResponsePrivate
 *
 * @brief  Private implementation for GetIdentityPoolRolesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoolRolesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityPoolRolesResponse instance.
 */
GetIdentityPoolRolesResponsePrivate::GetIdentityPoolRolesResponsePrivate(
    GetIdentityPoolRolesQueueResponse * const q) : GetIdentityPoolRolesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity GetIdentityPoolRolesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityPoolRolesResponsePrivate::GetIdentityPoolRolesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityPoolRolesResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace AWS
