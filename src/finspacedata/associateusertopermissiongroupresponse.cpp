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

#include "associateusertopermissiongroupresponse.h"
#include "associateusertopermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::AssociateUserToPermissionGroupResponse
 * \brief The AssociateUserToPermissionGroupResponse class provides an interace for FinspaceData AssociateUserToPermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::associateUserToPermissionGroup
 */

/*!
 * Constructs a AssociateUserToPermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateUserToPermissionGroupResponse::AssociateUserToPermissionGroupResponse(
        const AssociateUserToPermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new AssociateUserToPermissionGroupResponsePrivate(this), parent)
{
    setRequest(new AssociateUserToPermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateUserToPermissionGroupRequest * AssociateUserToPermissionGroupResponse::request() const
{
    Q_D(const AssociateUserToPermissionGroupResponse);
    return static_cast<const AssociateUserToPermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData AssociateUserToPermissionGroup \a response.
 */
void AssociateUserToPermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateUserToPermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::AssociateUserToPermissionGroupResponsePrivate
 * \brief The AssociateUserToPermissionGroupResponsePrivate class provides private implementation for AssociateUserToPermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a AssociateUserToPermissionGroupResponsePrivate object with public implementation \a q.
 */
AssociateUserToPermissionGroupResponsePrivate::AssociateUserToPermissionGroupResponsePrivate(
    AssociateUserToPermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData AssociateUserToPermissionGroup response element from \a xml.
 */
void AssociateUserToPermissionGroupResponsePrivate::parseAssociateUserToPermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateUserToPermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
