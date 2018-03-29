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

#include "acceptinvitationresponse.h"
#include "acceptinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  AcceptInvitationResponse
 *
 * @brief  Handles GuardDuty AcceptInvitation responses.
 *
 * @see    GuardDutyClient::acceptInvitation
 */

/**
 * @brief  Constructs a new AcceptInvitationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptInvitationResponse::AcceptInvitationResponse(
        const AcceptInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new AcceptInvitationResponsePrivate(this), parent)
{
    setRequest(new AcceptInvitationRequest(request));
    setReply(reply);
}

const AcceptInvitationRequest * AcceptInvitationResponse::request() const
{
    Q_D(const AcceptInvitationResponse);
    return static_cast<const AcceptInvitationRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty AcceptInvitation response.
 *
 * @param  response  Response to parse.
 */
void AcceptInvitationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcceptInvitationResponsePrivate
 *
 * @brief  Private implementation for AcceptInvitationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptInvitationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptInvitationResponse instance.
 */
AcceptInvitationResponsePrivate::AcceptInvitationResponsePrivate(
    AcceptInvitationQueueResponse * const q) : AcceptInvitationPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty AcceptInvitationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptInvitationResponsePrivate::AcceptInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptInvitationResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
