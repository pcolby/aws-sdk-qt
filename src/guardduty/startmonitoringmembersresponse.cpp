/*
    Copyright 2013-2018 Paul Colby

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

#include "startmonitoringmembersresponse.h"
#include "startmonitoringmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::StartMonitoringMembersResponse
 * \brief The StartMonitoringMembersResponse class provides an interace for GuardDuty StartMonitoringMembers responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::startMonitoringMembers
 */

/*!
 * Constructs a StartMonitoringMembersResponse object for \a reply to \a request, with parent \a parent.
 */
StartMonitoringMembersResponse::StartMonitoringMembersResponse(
        const StartMonitoringMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new StartMonitoringMembersResponsePrivate(this), parent)
{
    setRequest(new StartMonitoringMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMonitoringMembersRequest * StartMonitoringMembersResponse::request() const
{
    Q_D(const StartMonitoringMembersResponse);
    return static_cast<const StartMonitoringMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty StartMonitoringMembers \a response.
 */
void StartMonitoringMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMonitoringMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::StartMonitoringMembersResponsePrivate
 * \brief The StartMonitoringMembersResponsePrivate class provides private implementation for StartMonitoringMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a StartMonitoringMembersResponsePrivate object with public implementation \a q.
 */
StartMonitoringMembersResponsePrivate::StartMonitoringMembersResponsePrivate(
    StartMonitoringMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty StartMonitoringMembers response element from \a xml.
 */
void StartMonitoringMembersResponsePrivate::parseStartMonitoringMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMonitoringMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
