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

#include "admininitiateauthresponse.h"
#include "admininitiateauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminInitiateAuthResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminInitiateAuth responses.
 *
 * @see    CognitoIdentityProviderClient::adminInitiateAuth
 */

/**
 * @brief  Constructs a new AdminInitiateAuthResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminInitiateAuthResponse::AdminInitiateAuthResponse(
        const AdminInitiateAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AdminInitiateAuthResponse(new AdminInitiateAuthResponsePrivate(this), parent)
{
    setRequest(new AdminInitiateAuthRequest(request));
    setReply(reply);
}

const AdminInitiateAuthRequest * AdminInitiateAuthResponse::request() const
{
    Q_D(const AdminInitiateAuthResponse);
    return static_cast<const AdminInitiateAuthRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminInitiateAuth response.
 *
 * @param  response  Response to parse.
 */
void AdminInitiateAuthResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminInitiateAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminInitiateAuthResponsePrivate
 *
 * @brief  Private implementation for AdminInitiateAuthResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminInitiateAuthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminInitiateAuthResponse instance.
 */
AdminInitiateAuthResponsePrivate::AdminInitiateAuthResponsePrivate(
    AdminInitiateAuthResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminInitiateAuthResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminInitiateAuthResponsePrivate::parseAdminInitiateAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminInitiateAuthResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
