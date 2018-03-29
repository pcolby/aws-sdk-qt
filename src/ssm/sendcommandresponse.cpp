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

#include "sendcommandresponse.h"
#include "sendcommandresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  SendCommandResponse
 *
 * @brief  Handles SSM SendCommand responses.
 *
 * @see    SSMClient::sendCommand
 */

/**
 * @brief  Constructs a new SendCommandResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendCommandResponse::SendCommandResponse(
        const SendCommandRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SendCommandResponse(new SendCommandResponsePrivate(this), parent)
{
    setRequest(new SendCommandRequest(request));
    setReply(reply);
}

const SendCommandRequest * SendCommandResponse::request() const
{
    Q_D(const SendCommandResponse);
    return static_cast<const SendCommandRequest *>(d->request);
}

/**
 * @brief  Parse a SSM SendCommand response.
 *
 * @param  response  Response to parse.
 */
void SendCommandResponse::parseSuccess(QIODevice &response)
{
    Q_D(SendCommandResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendCommandResponsePrivate
 *
 * @brief  Private implementation for SendCommandResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendCommandResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendCommandResponse instance.
 */
SendCommandResponsePrivate::SendCommandResponsePrivate(
    SendCommandResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM SendCommandResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendCommandResponsePrivate::parseSendCommandResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendCommandResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
