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

#include "verifysoftwaretokenresponse.h"
#include "verifysoftwaretokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  VerifySoftwareTokenResponse
 *
 * @brief  Handles CognitoIdentityProvider VerifySoftwareToken responses.
 *
 * @see    CognitoIdentityProviderClient::verifySoftwareToken
 */

/**
 * @brief  Constructs a new VerifySoftwareTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifySoftwareTokenResponse::VerifySoftwareTokenResponse(
        const VerifySoftwareTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new VerifySoftwareTokenResponsePrivate(this), parent)
{
    setRequest(new VerifySoftwareTokenRequest(request));
    setReply(reply);
}

const VerifySoftwareTokenRequest * VerifySoftwareTokenResponse::request() const
{
    Q_D(const VerifySoftwareTokenResponse);
    return static_cast<const VerifySoftwareTokenRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider VerifySoftwareToken response.
 *
 * @param  response  Response to parse.
 */
void VerifySoftwareTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  VerifySoftwareTokenResponsePrivate
 *
 * @brief  Private implementation for VerifySoftwareTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifySoftwareTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public VerifySoftwareTokenResponse instance.
 */
VerifySoftwareTokenResponsePrivate::VerifySoftwareTokenResponsePrivate(
    VerifySoftwareTokenQueueResponse * const q) : VerifySoftwareTokenPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider VerifySoftwareTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void VerifySoftwareTokenResponsePrivate::VerifySoftwareTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifySoftwareTokenResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
