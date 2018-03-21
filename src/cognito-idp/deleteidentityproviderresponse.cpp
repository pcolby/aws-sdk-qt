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

#include "deleteidentityproviderresponse.h"
#include "deleteidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteIdentityProviderResponse
 *
 * @brief  Handles CognitoIdentityProvider DeleteIdentityProvider responses.
 *
 * @see    CognitoIdentityProviderClient::deleteIdentityProvider
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIdentityProviderResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityProviderRequest(request));
    setReply(reply);
}

const DeleteIdentityProviderRequest * DeleteIdentityProviderResponse::request() const
{
    Q_D(const DeleteIdentityProviderResponse);
    return static_cast<const DeleteIdentityProviderRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DeleteIdentityProvider response.
 *
 * @param  response  Response to parse.
 */
void DeleteIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIdentityProviderResponsePrivate
 *
 * @brief  Private implementation for DeleteIdentityProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIdentityProviderResponse instance.
 */
DeleteIdentityProviderResponsePrivate::DeleteIdentityProviderResponsePrivate(
    DeleteIdentityProviderQueueResponse * const q) : DeleteIdentityProviderPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DeleteIdentityProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIdentityProviderResponsePrivate::DeleteIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityProviderResponse"));
    /// @todo
}
