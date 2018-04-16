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

#include "adminlinkproviderforuserresponse.h"
#include "adminlinkproviderforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminLinkProviderForUserResponse
 *
 * \brief The AdminLinkProviderForUserResponse class provides an interace for CognitoIdentityProvider AdminLinkProviderForUser responses.
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
 * \sa CognitoIdentityProviderClient::adminLinkProviderForUser
 */

/*!
 * @brief  Constructs a new AdminLinkProviderForUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminLinkProviderForUserResponse::AdminLinkProviderForUserResponse(
        const AdminLinkProviderForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminLinkProviderForUserResponsePrivate(this), parent)
{
    setRequest(new AdminLinkProviderForUserRequest(request));
    setReply(reply);
}

const AdminLinkProviderForUserRequest * AdminLinkProviderForUserResponse::request() const
{
    Q_D(const AdminLinkProviderForUserResponse);
    return static_cast<const AdminLinkProviderForUserRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider AdminLinkProviderForUser response.
 *
 * @param  response  Response to parse.
 */
void AdminLinkProviderForUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminLinkProviderForUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AdminLinkProviderForUserResponsePrivate
 *
 * \brief Private implementation for AdminLinkProviderForUserResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AdminLinkProviderForUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminLinkProviderForUserResponse instance.
 */
AdminLinkProviderForUserResponsePrivate::AdminLinkProviderForUserResponsePrivate(
    AdminLinkProviderForUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider AdminLinkProviderForUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminLinkProviderForUserResponsePrivate::parseAdminLinkProviderForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminLinkProviderForUserResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
