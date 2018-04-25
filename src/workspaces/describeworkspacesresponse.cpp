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

#include "describeworkspacesresponse.h"
#include "describeworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesResponse
 * \brief The DescribeWorkspacesResponse class provides an interace for WorkSpaces DescribeWorkspaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaces
 */

/*!
 * Constructs a DescribeWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspacesResponse::DescribeWorkspacesResponse(
        const DescribeWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspacesResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspacesRequest * DescribeWorkspacesResponse::request() const
{
    Q_D(const DescribeWorkspacesResponse);
    return static_cast<const DescribeWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeWorkspaces \a response.
 */
void DescribeWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesResponsePrivate
 * \brief The DescribeWorkspacesResponsePrivate class provides private implementation for DescribeWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspacesResponsePrivate object with public implementation \a q.
 */
DescribeWorkspacesResponsePrivate::DescribeWorkspacesResponsePrivate(
    DescribeWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeWorkspaces response element from \a xml.
 */
void DescribeWorkspacesResponsePrivate::parseDescribeWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
