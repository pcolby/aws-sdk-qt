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

#include "associatesoftwaretokenresponse.h"
#include "associatesoftwaretokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AssociateSoftwareTokenResponse
 *
 * @brief  Handles CognitoIdentityProvider AssociateSoftwareToken responses.
 *
 * @see    CognitoIdentityProviderClient::associateSoftwareToken
 */

/**
 * @brief  Constructs a new AssociateSoftwareTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateSoftwareTokenResponse::AssociateSoftwareTokenResponse(
        const AssociateSoftwareTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AssociateSoftwareTokenResponsePrivate(this), parent)
{
    setRequest(new AssociateSoftwareTokenRequest(request));
    setReply(reply);
}

const AssociateSoftwareTokenRequest * AssociateSoftwareTokenResponse::request() const
{
    Q_D(const AssociateSoftwareTokenResponse);
    return static_cast<const AssociateSoftwareTokenRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AssociateSoftwareToken response.
 *
 * @param  response  Response to parse.
 */
void AssociateSoftwareTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateSoftwareTokenResponsePrivate
 *
 * @brief  Private implementation for AssociateSoftwareTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateSoftwareTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateSoftwareTokenResponse instance.
 */
AssociateSoftwareTokenResponsePrivate::AssociateSoftwareTokenResponsePrivate(
    AssociateSoftwareTokenResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AssociateSoftwareTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateSoftwareTokenResponsePrivate::AssociateSoftwareTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSoftwareTokenResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
