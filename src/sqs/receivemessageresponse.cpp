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

#include "receivemessageresponse.h"
#include "receivemessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  ReceiveMessageResponse
 *
 * @brief  Handles SQS ReceiveMessage responses.
 *
 * @see    SQSClient::receiveMessage
 */

/**
 * @brief  Constructs a new ReceiveMessageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReceiveMessageResponse::ReceiveMessageResponse(
        const ReceiveMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new ReceiveMessageResponsePrivate(this), parent)
{
    setRequest(new ReceiveMessageRequest(request));
    setReply(reply);
}

const ReceiveMessageRequest * ReceiveMessageResponse::request() const
{
    Q_D(const ReceiveMessageResponse);
    return static_cast<const ReceiveMessageRequest *>(d->request);
}

/**
 * @brief  Parse a SQS ReceiveMessage response.
 *
 * @param  response  Response to parse.
 */
void ReceiveMessageResponse::parseSuccess(QIODevice &response)
{
    Q_D(ReceiveMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReceiveMessageResponsePrivate
 *
 * @brief  Private implementation for ReceiveMessageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReceiveMessageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReceiveMessageResponse instance.
 */
ReceiveMessageResponsePrivate::ReceiveMessageResponsePrivate(
    ReceiveMessageResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ReceiveMessageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReceiveMessageResponsePrivate::parseReceiveMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReceiveMessageResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
