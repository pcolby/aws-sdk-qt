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

#include "listallowednodetypemodificationsresponse.h"
#include "listallowednodetypemodificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ListAllowedNodeTypeModificationsResponse
 *
 * @brief  Handles ElastiCache ListAllowedNodeTypeModifications responses.
 *
 * @see    ElastiCacheClient::listAllowedNodeTypeModifications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAllowedNodeTypeModificationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ListAllowedNodeTypeModificationsResponsePrivate(this), parent)
{
    setRequest(new ListAllowedNodeTypeModificationsRequest(request));
    setReply(reply);
}

const ListAllowedNodeTypeModificationsRequest * ListAllowedNodeTypeModificationsResponse::request() const
{
    Q_D(const ListAllowedNodeTypeModificationsResponse);
    return static_cast<const ListAllowedNodeTypeModificationsRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache ListAllowedNodeTypeModifications response.
 *
 * @param  response  Response to parse.
 */
void ListAllowedNodeTypeModificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAllowedNodeTypeModificationsResponsePrivate
 *
 * @brief  Private implementation for ListAllowedNodeTypeModificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAllowedNodeTypeModificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAllowedNodeTypeModificationsResponse instance.
 */
ListAllowedNodeTypeModificationsResponsePrivate::ListAllowedNodeTypeModificationsResponsePrivate(
    ListAllowedNodeTypeModificationsQueueResponse * const q) : ListAllowedNodeTypeModificationsPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ListAllowedNodeTypeModificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAllowedNodeTypeModificationsResponsePrivate::ListAllowedNodeTypeModificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAllowedNodeTypeModificationsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
