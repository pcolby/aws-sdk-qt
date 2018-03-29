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

#include "initiateauthresponse.h"
#include "initiateauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  InitiateAuthResponse
 *
 * @brief  Handles CognitoIdentityProvider InitiateAuth responses.
 *
 * @see    CognitoIdentityProviderClient::initiateAuth
 */

/**
 * @brief  Constructs a new InitiateAuthResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitiateAuthResponse::InitiateAuthResponse(
        const InitiateAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new InitiateAuthResponsePrivate(this), parent)
{
    setRequest(new InitiateAuthRequest(request));
    setReply(reply);
}

const InitiateAuthRequest * InitiateAuthResponse::request() const
{
    Q_D(const InitiateAuthResponse);
    return static_cast<const InitiateAuthRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider InitiateAuth response.
 *
 * @param  response  Response to parse.
 */
void InitiateAuthResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InitiateAuthResponsePrivate
 *
 * @brief  Private implementation for InitiateAuthResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateAuthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitiateAuthResponse instance.
 */
InitiateAuthResponsePrivate::InitiateAuthResponsePrivate(
    InitiateAuthResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider InitiateAuthResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitiateAuthResponsePrivate::InitiateAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateAuthResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
