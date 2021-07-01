/*
    Copyright 2013-2021 Paul Colby

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

#include "listaccountassignmentsresponse.h"
#include "listaccountassignmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentsResponse
 * \brief The ListAccountAssignmentsResponse class provides an interace for SSOAdmin ListAccountAssignments responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountAssignments
 */

/*!
 * Constructs a ListAccountAssignmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountAssignmentsResponse::ListAccountAssignmentsResponse(
        const ListAccountAssignmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListAccountAssignmentsResponsePrivate(this), parent)
{
    setRequest(new ListAccountAssignmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountAssignmentsRequest * ListAccountAssignmentsResponse::request() const
{
    Q_D(const ListAccountAssignmentsResponse);
    return static_cast<const ListAccountAssignmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListAccountAssignments \a response.
 */
void ListAccountAssignmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountAssignmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentsResponsePrivate
 * \brief The ListAccountAssignmentsResponsePrivate class provides private implementation for ListAccountAssignmentsResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountAssignmentsResponsePrivate object with public implementation \a q.
 */
ListAccountAssignmentsResponsePrivate::ListAccountAssignmentsResponsePrivate(
    ListAccountAssignmentsResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListAccountAssignments response element from \a xml.
 */
void ListAccountAssignmentsResponsePrivate::parseListAccountAssignmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountAssignmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
