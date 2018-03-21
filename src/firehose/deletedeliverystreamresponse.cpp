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

#include "deletedeliverystreamresponse.h"
#include "deletedeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Firehose {

/**
 * @class  DeleteDeliveryStreamResponse
 *
 * @brief  Handles Firehose DeleteDeliveryStream responses.
 *
 * @see    FirehoseClient::deleteDeliveryStream
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeliveryStreamResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new DeleteDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteDeliveryStreamRequest(request));
    setReply(reply);
}

const DeleteDeliveryStreamRequest * DeleteDeliveryStreamResponse::request() const
{
    Q_D(const DeleteDeliveryStreamResponse);
    return static_cast<const DeleteDeliveryStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Firehose DeleteDeliveryStream response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDeliveryStreamResponsePrivate
 *
 * @brief  Private implementation for DeleteDeliveryStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeliveryStreamResponse instance.
 */
DeleteDeliveryStreamResponsePrivate::DeleteDeliveryStreamResponsePrivate(
    DeleteDeliveryStreamQueueResponse * const q) : DeleteDeliveryStreamPrivate(q)
{

}

/**
 * @brief  Parse an Firehose DeleteDeliveryStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeliveryStreamResponsePrivate::DeleteDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeliveryStreamResponse"));
    /// @todo
}
