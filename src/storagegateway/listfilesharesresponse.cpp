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

#include "listfilesharesresponse.h"
#include "listfilesharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListFileSharesResponse
 *
 * @brief  Handles StorageGateway ListFileShares responses.
 *
 * @see    StorageGatewayClient::listFileShares
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFileSharesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ListFileSharesResponsePrivate(this), parent)
{
    setRequest(new ListFileSharesRequest(request));
    setReply(reply);
}

const ListFileSharesRequest * ListFileSharesResponse::request() const
{
    Q_D(const ListFileSharesResponse);
    return static_cast<const ListFileSharesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ListFileShares response.
 *
 * @param  response  Response to parse.
 */
void ListFileSharesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFileSharesResponsePrivate
 *
 * @brief  Private implementation for ListFileSharesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFileSharesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFileSharesResponse instance.
 */
ListFileSharesResponsePrivate::ListFileSharesResponsePrivate(
    ListFileSharesQueueResponse * const q) : ListFileSharesPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ListFileSharesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFileSharesResponsePrivate::ListFileSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFileSharesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
