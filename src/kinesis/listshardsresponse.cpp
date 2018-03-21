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

#include "listshardsresponse.h"
#include "listshardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Kinesis {

/**
 * @class  ListShardsResponse
 *
 * @brief  Handles Kinesis ListShards responses.
 *
 * @see    KinesisClient::listShards
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListShardsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListShardsResponsePrivate(this), parent)
{
    setRequest(new ListShardsRequest(request));
    setReply(reply);
}

const ListShardsRequest * ListShardsResponse::request() const
{
    Q_D(const ListShardsResponse);
    return static_cast<const ListShardsRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis ListShards response.
 *
 * @param  response  Response to parse.
 */
void ListShardsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListShardsResponsePrivate
 *
 * @brief  Private implementation for ListShardsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListShardsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListShardsResponse instance.
 */
ListShardsResponsePrivate::ListShardsResponsePrivate(
    ListShardsQueueResponse * const q) : ListShardsPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis ListShardsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListShardsResponsePrivate::ListShardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListShardsResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace AWS
