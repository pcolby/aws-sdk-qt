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

#include "listthreatintelsetsresponse.h"
#include "listthreatintelsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListThreatIntelSetsResponse
 * \brief The ListThreatIntelSetsResponse class provides an interace for GuardDuty ListThreatIntelSets responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listThreatIntelSets
 */

/*!
 * Constructs a ListThreatIntelSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListThreatIntelSetsResponse::ListThreatIntelSetsResponse(
        const ListThreatIntelSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListThreatIntelSetsResponsePrivate(this), parent)
{
    setRequest(new ListThreatIntelSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThreatIntelSetsRequest * ListThreatIntelSetsResponse::request() const
{
    Q_D(const ListThreatIntelSetsResponse);
    return static_cast<const ListThreatIntelSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty ListThreatIntelSets \a response.
 */
void ListThreatIntelSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListThreatIntelSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::ListThreatIntelSetsResponsePrivate
 * \brief The ListThreatIntelSetsResponsePrivate class provides private implementation for ListThreatIntelSetsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListThreatIntelSetsResponsePrivate object with public implementation \a q.
 */
ListThreatIntelSetsResponsePrivate::ListThreatIntelSetsResponsePrivate(
    ListThreatIntelSetsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty ListThreatIntelSets response element from \a xml.
 */
void ListThreatIntelSetsResponsePrivate::parseListThreatIntelSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThreatIntelSetsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
