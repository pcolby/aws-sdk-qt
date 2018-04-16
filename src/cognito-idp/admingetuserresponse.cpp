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

#include "admingetuserresponse.h"
#include "admingetuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetUserResponse
 *
 * \brief The AdminGetUserResponse class encapsulates CognitoIdentityProvider AdminGetUser responses.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminGetUser
 */

/*!
 * @brief  Constructs a new AdminGetUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminGetUserResponse::AdminGetUserResponse(
        const AdminGetUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminGetUserResponsePrivate(this), parent)
{
    setRequest(new AdminGetUserRequest(request));
    setReply(reply);
}

const AdminGetUserRequest * AdminGetUserResponse::request() const
{
    Q_D(const AdminGetUserResponse);
    return static_cast<const AdminGetUserRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider AdminGetUser response.
 *
 * @param  response  Response to parse.
 */
void AdminGetUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminGetUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AdminGetUserResponsePrivate
 *
 * \brief Private implementation for AdminGetUserResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AdminGetUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminGetUserResponse instance.
 */
AdminGetUserResponsePrivate::AdminGetUserResponsePrivate(
    AdminGetUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider AdminGetUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminGetUserResponsePrivate::parseAdminGetUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminGetUserResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
