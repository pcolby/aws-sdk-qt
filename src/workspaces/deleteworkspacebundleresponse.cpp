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

#include "deleteworkspacebundleresponse.h"
#include "deleteworkspacebundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceBundleResponse
 * \brief The DeleteWorkspaceBundleResponse class provides an interace for WorkSpaces DeleteWorkspaceBundle responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deleteWorkspaceBundle
 */

/*!
 * Constructs a DeleteWorkspaceBundleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkspaceBundleResponse::DeleteWorkspaceBundleResponse(
        const DeleteWorkspaceBundleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DeleteWorkspaceBundleResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkspaceBundleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkspaceBundleRequest * DeleteWorkspaceBundleResponse::request() const
{
    return static_cast<const DeleteWorkspaceBundleRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DeleteWorkspaceBundle \a response.
 */
void DeleteWorkspaceBundleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkspaceBundleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceBundleResponsePrivate
 * \brief The DeleteWorkspaceBundleResponsePrivate class provides private implementation for DeleteWorkspaceBundleResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteWorkspaceBundleResponsePrivate object with public implementation \a q.
 */
DeleteWorkspaceBundleResponsePrivate::DeleteWorkspaceBundleResponsePrivate(
    DeleteWorkspaceBundleResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DeleteWorkspaceBundle response element from \a xml.
 */
void DeleteWorkspaceBundleResponsePrivate::parseDeleteWorkspaceBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkspaceBundleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
