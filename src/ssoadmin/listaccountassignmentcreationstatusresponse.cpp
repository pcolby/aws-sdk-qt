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

#include "listaccountassignmentcreationstatusresponse.h"
#include "listaccountassignmentcreationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentCreationStatusResponse
 * \brief The ListAccountAssignmentCreationStatusResponse class provides an interace for SSOAdmin ListAccountAssignmentCreationStatus responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountAssignmentCreationStatus
 */

/*!
 * Constructs a ListAccountAssignmentCreationStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountAssignmentCreationStatusResponse::ListAccountAssignmentCreationStatusResponse(
        const ListAccountAssignmentCreationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListAccountAssignmentCreationStatusResponsePrivate(this), parent)
{
    setRequest(new ListAccountAssignmentCreationStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountAssignmentCreationStatusRequest * ListAccountAssignmentCreationStatusResponse::request() const
{
    Q_D(const ListAccountAssignmentCreationStatusResponse);
    return static_cast<const ListAccountAssignmentCreationStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListAccountAssignmentCreationStatus \a response.
 */
void ListAccountAssignmentCreationStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountAssignmentCreationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentCreationStatusResponsePrivate
 * \brief The ListAccountAssignmentCreationStatusResponsePrivate class provides private implementation for ListAccountAssignmentCreationStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountAssignmentCreationStatusResponsePrivate object with public implementation \a q.
 */
ListAccountAssignmentCreationStatusResponsePrivate::ListAccountAssignmentCreationStatusResponsePrivate(
    ListAccountAssignmentCreationStatusResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListAccountAssignmentCreationStatus response element from \a xml.
 */
void ListAccountAssignmentCreationStatusResponsePrivate::parseListAccountAssignmentCreationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountAssignmentCreationStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
