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

#include "getopenidtokenresponse.h"
#include "getopenidtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  GetOpenIdTokenResponse
 *
 * @brief  Handles CognitoIdentity GetOpenIdToken responses.
 *
 * @see    CognitoIdentityClient::getOpenIdToken
 */

/**
 * @brief  Constructs a new GetOpenIdTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOpenIdTokenResponse::GetOpenIdTokenResponse(
        const GetOpenIdTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetOpenIdTokenResponse(new GetOpenIdTokenResponsePrivate(this), parent)
{
    setRequest(new GetOpenIdTokenRequest(request));
    setReply(reply);
}

const GetOpenIdTokenRequest * GetOpenIdTokenResponse::request() const
{
    Q_D(const GetOpenIdTokenResponse);
    return static_cast<const GetOpenIdTokenRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity GetOpenIdToken response.
 *
 * @param  response  Response to parse.
 */
void GetOpenIdTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetOpenIdTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOpenIdTokenResponsePrivate
 *
 * @brief  Private implementation for GetOpenIdTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIdTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOpenIdTokenResponse instance.
 */
GetOpenIdTokenResponsePrivate::GetOpenIdTokenResponsePrivate(
    GetOpenIdTokenResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity GetOpenIdTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOpenIdTokenResponsePrivate::parseGetOpenIdTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOpenIdTokenResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
