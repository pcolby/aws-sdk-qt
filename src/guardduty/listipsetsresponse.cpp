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

#include "listipsetsresponse.h"
#include "listipsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListIPSetsResponse
 * \brief The ListIPSetsResponse class provides an interace for GuardDuty ListIPSets responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listIPSets
 */

/*!
 * Constructs a ListIPSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIPSetsResponse::ListIPSetsResponse(
        const ListIPSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListIPSetsResponsePrivate(this), parent)
{
    setRequest(new ListIPSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIPSetsRequest * ListIPSetsResponse::request() const
{
    Q_D(const ListIPSetsResponse);
    return static_cast<const ListIPSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty ListIPSets \a response.
 */
void ListIPSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListIPSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::ListIPSetsResponsePrivate
 * \brief The ListIPSetsResponsePrivate class provides private implementation for ListIPSetsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListIPSetsResponsePrivate object with public implementation \a q.
 */
ListIPSetsResponsePrivate::ListIPSetsResponsePrivate(
    ListIPSetsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty ListIPSets response element from \a xml.
 */
void ListIPSetsResponsePrivate::parseListIPSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIPSetsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
