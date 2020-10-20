/*
    Copyright 2013-2020 Paul Colby

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

#include "describerootfoldersresponse.h"
#include "describerootfoldersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::DescribeRootFoldersResponse
 * \brief The DescribeRootFoldersResponse class provides an interace for WorkDocs DescribeRootFolders responses.
 *
 * \inmodule QtAwsWorkDocs
 *
 *  The WorkDocs API is designed for the following use
 * 
 *  cases> <ul> <li>
 * 
 *  File Migration: File migration applications are supported for users who want to migrate their files from an on-premises
 *  or off-premises file system or service. Users can insert files into a user directory structure, as well as allow for
 *  basic metadata changes, such as modifications to the permissions of
 * 
 *  files> </li> <li>
 * 
 *  Security: Support security applications are supported for users who have additional security needs, such as antivirus or
 *  data loss prevention. The API actions, along with AWS CloudTrail, allow these applications to detect when changes occur
 *  in Amazon WorkDocs. Then, the application can take the necessary actions and replace the target file. If the target file
 *  violates the policy, the application can also choose to email the
 * 
 *  user> </li> <li>
 * 
 *  eDiscovery/Analytics: General administrative applications are supported, such as eDiscovery and analytics. These
 *  applications can choose to mimic or record the actions in an Amazon WorkDocs site, along with AWS CloudTrail, to
 *  replicate data for eDiscovery, backup, or analytical
 * 
 *  applications> </li> </ul>
 * 
 *  All Amazon WorkDocs API actions are Amazon authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkDocs site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkDocs site (or as set in the IAM policy). This includes, but is not
 *  limited to, the ability to modify file permissions and upload any file to any user. This allows developers to perform
 *  the three use cases above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkDocsClient::describeRootFolders
 */

/*!
 * Constructs a DescribeRootFoldersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRootFoldersResponse::DescribeRootFoldersResponse(
        const DescribeRootFoldersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeRootFoldersResponsePrivate(this), parent)
{
    setRequest(new DescribeRootFoldersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRootFoldersRequest * DescribeRootFoldersResponse::request() const
{
    Q_D(const DescribeRootFoldersResponse);
    return static_cast<const DescribeRootFoldersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkDocs DescribeRootFolders \a response.
 */
void DescribeRootFoldersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRootFoldersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkDocs::DescribeRootFoldersResponsePrivate
 * \brief The DescribeRootFoldersResponsePrivate class provides private implementation for DescribeRootFoldersResponse.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a DescribeRootFoldersResponsePrivate object with public implementation \a q.
 */
DescribeRootFoldersResponsePrivate::DescribeRootFoldersResponsePrivate(
    DescribeRootFoldersResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/*!
 * Parses a WorkDocs DescribeRootFolders response element from \a xml.
 */
void DescribeRootFoldersResponsePrivate::parseDescribeRootFoldersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRootFoldersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkDocs
} // namespace QtAws
