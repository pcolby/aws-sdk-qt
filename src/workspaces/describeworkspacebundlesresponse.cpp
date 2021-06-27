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

#include "describeworkspacebundlesresponse.h"
#include "describeworkspacebundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceBundlesResponse
 * \brief The DescribeWorkspaceBundlesResponse class provides an interace for WorkSpaces DescribeWorkspaceBundles responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceBundles
 */

/*!
 * Constructs a DescribeWorkspaceBundlesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceBundlesResponse::DescribeWorkspaceBundlesResponse(
        const DescribeWorkspaceBundlesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspaceBundlesResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceBundlesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceBundlesRequest * DescribeWorkspaceBundlesResponse::request() const
{
    return static_cast<const DescribeWorkspaceBundlesRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeWorkspaceBundles \a response.
 */
void DescribeWorkspaceBundlesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceBundlesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceBundlesResponsePrivate
 * \brief The DescribeWorkspaceBundlesResponsePrivate class provides private implementation for DescribeWorkspaceBundlesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceBundlesResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceBundlesResponsePrivate::DescribeWorkspaceBundlesResponsePrivate(
    DescribeWorkspaceBundlesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeWorkspaceBundles response element from \a xml.
 */
void DescribeWorkspaceBundlesResponsePrivate::parseDescribeWorkspaceBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceBundlesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
