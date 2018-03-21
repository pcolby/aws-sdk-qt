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

#include "batchdeleteattributesresponse.h"
#include "batchdeleteattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SimpleDB {

/**
 * @class  BatchDeleteAttributesResponse
 *
 * @brief  Handles SimpleDB BatchDeleteAttributes responses.
 *
 * @see    SimpleDBClient::batchDeleteAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeleteAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new BatchDeleteAttributesResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteAttributesRequest(request));
    setReply(reply);
}

const BatchDeleteAttributesRequest * BatchDeleteAttributesResponse::request() const
{
    Q_D(const BatchDeleteAttributesResponse);
    return static_cast<const BatchDeleteAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB BatchDeleteAttributes response.
 *
 * @param  response  Response to parse.
 */
void BatchDeleteAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDeleteAttributesResponsePrivate
 *
 * @brief  Private implementation for BatchDeleteAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDeleteAttributesResponse instance.
 */
BatchDeleteAttributesResponsePrivate::BatchDeleteAttributesResponsePrivate(
    BatchDeleteAttributesQueueResponse * const q) : BatchDeleteAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB BatchDeleteAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDeleteAttributesResponsePrivate::BatchDeleteAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteAttributesResponse"));
    /// @todo
}
