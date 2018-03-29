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

#include "deleteuserpoolclientresponse.h"
#include "deleteuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteUserPoolClientResponse
 *
 * @brief  Handles CognitoIdentityProvider DeleteUserPoolClient responses.
 *
 * @see    CognitoIdentityProviderClient::deleteUserPoolClient
 */

/**
 * @brief  Constructs a new DeleteUserPoolClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserPoolClientResponse::DeleteUserPoolClientResponse(
        const DeleteUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolClientRequest(request));
    setReply(reply);
}

const DeleteUserPoolClientRequest * DeleteUserPoolClientResponse::request() const
{
    Q_D(const DeleteUserPoolClientResponse);
    return static_cast<const DeleteUserPoolClientRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DeleteUserPoolClient response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUserPoolClientResponsePrivate
 *
 * @brief  Private implementation for DeleteUserPoolClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPoolClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserPoolClientResponse instance.
 */
DeleteUserPoolClientResponsePrivate::DeleteUserPoolClientResponsePrivate(
    DeleteUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DeleteUserPoolClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserPoolClientResponsePrivate::DeleteUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolClientResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
