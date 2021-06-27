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

#include "updateworkspaceimagepermissionresponse.h"
#include "updateworkspaceimagepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::UpdateWorkspaceImagePermissionResponse
 * \brief The UpdateWorkspaceImagePermissionResponse class provides an interace for WorkSpaces UpdateWorkspaceImagePermission responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::updateWorkspaceImagePermission
 */

/*!
 * Constructs a UpdateWorkspaceImagePermissionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkspaceImagePermissionResponse::UpdateWorkspaceImagePermissionResponse(
        const UpdateWorkspaceImagePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new UpdateWorkspaceImagePermissionResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkspaceImagePermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkspaceImagePermissionRequest * UpdateWorkspaceImagePermissionResponse::request() const
{
    return static_cast<const UpdateWorkspaceImagePermissionRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces UpdateWorkspaceImagePermission \a response.
 */
void UpdateWorkspaceImagePermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkspaceImagePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::UpdateWorkspaceImagePermissionResponsePrivate
 * \brief The UpdateWorkspaceImagePermissionResponsePrivate class provides private implementation for UpdateWorkspaceImagePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a UpdateWorkspaceImagePermissionResponsePrivate object with public implementation \a q.
 */
UpdateWorkspaceImagePermissionResponsePrivate::UpdateWorkspaceImagePermissionResponsePrivate(
    UpdateWorkspaceImagePermissionResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces UpdateWorkspaceImagePermission response element from \a xml.
 */
void UpdateWorkspaceImagePermissionResponsePrivate::parseUpdateWorkspaceImagePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkspaceImagePermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
