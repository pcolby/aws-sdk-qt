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

#include "admincreateuserresponse.h"
#include "admincreateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminCreateUserResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminCreateUser responses.
 *
 * @see    CognitoIdentityProviderClient::adminCreateUser
 */

/**
 * @brief  Constructs a new AdminCreateUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminCreateUserResponse::AdminCreateUserResponse(
        const AdminCreateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminCreateUserResponsePrivate(this), parent)
{
    setRequest(new AdminCreateUserRequest(request));
    setReply(reply);
}

const AdminCreateUserRequest * AdminCreateUserResponse::request() const
{
    Q_D(const AdminCreateUserResponse);
    return static_cast<const AdminCreateUserRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminCreateUser response.
 *
 * @param  response  Response to parse.
 */
void AdminCreateUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminCreateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminCreateUserResponsePrivate
 *
 * @brief  Private implementation for AdminCreateUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminCreateUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminCreateUserResponse instance.
 */
AdminCreateUserResponsePrivate::AdminCreateUserResponsePrivate(
    AdminCreateUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminCreateUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminCreateUserResponsePrivate::parseAdminCreateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminCreateUserResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
