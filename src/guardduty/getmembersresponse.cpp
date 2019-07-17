/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getmembersresponse.h"
#include "getmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetMembersResponse
 * \brief The GetMembersResponse class provides an interace for GuardDuty GetMembers responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getMembers
 */

/*!
 * Constructs a GetMembersResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const GetMembersRequest * GetMembersResponse::request() const
{
    Q_D(const GetMembersResponse);
    return static_cast<const GetMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetMembers \a response.
 */
void GetMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetMembersResponsePrivate
 * \brief The GetMembersResponsePrivate class provides private implementation for GetMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetMembersResponsePrivate object with public implementation \a q.
 */
GetMembersResponsePrivate::GetMembersResponsePrivate(
    GetMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetMembers response element from \a xml.
 */
void GetMembersResponsePrivate::parseGetMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
