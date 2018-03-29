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

#include "sendmessagebatchresponse.h"
#include "sendmessagebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  SendMessageBatchResponse
 *
 * @brief  Handles SQS SendMessageBatch responses.
 *
 * @see    SQSClient::sendMessageBatch
 */

/**
 * @brief  Constructs a new SendMessageBatchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendMessageBatchResponse::SendMessageBatchResponse(
        const SendMessageBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new SendMessageBatchResponsePrivate(this), parent)
{
    setRequest(new SendMessageBatchRequest(request));
    setReply(reply);
}

const SendMessageBatchRequest * SendMessageBatchResponse::request() const
{
    Q_D(const SendMessageBatchResponse);
    return static_cast<const SendMessageBatchRequest *>(d->request);
}

/**
 * @brief  Parse a SQS SendMessageBatch response.
 *
 * @param  response  Response to parse.
 */
void SendMessageBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(SendMessageBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendMessageBatchResponsePrivate
 *
 * @brief  Private implementation for SendMessageBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendMessageBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendMessageBatchResponse instance.
 */
SendMessageBatchResponsePrivate::SendMessageBatchResponsePrivate(
    SendMessageBatchResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS SendMessageBatchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendMessageBatchResponsePrivate::SendMessageBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessageBatchResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
