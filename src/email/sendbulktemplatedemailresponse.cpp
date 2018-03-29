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

#include "sendbulktemplatedemailresponse.h"
#include "sendbulktemplatedemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  SendBulkTemplatedEmailResponse
 *
 * @brief  Handles SES SendBulkTemplatedEmail responses.
 *
 * @see    SESClient::sendBulkTemplatedEmail
 */

/**
 * @brief  Constructs a new SendBulkTemplatedEmailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendBulkTemplatedEmailResponse::SendBulkTemplatedEmailResponse(
        const SendBulkTemplatedEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SendBulkTemplatedEmailResponse(new SendBulkTemplatedEmailResponsePrivate(this), parent)
{
    setRequest(new SendBulkTemplatedEmailRequest(request));
    setReply(reply);
}

const SendBulkTemplatedEmailRequest * SendBulkTemplatedEmailResponse::request() const
{
    Q_D(const SendBulkTemplatedEmailResponse);
    return static_cast<const SendBulkTemplatedEmailRequest *>(d->request);
}

/**
 * @brief  Parse a SES SendBulkTemplatedEmail response.
 *
 * @param  response  Response to parse.
 */
void SendBulkTemplatedEmailResponse::parseSuccess(QIODevice &response)
{
    Q_D(SendBulkTemplatedEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendBulkTemplatedEmailResponsePrivate
 *
 * @brief  Private implementation for SendBulkTemplatedEmailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendBulkTemplatedEmailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendBulkTemplatedEmailResponse instance.
 */
SendBulkTemplatedEmailResponsePrivate::SendBulkTemplatedEmailResponsePrivate(
    SendBulkTemplatedEmailResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES SendBulkTemplatedEmailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendBulkTemplatedEmailResponsePrivate::parseSendBulkTemplatedEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBulkTemplatedEmailResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
