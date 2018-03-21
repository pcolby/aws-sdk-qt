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

#include "createmembersresponse.h"
#include "createmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  CreateMembersResponse
 *
 * @brief  Handles GuardDuty CreateMembers responses.
 *
 * @see    GuardDutyClient::createMembers
 */

/**
 * @brief  Constructs a new CreateMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMembersResponse::CreateMembersResponse(
        const CreateMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateMembersResponsePrivate(this), parent)
{
    setRequest(new CreateMembersRequest(request));
    setReply(reply);
}

const CreateMembersRequest * CreateMembersResponse::request() const
{
    Q_D(const CreateMembersResponse);
    return static_cast<const CreateMembersRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty CreateMembers response.
 *
 * @param  response  Response to parse.
 */
void CreateMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMembersResponsePrivate
 *
 * @brief  Private implementation for CreateMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMembersResponse instance.
 */
CreateMembersResponsePrivate::CreateMembersResponsePrivate(
    CreateMembersQueueResponse * const q) : CreateMembersPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty CreateMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMembersResponsePrivate::CreateMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
