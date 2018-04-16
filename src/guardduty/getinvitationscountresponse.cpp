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

#include "getinvitationscountresponse.h"
#include "getinvitationscountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetInvitationsCountResponse
 *
 * \brief The GetInvitationsCountResponse class provides an interace for GuardDuty GetInvitationsCount responses.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::getInvitationsCount
 */

/*!
 * @brief  Constructs a new GetInvitationsCountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInvitationsCountResponse::GetInvitationsCountResponse(
        const GetInvitationsCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetInvitationsCountResponsePrivate(this), parent)
{
    setRequest(new GetInvitationsCountRequest(request));
    setReply(reply);
}

const GetInvitationsCountRequest * GetInvitationsCountResponse::request() const
{
    Q_D(const GetInvitationsCountResponse);
    return static_cast<const GetInvitationsCountRequest *>(d->request);
}

/*!
 * @brief  Parse a GuardDuty GetInvitationsCount response.
 *
 * @param  response  Response to parse.
 */
void GetInvitationsCountResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetInvitationsCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetInvitationsCountResponsePrivate
 *
 * \brief Private implementation for GetInvitationsCountResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetInvitationsCountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInvitationsCountResponse instance.
 */
GetInvitationsCountResponsePrivate::GetInvitationsCountResponsePrivate(
    GetInvitationsCountResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an GuardDuty GetInvitationsCountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInvitationsCountResponsePrivate::parseGetInvitationsCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInvitationsCountResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
