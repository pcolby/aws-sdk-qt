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

#include "deleteworkspaceimageresponse.h"
#include "deleteworkspaceimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceImageResponse
 * \brief The DeleteWorkspaceImageResponse class provides an interace for WorkSpaces DeleteWorkspaceImage responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deleteWorkspaceImage
 */

/*!
 * Constructs a DeleteWorkspaceImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkspaceImageResponse::DeleteWorkspaceImageResponse(
        const DeleteWorkspaceImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DeleteWorkspaceImageResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkspaceImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkspaceImageRequest * DeleteWorkspaceImageResponse::request() const
{
    return static_cast<const DeleteWorkspaceImageRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DeleteWorkspaceImage \a response.
 */
void DeleteWorkspaceImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkspaceImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceImageResponsePrivate
 * \brief The DeleteWorkspaceImageResponsePrivate class provides private implementation for DeleteWorkspaceImageResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteWorkspaceImageResponsePrivate object with public implementation \a q.
 */
DeleteWorkspaceImageResponsePrivate::DeleteWorkspaceImageResponsePrivate(
    DeleteWorkspaceImageResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DeleteWorkspaceImage response element from \a xml.
 */
void DeleteWorkspaceImageResponsePrivate::parseDeleteWorkspaceImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkspaceImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
