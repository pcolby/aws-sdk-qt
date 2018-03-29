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

#include "sendtasksuccessresponse.h"
#include "sendtasksuccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  SendTaskSuccessResponse
 *
 * @brief  Handles SFN SendTaskSuccess responses.
 *
 * @see    SFNClient::sendTaskSuccess
 */

/**
 * @brief  Constructs a new SendTaskSuccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendTaskSuccessResponse::SendTaskSuccessResponse(
        const SendTaskSuccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new SendTaskSuccessResponsePrivate(this), parent)
{
    setRequest(new SendTaskSuccessRequest(request));
    setReply(reply);
}

const SendTaskSuccessRequest * SendTaskSuccessResponse::request() const
{
    Q_D(const SendTaskSuccessResponse);
    return static_cast<const SendTaskSuccessRequest *>(d->request);
}

/**
 * @brief  Parse a SFN SendTaskSuccess response.
 *
 * @param  response  Response to parse.
 */
void SendTaskSuccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendTaskSuccessResponsePrivate
 *
 * @brief  Private implementation for SendTaskSuccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTaskSuccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendTaskSuccessResponse instance.
 */
SendTaskSuccessResponsePrivate::SendTaskSuccessResponsePrivate(
    SendTaskSuccessQueueResponse * const q) : SendTaskSuccessPrivate(q)
{

}

/**
 * @brief  Parse an SFN SendTaskSuccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendTaskSuccessResponsePrivate::SendTaskSuccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTaskSuccessResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
