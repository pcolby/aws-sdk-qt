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

#include "batchdeletetableresponse.h"
#include "batchdeletetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  BatchDeleteTableResponse
 *
 * @brief  Handles Glue BatchDeleteTable responses.
 *
 * @see    GlueClient::batchDeleteTable
 */

/**
 * @brief  Constructs a new BatchDeleteTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeleteTableResponse::BatchDeleteTableResponse(
        const BatchDeleteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteTableResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableRequest(request));
    setReply(reply);
}

const BatchDeleteTableRequest * BatchDeleteTableResponse::request() const
{
    Q_D(const BatchDeleteTableResponse);
    return static_cast<const BatchDeleteTableRequest *>(d->request);
}

/**
 * @brief  Parse a Glue BatchDeleteTable response.
 *
 * @param  response  Response to parse.
 */
void BatchDeleteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDeleteTableResponsePrivate
 *
 * @brief  Private implementation for BatchDeleteTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDeleteTableResponse instance.
 */
BatchDeleteTableResponsePrivate::BatchDeleteTableResponsePrivate(
    BatchDeleteTableQueueResponse * const q) : BatchDeleteTablePrivate(q)
{

}

/**
 * @brief  Parse an Glue BatchDeleteTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDeleteTableResponsePrivate::BatchDeleteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
