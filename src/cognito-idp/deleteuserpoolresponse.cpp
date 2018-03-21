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

#include "deleteuserpoolresponse.h"
#include "deleteuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteUserPoolResponse
 *
 * @brief  Handles CognitoIdentityProvider DeleteUserPool responses.
 *
 * @see    CognitoIdentityProviderClient::deleteUserPool
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserPoolResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolRequest(request));
    setReply(reply);
}

const DeleteUserPoolRequest * DeleteUserPoolResponse::request() const
{
    Q_D(const DeleteUserPoolResponse);
    return static_cast<const DeleteUserPoolRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DeleteUserPool response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUserPoolResponsePrivate
 *
 * @brief  Private implementation for DeleteUserPoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserPoolResponse instance.
 */
DeleteUserPoolResponsePrivate::DeleteUserPoolResponsePrivate(
    DeleteUserPoolQueueResponse * const q) : DeleteUserPoolPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DeleteUserPoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserPoolResponsePrivate::DeleteUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolResponse"));
    /// @todo
}
