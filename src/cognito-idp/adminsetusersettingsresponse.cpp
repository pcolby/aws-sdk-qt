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

#include "adminsetusersettingsresponse.h"
#include "adminsetusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminSetUserSettingsResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminSetUserSettings responses.
 *
 * @see    CognitoIdentityProviderClient::adminSetUserSettings
 */

/**
 * @brief  Constructs a new AdminSetUserSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminSetUserSettingsResponse::AdminSetUserSettingsResponse(
        const AdminSetUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminSetUserSettingsResponsePrivate(this), parent)
{
    setRequest(new AdminSetUserSettingsRequest(request));
    setReply(reply);
}

const AdminSetUserSettingsRequest * AdminSetUserSettingsResponse::request() const
{
    Q_D(const AdminSetUserSettingsResponse);
    return static_cast<const AdminSetUserSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminSetUserSettings response.
 *
 * @param  response  Response to parse.
 */
void AdminSetUserSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminSetUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminSetUserSettingsResponsePrivate
 *
 * @brief  Private implementation for AdminSetUserSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminSetUserSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminSetUserSettingsResponse instance.
 */
AdminSetUserSettingsResponsePrivate::AdminSetUserSettingsResponsePrivate(
    AdminSetUserSettingsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminSetUserSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminSetUserSettingsResponsePrivate::parseAdminSetUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminSetUserSettingsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
