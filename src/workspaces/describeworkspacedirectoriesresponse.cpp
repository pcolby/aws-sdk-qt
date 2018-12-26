/*
    Copyright 2013-2018 Paul Colby

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

#include "describeworkspacedirectoriesresponse.h"
#include "describeworkspacedirectoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceDirectoriesResponse
 * \brief The DescribeWorkspaceDirectoriesResponse class provides an interace for WorkSpaces DescribeWorkspaceDirectories responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceDirectories
 */

/*!
 * Constructs a DescribeWorkspaceDirectoriesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceDirectoriesResponse::DescribeWorkspaceDirectoriesResponse(
        const DescribeWorkspaceDirectoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspaceDirectoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceDirectoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceDirectoriesRequest * DescribeWorkspaceDirectoriesResponse::request() const
{
    Q_D(const DescribeWorkspaceDirectoriesResponse);
    return static_cast<const DescribeWorkspaceDirectoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeWorkspaceDirectories \a response.
 */
void DescribeWorkspaceDirectoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceDirectoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceDirectoriesResponsePrivate
 * \brief The DescribeWorkspaceDirectoriesResponsePrivate class provides private implementation for DescribeWorkspaceDirectoriesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceDirectoriesResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceDirectoriesResponsePrivate::DescribeWorkspaceDirectoriesResponsePrivate(
    DescribeWorkspaceDirectoriesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeWorkspaceDirectories response element from \a xml.
 */
void DescribeWorkspaceDirectoriesResponsePrivate::parseDescribeWorkspaceDirectoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceDirectoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
