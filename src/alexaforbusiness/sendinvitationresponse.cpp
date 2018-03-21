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

#include "sendinvitationresponse.h"
#include "sendinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  SendInvitationResponse
 *
 * @brief  Handles AlexaForBusiness SendInvitation responses.
 *
 * @see    AlexaForBusinessClient::sendInvitation
 */

/**
 * @brief  Constructs a new SendInvitationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendInvitationResponse::SendInvitationResponse(
        const SendInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SendInvitationResponsePrivate(this), parent)
{
    setRequest(new SendInvitationRequest(request));
    setReply(reply);
}

const SendInvitationRequest * SendInvitationResponse::request() const
{
    Q_D(const SendInvitationResponse);
    return static_cast<const SendInvitationRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness SendInvitation response.
 *
 * @param  response  Response to parse.
 */
void SendInvitationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendInvitationResponsePrivate
 *
 * @brief  Private implementation for SendInvitationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendInvitationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendInvitationResponse instance.
 */
SendInvitationResponsePrivate::SendInvitationResponsePrivate(
    SendInvitationQueueResponse * const q) : SendInvitationPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness SendInvitationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendInvitationResponsePrivate::SendInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendInvitationResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
