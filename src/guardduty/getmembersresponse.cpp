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

#include "getmembersresponse.h"
#include "getmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  GetMembersResponse
 *
 * @brief  Handles GuardDuty GetMembers responses.
 *
 * @see    GuardDutyClient::getMembers
 */

/**
 * @brief  Constructs a new GetMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMembersResponse::GetMembersResponse(
        const GetMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetMembersResponsePrivate(this), parent)
{
    setRequest(new GetMembersRequest(request));
    setReply(reply);
}

const GetMembersRequest * GetMembersResponse::request() const
{
    Q_D(const GetMembersResponse);
    return static_cast<const GetMembersRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty GetMembers response.
 *
 * @param  response  Response to parse.
 */
void GetMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMembersResponsePrivate
 *
 * @brief  Private implementation for GetMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMembersResponse instance.
 */
GetMembersResponsePrivate::GetMembersResponsePrivate(
    GetMembersQueueResponse * const q) : GetMembersPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty GetMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMembersResponsePrivate::GetMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
