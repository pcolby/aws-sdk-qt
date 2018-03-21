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

#include "deleteuserattributesresponse.h"
#include "deleteuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteUserAttributesResponse
 *
 * @brief  Handles CognitoIdentityProvider DeleteUserAttributes responses.
 *
 * @see    CognitoIdentityProviderClient::deleteUserAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserAttributesResponsePrivate(this), parent)
{
    setRequest(new DeleteUserAttributesRequest(request));
    setReply(reply);
}

const DeleteUserAttributesRequest * DeleteUserAttributesResponse::request() const
{
    Q_D(const DeleteUserAttributesResponse);
    return static_cast<const DeleteUserAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DeleteUserAttributes response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUserAttributesResponsePrivate
 *
 * @brief  Private implementation for DeleteUserAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserAttributesResponse instance.
 */
DeleteUserAttributesResponsePrivate::DeleteUserAttributesResponsePrivate(
    DeleteUserAttributesQueueResponse * const q) : DeleteUserAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DeleteUserAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserAttributesResponsePrivate::DeleteUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserAttributesResponse"));
    /// @todo
}
