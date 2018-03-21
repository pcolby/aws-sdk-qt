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

#include "listuserpoolclientsresponse.h"
#include "listuserpoolclientsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ListUserPoolClientsResponse
 *
 * @brief  Handles CognitoIdentityProvider ListUserPoolClients responses.
 *
 * @see    CognitoIdentityProviderClient::listUserPoolClients
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUserPoolClientsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUserPoolClientsResponsePrivate(this), parent)
{
    setRequest(new ListUserPoolClientsRequest(request));
    setReply(reply);
}

const ListUserPoolClientsRequest * ListUserPoolClientsResponse::request() const
{
    Q_D(const ListUserPoolClientsResponse);
    return static_cast<const ListUserPoolClientsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ListUserPoolClients response.
 *
 * @param  response  Response to parse.
 */
void ListUserPoolClientsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUserPoolClientsResponsePrivate
 *
 * @brief  Private implementation for ListUserPoolClientsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoolClientsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUserPoolClientsResponse instance.
 */
ListUserPoolClientsResponsePrivate::ListUserPoolClientsResponsePrivate(
    ListUserPoolClientsQueueResponse * const q) : ListUserPoolClientsPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ListUserPoolClientsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUserPoolClientsResponsePrivate::ListUserPoolClientsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoolClientsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
