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

#include "getuserpoolmfaconfigresponse.h"
#include "getuserpoolmfaconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  GetUserPoolMfaConfigResponse
 *
 * @brief  Handles CognitoIdentityProvider GetUserPoolMfaConfig responses.
 *
 * @see    CognitoIdentityProviderClient::getUserPoolMfaConfig
 */

/**
 * @brief  Constructs a new GetUserPoolMfaConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUserPoolMfaConfigResponse::GetUserPoolMfaConfigResponse(
        const GetUserPoolMfaConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUserPoolMfaConfigResponsePrivate(this), parent)
{
    setRequest(new GetUserPoolMfaConfigRequest(request));
    setReply(reply);
}

const GetUserPoolMfaConfigRequest * GetUserPoolMfaConfigResponse::request() const
{
    Q_D(const GetUserPoolMfaConfigResponse);
    return static_cast<const GetUserPoolMfaConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider GetUserPoolMfaConfig response.
 *
 * @param  response  Response to parse.
 */
void GetUserPoolMfaConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUserPoolMfaConfigResponsePrivate
 *
 * @brief  Private implementation for GetUserPoolMfaConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserPoolMfaConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUserPoolMfaConfigResponse instance.
 */
GetUserPoolMfaConfigResponsePrivate::GetUserPoolMfaConfigResponsePrivate(
    GetUserPoolMfaConfigResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider GetUserPoolMfaConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUserPoolMfaConfigResponsePrivate::GetUserPoolMfaConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserPoolMfaConfigResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
