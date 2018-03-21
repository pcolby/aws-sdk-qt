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

#include "sendtaskfailureresponse.h"
#include "sendtaskfailureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SFN {

/**
 * @class  SendTaskFailureResponse
 *
 * @brief  Handles SFN SendTaskFailure responses.
 *
 * @see    SFNClient::sendTaskFailure
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendTaskFailureResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new SendTaskFailureResponsePrivate(this), parent)
{
    setRequest(new SendTaskFailureRequest(request));
    setReply(reply);
}

const SendTaskFailureRequest * SendTaskFailureResponse::request() const
{
    Q_D(const SendTaskFailureResponse);
    return static_cast<const SendTaskFailureRequest *>(d->request);
}

/**
 * @brief  Parse a SFN SendTaskFailure response.
 *
 * @param  response  Response to parse.
 */
void SendTaskFailureResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendTaskFailureResponsePrivate
 *
 * @brief  Private implementation for SendTaskFailureResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTaskFailureResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendTaskFailureResponse instance.
 */
SendTaskFailureResponsePrivate::SendTaskFailureResponsePrivate(
    SendTaskFailureQueueResponse * const q) : SendTaskFailurePrivate(q)
{

}

/**
 * @brief  Parse an SFN SendTaskFailureResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendTaskFailureResponsePrivate::SendTaskFailureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTaskFailureResponse"));
    /// @todo
}

} // namespace SFN
} // namespace AWS
