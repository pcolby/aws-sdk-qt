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

#include "revokeinvitationresponse.h"
#include "revokeinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  RevokeInvitationResponse
 *
 * @brief  Handles AlexaForBusiness RevokeInvitation responses.
 *
 * @see    AlexaForBusinessClient::revokeInvitation
 */

/**
 * @brief  Constructs a new RevokeInvitationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeInvitationResponse::RevokeInvitationResponse(
        const RevokeInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new RevokeInvitationResponsePrivate(this), parent)
{
    setRequest(new RevokeInvitationRequest(request));
    setReply(reply);
}

const RevokeInvitationRequest * RevokeInvitationResponse::request() const
{
    Q_D(const RevokeInvitationResponse);
    return static_cast<const RevokeInvitationRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness RevokeInvitation response.
 *
 * @param  response  Response to parse.
 */
void RevokeInvitationResponse::parseSuccess(QIODevice &response)
{
    Q_D(RevokeInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeInvitationResponsePrivate
 *
 * @brief  Private implementation for RevokeInvitationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeInvitationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeInvitationResponse instance.
 */
RevokeInvitationResponsePrivate::RevokeInvitationResponsePrivate(
    RevokeInvitationResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness RevokeInvitationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeInvitationResponsePrivate::RevokeInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeInvitationResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
