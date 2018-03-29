/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchdeletepartitionresponse.h"
#include "batchdeletepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  BatchDeletePartitionResponse
 *
 * @brief  Handles Glue BatchDeletePartition responses.
 *
 * @see    GlueClient::batchDeletePartition
 */

/**
 * @brief  Constructs a new BatchDeletePartitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeletePartitionResponse::BatchDeletePartitionResponse(
        const BatchDeletePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeletePartitionResponsePrivate(this), parent)
{
    setRequest(new BatchDeletePartitionRequest(request));
    setReply(reply);
}

const BatchDeletePartitionRequest * BatchDeletePartitionResponse::request() const
{
    Q_D(const BatchDeletePartitionResponse);
    return static_cast<const BatchDeletePartitionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue BatchDeletePartition response.
 *
 * @param  response  Response to parse.
 */
void BatchDeletePartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchDeletePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDeletePartitionResponsePrivate
 *
 * @brief  Private implementation for BatchDeletePartitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeletePartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDeletePartitionResponse instance.
 */
BatchDeletePartitionResponsePrivate::BatchDeletePartitionResponsePrivate(
    BatchDeletePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue BatchDeletePartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDeletePartitionResponsePrivate::BatchDeletePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeletePartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
