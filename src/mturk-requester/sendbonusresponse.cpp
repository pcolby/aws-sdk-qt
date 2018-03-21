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

#include "sendbonusresponse.h"
#include "sendbonusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  SendBonusResponse
 *
 * @brief  Handles MTurk SendBonus responses.
 *
 * @see    MTurkClient::sendBonus
 */

/**
 * @brief  Constructs a new SendBonusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendBonusResponse::SendBonusResponse(
        const SendBonusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new SendBonusResponsePrivate(this), parent)
{
    setRequest(new SendBonusRequest(request));
    setReply(reply);
}

const SendBonusRequest * SendBonusResponse::request() const
{
    Q_D(const SendBonusResponse);
    return static_cast<const SendBonusRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk SendBonus response.
 *
 * @param  response  Response to parse.
 */
void SendBonusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendBonusResponsePrivate
 *
 * @brief  Private implementation for SendBonusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendBonusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendBonusResponse instance.
 */
SendBonusResponsePrivate::SendBonusResponsePrivate(
    SendBonusQueueResponse * const q) : SendBonusPrivate(q)
{

}

/**
 * @brief  Parse an MTurk SendBonusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendBonusResponsePrivate::SendBonusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBonusResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
