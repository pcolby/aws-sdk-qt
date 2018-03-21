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

#include "batchcreatepartitionresponse.h"
#include "batchcreatepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  BatchCreatePartitionResponse
 *
 * @brief  Handles Glue BatchCreatePartition responses.
 *
 * @see    GlueClient::batchCreatePartition
 */

/**
 * @brief  Constructs a new BatchCreatePartitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchCreatePartitionResponse::BatchCreatePartitionResponse(
        const BatchCreatePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchCreatePartitionResponsePrivate(this), parent)
{
    setRequest(new BatchCreatePartitionRequest(request));
    setReply(reply);
}

const BatchCreatePartitionRequest * BatchCreatePartitionResponse::request() const
{
    Q_D(const BatchCreatePartitionResponse);
    return static_cast<const BatchCreatePartitionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue BatchCreatePartition response.
 *
 * @param  response  Response to parse.
 */
void BatchCreatePartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchCreatePartitionResponsePrivate
 *
 * @brief  Private implementation for BatchCreatePartitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchCreatePartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchCreatePartitionResponse instance.
 */
BatchCreatePartitionResponsePrivate::BatchCreatePartitionResponsePrivate(
    BatchCreatePartitionQueueResponse * const q) : BatchCreatePartitionPrivate(q)
{

}

/**
 * @brief  Parse an Glue BatchCreatePartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchCreatePartitionResponsePrivate::BatchCreatePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCreatePartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
