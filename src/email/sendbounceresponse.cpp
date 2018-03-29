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

#include "sendbounceresponse.h"
#include "sendbounceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  SendBounceResponse
 *
 * @brief  Handles SES SendBounce responses.
 *
 * @see    SESClient::sendBounce
 */

/**
 * @brief  Constructs a new SendBounceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendBounceResponse::SendBounceResponse(
        const SendBounceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SendBounceResponsePrivate(this), parent)
{
    setRequest(new SendBounceRequest(request));
    setReply(reply);
}

const SendBounceRequest * SendBounceResponse::request() const
{
    Q_D(const SendBounceResponse);
    return static_cast<const SendBounceRequest *>(d->request);
}

/**
 * @brief  Parse a SES SendBounce response.
 *
 * @param  response  Response to parse.
 */
void SendBounceResponse::parseSuccess(QIODevice &response)
{
    Q_D(SendBounceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendBounceResponsePrivate
 *
 * @brief  Private implementation for SendBounceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendBounceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendBounceResponse instance.
 */
SendBounceResponsePrivate::SendBounceResponsePrivate(
    SendBounceResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES SendBounceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendBounceResponsePrivate::parseSendBounceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBounceResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
