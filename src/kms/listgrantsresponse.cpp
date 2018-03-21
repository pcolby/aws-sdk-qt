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

#include "listgrantsresponse.h"
#include "listgrantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  ListGrantsResponse
 *
 * @brief  Handles KMS ListGrants responses.
 *
 * @see    KMSClient::listGrants
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGrantsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ListGrantsResponsePrivate(this), parent)
{
    setRequest(new ListGrantsRequest(request));
    setReply(reply);
}

const ListGrantsRequest * ListGrantsResponse::request() const
{
    Q_D(const ListGrantsResponse);
    return static_cast<const ListGrantsRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ListGrants response.
 *
 * @param  response  Response to parse.
 */
void ListGrantsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGrantsResponsePrivate
 *
 * @brief  Private implementation for ListGrantsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGrantsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGrantsResponse instance.
 */
ListGrantsResponsePrivate::ListGrantsResponsePrivate(
    ListGrantsQueueResponse * const q) : ListGrantsPrivate(q)
{

}

/**
 * @brief  Parse an KMS ListGrantsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGrantsResponsePrivate::ListGrantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGrantsResponse"));
    /// @todo
}
