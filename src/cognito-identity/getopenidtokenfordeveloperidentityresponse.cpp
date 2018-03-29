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

#include "getopenidtokenfordeveloperidentityresponse.h"
#include "getopenidtokenfordeveloperidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  GetOpenIdTokenForDeveloperIdentityResponse
 *
 * @brief  Handles CognitoIdentity GetOpenIdTokenForDeveloperIdentity responses.
 *
 * @see    CognitoIdentityClient::getOpenIdTokenForDeveloperIdentity
 */

/**
 * @brief  Constructs a new GetOpenIdTokenForDeveloperIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOpenIdTokenForDeveloperIdentityResponse::GetOpenIdTokenForDeveloperIdentityResponse(
        const GetOpenIdTokenForDeveloperIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new GetOpenIdTokenForDeveloperIdentityResponsePrivate(this), parent)
{
    setRequest(new GetOpenIdTokenForDeveloperIdentityRequest(request));
    setReply(reply);
}

const GetOpenIdTokenForDeveloperIdentityRequest * GetOpenIdTokenForDeveloperIdentityResponse::request() const
{
    Q_D(const GetOpenIdTokenForDeveloperIdentityResponse);
    return static_cast<const GetOpenIdTokenForDeveloperIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity GetOpenIdTokenForDeveloperIdentity response.
 *
 * @param  response  Response to parse.
 */
void GetOpenIdTokenForDeveloperIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOpenIdTokenForDeveloperIdentityResponsePrivate
 *
 * @brief  Private implementation for GetOpenIdTokenForDeveloperIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIdTokenForDeveloperIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOpenIdTokenForDeveloperIdentityResponse instance.
 */
GetOpenIdTokenForDeveloperIdentityResponsePrivate::GetOpenIdTokenForDeveloperIdentityResponsePrivate(
    GetOpenIdTokenForDeveloperIdentityQueueResponse * const q) : GetOpenIdTokenForDeveloperIdentityPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity GetOpenIdTokenForDeveloperIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOpenIdTokenForDeveloperIdentityResponsePrivate::GetOpenIdTokenForDeveloperIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOpenIdTokenForDeveloperIdentityResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace AWS
