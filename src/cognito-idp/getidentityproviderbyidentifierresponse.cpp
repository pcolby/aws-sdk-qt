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

#include "getidentityproviderbyidentifierresponse.h"
#include "getidentityproviderbyidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  GetIdentityProviderByIdentifierResponse
 *
 * @brief  Handles CognitoIdentityProvider GetIdentityProviderByIdentifier responses.
 *
 * @see    CognitoIdentityProviderClient::getIdentityProviderByIdentifier
 */

/**
 * @brief  Constructs a new GetIdentityProviderByIdentifierResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityProviderByIdentifierResponse::GetIdentityProviderByIdentifierResponse(
        const GetIdentityProviderByIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetIdentityProviderByIdentifierResponse(new GetIdentityProviderByIdentifierResponsePrivate(this), parent)
{
    setRequest(new GetIdentityProviderByIdentifierRequest(request));
    setReply(reply);
}

const GetIdentityProviderByIdentifierRequest * GetIdentityProviderByIdentifierResponse::request() const
{
    Q_D(const GetIdentityProviderByIdentifierResponse);
    return static_cast<const GetIdentityProviderByIdentifierRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider GetIdentityProviderByIdentifier response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityProviderByIdentifierResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIdentityProviderByIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdentityProviderByIdentifierResponsePrivate
 *
 * @brief  Private implementation for GetIdentityProviderByIdentifierResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityProviderByIdentifierResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityProviderByIdentifierResponse instance.
 */
GetIdentityProviderByIdentifierResponsePrivate::GetIdentityProviderByIdentifierResponsePrivate(
    GetIdentityProviderByIdentifierResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider GetIdentityProviderByIdentifierResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityProviderByIdentifierResponsePrivate::parseGetIdentityProviderByIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityProviderByIdentifierResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
