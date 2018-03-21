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

#include "sendautomationsignalresponse.h"
#include "sendautomationsignalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  SendAutomationSignalResponse
 *
 * @brief  Handles SSM SendAutomationSignal responses.
 *
 * @see    SSMClient::sendAutomationSignal
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendAutomationSignalResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new SendAutomationSignalResponsePrivate(this), parent)
{
    setRequest(new SendAutomationSignalRequest(request));
    setReply(reply);
}

const SendAutomationSignalRequest * SendAutomationSignalResponse::request() const
{
    Q_D(const SendAutomationSignalResponse);
    return static_cast<const SendAutomationSignalRequest *>(d->request);
}

/**
 * @brief  Parse a SSM SendAutomationSignal response.
 *
 * @param  response  Response to parse.
 */
void SendAutomationSignalResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendAutomationSignalResponsePrivate
 *
 * @brief  Private implementation for SendAutomationSignalResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendAutomationSignalResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendAutomationSignalResponse instance.
 */
SendAutomationSignalResponsePrivate::SendAutomationSignalResponsePrivate(
    SendAutomationSignalQueueResponse * const q) : SendAutomationSignalPrivate(q)
{

}

/**
 * @brief  Parse an SSM SendAutomationSignalResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendAutomationSignalResponsePrivate::SendAutomationSignalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendAutomationSignalResponse"));
    /// @todo
}
