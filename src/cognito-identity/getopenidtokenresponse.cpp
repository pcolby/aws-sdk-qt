/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getopenidtokenresponse.h"
#include "getopenidtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  GetOpenIdTokenResponse
 *
 * @brief  Handles CognitoIdentity GetOpenIdToken responses.
 *
 * @see    CognitoIdentityClient::getOpenIdToken
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOpenIdTokenResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new GetOpenIdTokenResponsePrivate(this), parent)
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
    Q_D(Response);
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
    GetOpenIdTokenQueueResponse * const q) : GetOpenIdTokenPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity GetOpenIdTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOpenIdTokenResponsePrivate::GetOpenIdTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOpenIdTokenResponse"));
    /// @todo
}
