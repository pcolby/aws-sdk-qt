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

#include "getpermissiongroupresponse.h"
#include "getpermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetPermissionGroupResponse
 * \brief The GetPermissionGroupResponse class provides an interace for FinspaceData GetPermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getPermissionGroup
 */

/*!
 * Constructs a GetPermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetPermissionGroupResponse::GetPermissionGroupResponse(
        const GetPermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetPermissionGroupResponsePrivate(this), parent)
{
    setRequest(new GetPermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPermissionGroupRequest * GetPermissionGroupResponse::request() const
{
    Q_D(const GetPermissionGroupResponse);
    return static_cast<const GetPermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetPermissionGroup \a response.
 */
void GetPermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetPermissionGroupResponsePrivate
 * \brief The GetPermissionGroupResponsePrivate class provides private implementation for GetPermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetPermissionGroupResponsePrivate object with public implementation \a q.
 */
GetPermissionGroupResponsePrivate::GetPermissionGroupResponsePrivate(
    GetPermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetPermissionGroup response element from \a xml.
 */
void GetPermissionGroupResponsePrivate::parseGetPermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
