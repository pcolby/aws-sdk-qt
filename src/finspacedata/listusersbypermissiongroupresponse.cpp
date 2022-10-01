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

#include "listusersbypermissiongroupresponse.h"
#include "listusersbypermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListUsersByPermissionGroupResponse
 * \brief The ListUsersByPermissionGroupResponse class provides an interace for FinspaceData ListUsersByPermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listUsersByPermissionGroup
 */

/*!
 * Constructs a ListUsersByPermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsersByPermissionGroupResponse::ListUsersByPermissionGroupResponse(
        const ListUsersByPermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListUsersByPermissionGroupResponsePrivate(this), parent)
{
    setRequest(new ListUsersByPermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsersByPermissionGroupRequest * ListUsersByPermissionGroupResponse::request() const
{
    Q_D(const ListUsersByPermissionGroupResponse);
    return static_cast<const ListUsersByPermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListUsersByPermissionGroup \a response.
 */
void ListUsersByPermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsersByPermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListUsersByPermissionGroupResponsePrivate
 * \brief The ListUsersByPermissionGroupResponsePrivate class provides private implementation for ListUsersByPermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListUsersByPermissionGroupResponsePrivate object with public implementation \a q.
 */
ListUsersByPermissionGroupResponsePrivate::ListUsersByPermissionGroupResponsePrivate(
    ListUsersByPermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListUsersByPermissionGroup response element from \a xml.
 */
void ListUsersByPermissionGroupResponsePrivate::parseListUsersByPermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersByPermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
