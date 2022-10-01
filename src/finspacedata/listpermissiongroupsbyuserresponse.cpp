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

#include "listpermissiongroupsbyuserresponse.h"
#include "listpermissiongroupsbyuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsByUserResponse
 * \brief The ListPermissionGroupsByUserResponse class provides an interace for FinspaceData ListPermissionGroupsByUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listPermissionGroupsByUser
 */

/*!
 * Constructs a ListPermissionGroupsByUserResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionGroupsByUserResponse::ListPermissionGroupsByUserResponse(
        const ListPermissionGroupsByUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListPermissionGroupsByUserResponsePrivate(this), parent)
{
    setRequest(new ListPermissionGroupsByUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionGroupsByUserRequest * ListPermissionGroupsByUserResponse::request() const
{
    Q_D(const ListPermissionGroupsByUserResponse);
    return static_cast<const ListPermissionGroupsByUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListPermissionGroupsByUser \a response.
 */
void ListPermissionGroupsByUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionGroupsByUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsByUserResponsePrivate
 * \brief The ListPermissionGroupsByUserResponsePrivate class provides private implementation for ListPermissionGroupsByUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListPermissionGroupsByUserResponsePrivate object with public implementation \a q.
 */
ListPermissionGroupsByUserResponsePrivate::ListPermissionGroupsByUserResponsePrivate(
    ListPermissionGroupsByUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListPermissionGroupsByUser response element from \a xml.
 */
void ListPermissionGroupsByUserResponsePrivate::parseListPermissionGroupsByUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionGroupsByUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
