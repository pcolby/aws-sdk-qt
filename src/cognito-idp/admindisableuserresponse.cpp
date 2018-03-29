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

#include "admindisableuserresponse.h"
#include "admindisableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminDisableUserResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminDisableUser responses.
 *
 * @see    CognitoIdentityProviderClient::adminDisableUser
 */

/**
 * @brief  Constructs a new AdminDisableUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminDisableUserResponse::AdminDisableUserResponse(
        const AdminDisableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AdminDisableUserResponse(new AdminDisableUserResponsePrivate(this), parent)
{
    setRequest(new AdminDisableUserRequest(request));
    setReply(reply);
}

const AdminDisableUserRequest * AdminDisableUserResponse::request() const
{
    Q_D(const AdminDisableUserResponse);
    return static_cast<const AdminDisableUserRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminDisableUser response.
 *
 * @param  response  Response to parse.
 */
void AdminDisableUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminDisableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminDisableUserResponsePrivate
 *
 * @brief  Private implementation for AdminDisableUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminDisableUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminDisableUserResponse instance.
 */
AdminDisableUserResponsePrivate::AdminDisableUserResponsePrivate(
    AdminDisableUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminDisableUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminDisableUserResponsePrivate::parseAdminDisableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDisableUserResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
