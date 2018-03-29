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

#include "batchreadresponse.h"
#include "batchreadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  BatchReadResponse
 *
 * @brief  Handles CloudDirectory BatchRead responses.
 *
 * @see    CloudDirectoryClient::batchRead
 */

/**
 * @brief  Constructs a new BatchReadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchReadResponse::BatchReadResponse(
        const BatchReadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new BatchReadResponsePrivate(this), parent)
{
    setRequest(new BatchReadRequest(request));
    setReply(reply);
}

const BatchReadRequest * BatchReadResponse::request() const
{
    Q_D(const BatchReadResponse);
    return static_cast<const BatchReadRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory BatchRead response.
 *
 * @param  response  Response to parse.
 */
void BatchReadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchReadResponsePrivate
 *
 * @brief  Private implementation for BatchReadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchReadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchReadResponse instance.
 */
BatchReadResponsePrivate::BatchReadResponsePrivate(
    BatchReadQueueResponse * const q) : BatchReadPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory BatchReadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchReadResponsePrivate::BatchReadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchReadResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
