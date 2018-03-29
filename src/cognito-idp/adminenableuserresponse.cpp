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

#include "adminenableuserresponse.h"
#include "adminenableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminEnableUserResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminEnableUser responses.
 *
 * @see    CognitoIdentityProviderClient::adminEnableUser
 */

/**
 * @brief  Constructs a new AdminEnableUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminEnableUserResponse::AdminEnableUserResponse(
        const AdminEnableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminEnableUserResponsePrivate(this), parent)
{
    setRequest(new AdminEnableUserRequest(request));
    setReply(reply);
}

const AdminEnableUserRequest * AdminEnableUserResponse::request() const
{
    Q_D(const AdminEnableUserResponse);
    return static_cast<const AdminEnableUserRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminEnableUser response.
 *
 * @param  response  Response to parse.
 */
void AdminEnableUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminEnableUserResponsePrivate
 *
 * @brief  Private implementation for AdminEnableUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminEnableUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminEnableUserResponse instance.
 */
AdminEnableUserResponsePrivate::AdminEnableUserResponsePrivate(
    AdminEnableUserQueueResponse * const q) : AdminEnableUserPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminEnableUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminEnableUserResponsePrivate::AdminEnableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminEnableUserResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
