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

#include "updatepermissiongroupresponse.h"
#include "updatepermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdatePermissionGroupResponse
 * \brief The UpdatePermissionGroupResponse class provides an interace for FinspaceData UpdatePermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updatePermissionGroup
 */

/*!
 * Constructs a UpdatePermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePermissionGroupResponse::UpdatePermissionGroupResponse(
        const UpdatePermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new UpdatePermissionGroupResponsePrivate(this), parent)
{
    setRequest(new UpdatePermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePermissionGroupRequest * UpdatePermissionGroupResponse::request() const
{
    Q_D(const UpdatePermissionGroupResponse);
    return static_cast<const UpdatePermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData UpdatePermissionGroup \a response.
 */
void UpdatePermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::UpdatePermissionGroupResponsePrivate
 * \brief The UpdatePermissionGroupResponsePrivate class provides private implementation for UpdatePermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdatePermissionGroupResponsePrivate object with public implementation \a q.
 */
UpdatePermissionGroupResponsePrivate::UpdatePermissionGroupResponsePrivate(
    UpdatePermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData UpdatePermissionGroup response element from \a xml.
 */
void UpdatePermissionGroupResponsePrivate::parseUpdatePermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
