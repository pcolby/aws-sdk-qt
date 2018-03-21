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

#include "listinvitationsresponse.h"
#include "listinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  ListInvitationsResponse
 *
 * @brief  Handles GuardDuty ListInvitations responses.
 *
 * @see    GuardDutyClient::listInvitations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInvitationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListInvitationsResponsePrivate(this), parent)
{
    setRequest(new ListInvitationsRequest(request));
    setReply(reply);
}

const ListInvitationsRequest * ListInvitationsResponse::request() const
{
    Q_D(const ListInvitationsResponse);
    return static_cast<const ListInvitationsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty ListInvitations response.
 *
 * @param  response  Response to parse.
 */
void ListInvitationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInvitationsResponsePrivate
 *
 * @brief  Private implementation for ListInvitationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInvitationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInvitationsResponse instance.
 */
ListInvitationsResponsePrivate::ListInvitationsResponsePrivate(
    ListInvitationsQueueResponse * const q) : ListInvitationsPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty ListInvitationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInvitationsResponsePrivate::ListInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInvitationsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
