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

#include "deletepermissiongroupresponse.h"
#include "deletepermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DeletePermissionGroupResponse
 * \brief The DeletePermissionGroupResponse class provides an interace for FinspaceData DeletePermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::deletePermissionGroup
 */

/*!
 * Constructs a DeletePermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePermissionGroupResponse::DeletePermissionGroupResponse(
        const DeletePermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new DeletePermissionGroupResponsePrivate(this), parent)
{
    setRequest(new DeletePermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePermissionGroupRequest * DeletePermissionGroupResponse::request() const
{
    Q_D(const DeletePermissionGroupResponse);
    return static_cast<const DeletePermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData DeletePermissionGroup \a response.
 */
void DeletePermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::DeletePermissionGroupResponsePrivate
 * \brief The DeletePermissionGroupResponsePrivate class provides private implementation for DeletePermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DeletePermissionGroupResponsePrivate object with public implementation \a q.
 */
DeletePermissionGroupResponsePrivate::DeletePermissionGroupResponsePrivate(
    DeletePermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData DeletePermissionGroup response element from \a xml.
 */
void DeletePermissionGroupResponsePrivate::parseDeletePermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
