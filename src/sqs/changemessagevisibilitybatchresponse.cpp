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

#include "changemessagevisibilitybatchresponse.h"
#include "changemessagevisibilitybatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SQS {

/**
 * @class  ChangeMessageVisibilityBatchResponse
 *
 * @brief  Handles SQS ChangeMessageVisibilityBatch responses.
 *
 * @see    SQSClient::changeMessageVisibilityBatch
 */

/**
 * @brief  Constructs a new ChangeMessageVisibilityBatchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ChangeMessageVisibilityBatchResponse::ChangeMessageVisibilityBatchResponse(
        const ChangeMessageVisibilityBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new ChangeMessageVisibilityBatchResponsePrivate(this), parent)
{
    setRequest(new ChangeMessageVisibilityBatchRequest(request));
    setReply(reply);
}

const ChangeMessageVisibilityBatchRequest * ChangeMessageVisibilityBatchResponse::request() const
{
    Q_D(const ChangeMessageVisibilityBatchResponse);
    return static_cast<const ChangeMessageVisibilityBatchRequest *>(d->request);
}

/**
 * @brief  Parse a SQS ChangeMessageVisibilityBatch response.
 *
 * @param  response  Response to parse.
 */
void ChangeMessageVisibilityBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ChangeMessageVisibilityBatchResponsePrivate
 *
 * @brief  Private implementation for ChangeMessageVisibilityBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ChangeMessageVisibilityBatchResponse instance.
 */
ChangeMessageVisibilityBatchResponsePrivate::ChangeMessageVisibilityBatchResponsePrivate(
    ChangeMessageVisibilityBatchQueueResponse * const q) : ChangeMessageVisibilityBatchPrivate(q)
{

}

/**
 * @brief  Parse an SQS ChangeMessageVisibilityBatchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ChangeMessageVisibilityBatchResponsePrivate::ChangeMessageVisibilityBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeMessageVisibilityBatchResponse"));
    /// @todo
}

} // namespace SQS
} // namespace AWS
