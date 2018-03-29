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

#include "createuserpoolclientresponse.h"
#include "createuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  CreateUserPoolClientResponse
 *
 * @brief  Handles CognitoIdentityProvider CreateUserPoolClient responses.
 *
 * @see    CognitoIdentityProviderClient::createUserPoolClient
 */

/**
 * @brief  Constructs a new CreateUserPoolClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserPoolClientResponse::CreateUserPoolClientResponse(
        const CreateUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new CreateUserPoolClientRequest(request));
    setReply(reply);
}

const CreateUserPoolClientRequest * CreateUserPoolClientResponse::request() const
{
    Q_D(const CreateUserPoolClientResponse);
    return static_cast<const CreateUserPoolClientRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider CreateUserPoolClient response.
 *
 * @param  response  Response to parse.
 */
void CreateUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateUserPoolClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUserPoolClientResponsePrivate
 *
 * @brief  Private implementation for CreateUserPoolClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUserPoolClientResponse instance.
 */
CreateUserPoolClientResponsePrivate::CreateUserPoolClientResponsePrivate(
    CreateUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider CreateUserPoolClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUserPoolClientResponsePrivate::CreateUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserPoolClientResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
