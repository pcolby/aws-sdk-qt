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

#include "createidentityproviderresponse.h"
#include "createidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CreateIdentityProviderResponse
 *
 * @brief  Handles CognitoIdentityProvider CreateIdentityProvider responses.
 *
 * @see    CognitoIdentityProviderClient::createIdentityProvider
 */

/**
 * @brief  Constructs a new CreateIdentityProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateIdentityProviderResponse::CreateIdentityProviderResponse(
        const CreateIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new CreateIdentityProviderRequest(request));
    setReply(reply);
}

const CreateIdentityProviderRequest * CreateIdentityProviderResponse::request() const
{
    Q_D(const CreateIdentityProviderResponse);
    return static_cast<const CreateIdentityProviderRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider CreateIdentityProvider response.
 *
 * @param  response  Response to parse.
 */
void CreateIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateIdentityProviderResponsePrivate
 *
 * @brief  Private implementation for CreateIdentityProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIdentityProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateIdentityProviderResponse instance.
 */
CreateIdentityProviderResponsePrivate::CreateIdentityProviderResponsePrivate(
    CreateIdentityProviderQueueResponse * const q) : CreateIdentityProviderPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider CreateIdentityProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateIdentityProviderResponsePrivate::CreateIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIdentityProviderResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
