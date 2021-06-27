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

#include "copyworkspaceimageresponse.h"
#include "copyworkspaceimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CopyWorkspaceImageResponse
 * \brief The CopyWorkspaceImageResponse class provides an interace for WorkSpaces CopyWorkspaceImage responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::copyWorkspaceImage
 */

/*!
 * Constructs a CopyWorkspaceImageResponse object for \a reply to \a request, with parent \a parent.
 */
CopyWorkspaceImageResponse::CopyWorkspaceImageResponse(
        const CopyWorkspaceImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new CopyWorkspaceImageResponsePrivate(this), parent)
{
    setRequest(new CopyWorkspaceImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyWorkspaceImageRequest * CopyWorkspaceImageResponse::request() const
{
    return static_cast<const CopyWorkspaceImageRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces CopyWorkspaceImage \a response.
 */
void CopyWorkspaceImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyWorkspaceImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::CopyWorkspaceImageResponsePrivate
 * \brief The CopyWorkspaceImageResponsePrivate class provides private implementation for CopyWorkspaceImageResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CopyWorkspaceImageResponsePrivate object with public implementation \a q.
 */
CopyWorkspaceImageResponsePrivate::CopyWorkspaceImageResponsePrivate(
    CopyWorkspaceImageResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces CopyWorkspaceImage response element from \a xml.
 */
void CopyWorkspaceImageResponsePrivate::parseCopyWorkspaceImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyWorkspaceImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
