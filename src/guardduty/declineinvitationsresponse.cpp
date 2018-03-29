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

#include "declineinvitationsresponse.h"
#include "declineinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  DeclineInvitationsResponse
 *
 * @brief  Handles GuardDuty DeclineInvitations responses.
 *
 * @see    GuardDutyClient::declineInvitations
 */

/**
 * @brief  Constructs a new DeclineInvitationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeclineInvitationsResponse::DeclineInvitationsResponse(
        const DeclineInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeclineInvitationsResponsePrivate(this), parent)
{
    setRequest(new DeclineInvitationsRequest(request));
    setReply(reply);
}

const DeclineInvitationsRequest * DeclineInvitationsResponse::request() const
{
    Q_D(const DeclineInvitationsResponse);
    return static_cast<const DeclineInvitationsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty DeclineInvitations response.
 *
 * @param  response  Response to parse.
 */
void DeclineInvitationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeclineInvitationsResponsePrivate
 *
 * @brief  Private implementation for DeclineInvitationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeclineInvitationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeclineInvitationsResponse instance.
 */
DeclineInvitationsResponsePrivate::DeclineInvitationsResponsePrivate(
    DeclineInvitationsQueueResponse * const q) : DeclineInvitationsPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty DeclineInvitationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeclineInvitationsResponsePrivate::DeclineInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeclineInvitationsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
