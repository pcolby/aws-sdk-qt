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

#include "batchputattributesresponse.h"
#include "batchputattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/**
 * @class  BatchPutAttributesResponse
 *
 * @brief  Handles SimpleDB BatchPutAttributes responses.
 *
 * @see    SimpleDBClient::batchPutAttributes
 */

/**
 * @brief  Constructs a new BatchPutAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchPutAttributesResponse::BatchPutAttributesResponse(
        const BatchPutAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new BatchPutAttributesResponsePrivate(this), parent)
{
    setRequest(new BatchPutAttributesRequest(request));
    setReply(reply);
}

const BatchPutAttributesRequest * BatchPutAttributesResponse::request() const
{
    Q_D(const BatchPutAttributesResponse);
    return static_cast<const BatchPutAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB BatchPutAttributes response.
 *
 * @param  response  Response to parse.
 */
void BatchPutAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchPutAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchPutAttributesResponsePrivate
 *
 * @brief  Private implementation for BatchPutAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchPutAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchPutAttributesResponse instance.
 */
BatchPutAttributesResponsePrivate::BatchPutAttributesResponsePrivate(
    BatchPutAttributesResponse * const q) : SimpleDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB BatchPutAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchPutAttributesResponsePrivate::parseBatchPutAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutAttributesResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace QtAws
