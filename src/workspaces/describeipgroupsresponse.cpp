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

#include "describeipgroupsresponse.h"
#include "describeipgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeIpGroupsResponse
 * \brief The DescribeIpGroupsResponse class provides an interace for WorkSpaces DescribeIpGroups responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::describeIpGroups
 */

/*!
 * Constructs a DescribeIpGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIpGroupsResponse::DescribeIpGroupsResponse(
        const DescribeIpGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeIpGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeIpGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIpGroupsRequest * DescribeIpGroupsResponse::request() const
{
    Q_D(const DescribeIpGroupsResponse);
    return static_cast<const DescribeIpGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeIpGroups \a response.
 */
void DescribeIpGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIpGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeIpGroupsResponsePrivate
 * \brief The DescribeIpGroupsResponsePrivate class provides private implementation for DescribeIpGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeIpGroupsResponsePrivate object with public implementation \a q.
 */
DescribeIpGroupsResponsePrivate::DescribeIpGroupsResponsePrivate(
    DescribeIpGroupsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeIpGroups response element from \a xml.
 */
void DescribeIpGroupsResponsePrivate::parseDescribeIpGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIpGroupsResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
