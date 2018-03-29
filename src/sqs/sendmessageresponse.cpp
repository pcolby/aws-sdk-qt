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

#include "sendmessageresponse.h"
#include "sendmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  SendMessageResponse
 *
 * @brief  Handles SQS SendMessage responses.
 *
 * @see    SQSClient::sendMessage
 */

/**
 * @brief  Constructs a new SendMessageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendMessageResponse::SendMessageResponse(
        const SendMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new SendMessageResponsePrivate(this), parent)
{
    setRequest(new SendMessageRequest(request));
    setReply(reply);
}

const SendMessageRequest * SendMessageResponse::request() const
{
    Q_D(const SendMessageResponse);
    return static_cast<const SendMessageRequest *>(d->request);
}

/**
 * @brief  Parse a SQS SendMessage response.
 *
 * @param  response  Response to parse.
 */
void SendMessageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendMessageResponsePrivate
 *
 * @brief  Private implementation for SendMessageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendMessageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendMessageResponse instance.
 */
SendMessageResponsePrivate::SendMessageResponsePrivate(
    SendMessageResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS SendMessageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendMessageResponsePrivate::SendMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessageResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
