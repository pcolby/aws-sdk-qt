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

#include "deleteuserpooldomainresponse.h"
#include "deleteuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteUserPoolDomainResponse
 *
 * @brief  Handles CognitoIdentityProvider DeleteUserPoolDomain responses.
 *
 * @see    CognitoIdentityProviderClient::deleteUserPoolDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserPoolDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolDomainRequest(request));
    setReply(reply);
}

const DeleteUserPoolDomainRequest * DeleteUserPoolDomainResponse::request() const
{
    Q_D(const DeleteUserPoolDomainResponse);
    return static_cast<const DeleteUserPoolDomainRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DeleteUserPoolDomain response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUserPoolDomainResponsePrivate
 *
 * @brief  Private implementation for DeleteUserPoolDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPoolDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserPoolDomainResponse instance.
 */
DeleteUserPoolDomainResponsePrivate::DeleteUserPoolDomainResponsePrivate(
    DeleteUserPoolDomainQueueResponse * const q) : DeleteUserPoolDomainPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DeleteUserPoolDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserPoolDomainResponsePrivate::DeleteUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolDomainResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
