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

#include "rebuildworkspacesresponse.h"
#include "rebuildworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RebuildWorkspacesResponse
 * \brief The RebuildWorkspacesResponse class provides an interace for WorkSpaces RebuildWorkspaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::rebuildWorkspaces
 */

/*!
 * Constructs a RebuildWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
RebuildWorkspacesResponse::RebuildWorkspacesResponse(
        const RebuildWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RebuildWorkspacesResponsePrivate(this), parent)
{
    setRequest(new RebuildWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebuildWorkspacesRequest * RebuildWorkspacesResponse::request() const
{
    Q_D(const RebuildWorkspacesResponse);
    return static_cast<const RebuildWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces RebuildWorkspaces \a response.
 */
void RebuildWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebuildWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::RebuildWorkspacesResponsePrivate
 * \brief The RebuildWorkspacesResponsePrivate class provides private implementation for RebuildWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RebuildWorkspacesResponsePrivate object with public implementation \a q.
 */
RebuildWorkspacesResponsePrivate::RebuildWorkspacesResponsePrivate(
    RebuildWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces RebuildWorkspaces response element from \a xml.
 */
void RebuildWorkspacesResponsePrivate::parseRebuildWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebuildWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
