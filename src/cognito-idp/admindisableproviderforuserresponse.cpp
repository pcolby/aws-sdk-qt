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

#include "admindisableproviderforuserresponse.h"
#include "admindisableproviderforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminDisableProviderForUserResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminDisableProviderForUser responses.
 *
 * @see    CognitoIdentityProviderClient::adminDisableProviderForUser
 */

/**
 * @brief  Constructs a new AdminDisableProviderForUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminDisableProviderForUserResponse::AdminDisableProviderForUserResponse(
        const AdminDisableProviderForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminDisableProviderForUserResponsePrivate(this), parent)
{
    setRequest(new AdminDisableProviderForUserRequest(request));
    setReply(reply);
}

const AdminDisableProviderForUserRequest * AdminDisableProviderForUserResponse::request() const
{
    Q_D(const AdminDisableProviderForUserResponse);
    return static_cast<const AdminDisableProviderForUserRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminDisableProviderForUser response.
 *
 * @param  response  Response to parse.
 */
void AdminDisableProviderForUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminDisableProviderForUserResponsePrivate
 *
 * @brief  Private implementation for AdminDisableProviderForUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminDisableProviderForUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminDisableProviderForUserResponse instance.
 */
AdminDisableProviderForUserResponsePrivate::AdminDisableProviderForUserResponsePrivate(
    AdminDisableProviderForUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminDisableProviderForUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminDisableProviderForUserResponsePrivate::AdminDisableProviderForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDisableProviderForUserResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
