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

#include "describerootfoldersrequest.h"
#include "describerootfoldersrequest_p.h"
#include "describerootfoldersresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::DescribeRootFoldersRequest
 * \brief The DescribeRootFoldersRequest class provides an interface for WorkDocs DescribeRootFolders requests.
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
 * Constructs a copy of \a other.
 */
DescribeRootFoldersRequest::DescribeRootFoldersRequest(const DescribeRootFoldersRequest &other)
    : WorkDocsRequest(new DescribeRootFoldersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRootFoldersRequest object.
 */
DescribeRootFoldersRequest::DescribeRootFoldersRequest()
    : WorkDocsRequest(new DescribeRootFoldersRequestPrivate(WorkDocsRequest::DescribeRootFoldersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRootFoldersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRootFoldersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRootFoldersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRootFoldersResponse(*this, reply);
}

/*!
 * \class QtAws::WorkDocs::DescribeRootFoldersRequestPrivate
 * \brief The DescribeRootFoldersRequestPrivate class provides private implementation for DescribeRootFoldersRequest.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a DescribeRootFoldersRequestPrivate object for WorkDocs \a action,
 * with public implementation \a q.
 */
DescribeRootFoldersRequestPrivate::DescribeRootFoldersRequestPrivate(
    const WorkDocsRequest::Action action, DescribeRootFoldersRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRootFoldersRequest
 * class' copy constructor.
 */
DescribeRootFoldersRequestPrivate::DescribeRootFoldersRequestPrivate(
    const DescribeRootFoldersRequestPrivate &other, DescribeRootFoldersRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
