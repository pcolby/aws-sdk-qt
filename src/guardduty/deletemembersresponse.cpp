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

#include "deletemembersresponse.h"
#include "deletemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  DeleteMembersResponse
 *
 * @brief  Handles GuardDuty DeleteMembers responses.
 *
 * @see    GuardDutyClient::deleteMembers
 */

/**
 * @brief  Constructs a new DeleteMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMembersResponse::DeleteMembersResponse(
        const DeleteMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteMembersResponsePrivate(this), parent)
{
    setRequest(new DeleteMembersRequest(request));
    setReply(reply);
}

const DeleteMembersRequest * DeleteMembersResponse::request() const
{
    Q_D(const DeleteMembersResponse);
    return static_cast<const DeleteMembersRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty DeleteMembers response.
 *
 * @param  response  Response to parse.
 */
void DeleteMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMembersResponsePrivate
 *
 * @brief  Private implementation for DeleteMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMembersResponse instance.
 */
DeleteMembersResponsePrivate::DeleteMembersResponsePrivate(
    DeleteMembersQueueResponse * const q) : DeleteMembersPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty DeleteMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMembersResponsePrivate::DeleteMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
