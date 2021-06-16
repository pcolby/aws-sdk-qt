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

#include "describeworkspacesnapshotsresponse.h"
#include "describeworkspacesnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceSnapshotsResponse
 * \brief The DescribeWorkspaceSnapshotsResponse class provides an interace for WorkSpaces DescribeWorkspaceSnapshots responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceSnapshots
 */

/*!
 * Constructs a DescribeWorkspaceSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceSnapshotsResponse::DescribeWorkspaceSnapshotsResponse(
        const DescribeWorkspaceSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspaceSnapshotsResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceSnapshotsRequest * DescribeWorkspaceSnapshotsResponse::request() const
{
    Q_D(const DescribeWorkspaceSnapshotsResponse);
    return static_cast<const DescribeWorkspaceSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeWorkspaceSnapshots \a response.
 */
void DescribeWorkspaceSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceSnapshotsResponsePrivate
 * \brief The DescribeWorkspaceSnapshotsResponsePrivate class provides private implementation for DescribeWorkspaceSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceSnapshotsResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceSnapshotsResponsePrivate::DescribeWorkspaceSnapshotsResponsePrivate(
    DescribeWorkspaceSnapshotsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeWorkspaceSnapshots response element from \a xml.
 */
void DescribeWorkspaceSnapshotsResponsePrivate::parseDescribeWorkspaceSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
