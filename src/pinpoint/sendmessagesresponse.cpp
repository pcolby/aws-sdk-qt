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

#include "sendmessagesresponse.h"
#include "sendmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendMessagesResponse
 *
 * \brief The SendMessagesResponse class encapsulates Pinpoint SendMessages responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::sendMessages
 */

/*!
 * @brief  Constructs a new SendMessagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendMessagesResponse::SendMessagesResponse(
        const SendMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new SendMessagesResponsePrivate(this), parent)
{
    setRequest(new SendMessagesRequest(request));
    setReply(reply);
}

const SendMessagesRequest * SendMessagesResponse::request() const
{
    Q_D(const SendMessagesResponse);
    return static_cast<const SendMessagesRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint SendMessages response.
 *
 * @param  response  Response to parse.
 */
void SendMessagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SendMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SendMessagesResponsePrivate
 *
 * \brief Private implementation for SendMessagesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SendMessagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendMessagesResponse instance.
 */
SendMessagesResponsePrivate::SendMessagesResponsePrivate(
    SendMessagesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint SendMessagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendMessagesResponsePrivate::parseSendMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessagesResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
