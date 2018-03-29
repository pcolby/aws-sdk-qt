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

#include "batchwriteresponse.h"
#include "batchwriteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  BatchWriteResponse
 *
 * @brief  Handles CloudDirectory BatchWrite responses.
 *
 * @see    CloudDirectoryClient::batchWrite
 */

/**
 * @brief  Constructs a new BatchWriteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchWriteResponse::BatchWriteResponse(
        const BatchWriteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchWriteResponse(new BatchWriteResponsePrivate(this), parent)
{
    setRequest(new BatchWriteRequest(request));
    setReply(reply);
}

const BatchWriteRequest * BatchWriteResponse::request() const
{
    Q_D(const BatchWriteResponse);
    return static_cast<const BatchWriteRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory BatchWrite response.
 *
 * @param  response  Response to parse.
 */
void BatchWriteResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchWriteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchWriteResponsePrivate
 *
 * @brief  Private implementation for BatchWriteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchWriteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchWriteResponse instance.
 */
BatchWriteResponsePrivate::BatchWriteResponsePrivate(
    BatchWriteResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory BatchWriteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchWriteResponsePrivate::parseBatchWriteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchWriteResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
