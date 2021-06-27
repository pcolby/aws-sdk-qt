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

#include "listaccountassignmentdeletionstatusresponse.h"
#include "listaccountassignmentdeletionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentDeletionStatusResponse
 * \brief The ListAccountAssignmentDeletionStatusResponse class provides an interace for SSOAdmin ListAccountAssignmentDeletionStatus responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountAssignmentDeletionStatus
 */

/*!
 * Constructs a ListAccountAssignmentDeletionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountAssignmentDeletionStatusResponse::ListAccountAssignmentDeletionStatusResponse(
        const ListAccountAssignmentDeletionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListAccountAssignmentDeletionStatusResponsePrivate(this), parent)
{
    setRequest(new ListAccountAssignmentDeletionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountAssignmentDeletionStatusRequest * ListAccountAssignmentDeletionStatusResponse::request() const
{
    return static_cast<const ListAccountAssignmentDeletionStatusRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListAccountAssignmentDeletionStatus \a response.
 */
void ListAccountAssignmentDeletionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountAssignmentDeletionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentDeletionStatusResponsePrivate
 * \brief The ListAccountAssignmentDeletionStatusResponsePrivate class provides private implementation for ListAccountAssignmentDeletionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountAssignmentDeletionStatusResponsePrivate object with public implementation \a q.
 */
ListAccountAssignmentDeletionStatusResponsePrivate::ListAccountAssignmentDeletionStatusResponsePrivate(
    ListAccountAssignmentDeletionStatusResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListAccountAssignmentDeletionStatus response element from \a xml.
 */
void ListAccountAssignmentDeletionStatusResponsePrivate::parseListAccountAssignmentDeletionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountAssignmentDeletionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
