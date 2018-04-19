/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describefilesystemsrequest.h"
#include "describefilesystemsrequest_p.h"
#include "describefilesystemsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeFileSystemsRequest
 * \brief The DescribeFileSystemsRequest class provides an interface for EFS DescribeFileSystems requests.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::describeFileSystems
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest(const DescribeFileSystemsRequest &other)
    : EFSRequest(new DescribeFileSystemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFileSystemsRequest object.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest()
    : EFSRequest(new DescribeFileSystemsRequestPrivate(EFSRequest::DescribeFileSystemsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFileSystemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFileSystemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFileSystemsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFileSystemsResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::DescribeFileSystemsRequestPrivate
 * \brief The DescribeFileSystemsRequestPrivate class provides private implementation for DescribeFileSystemsRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeFileSystemsRequestPrivate object for EFS \a action,
 * with public implementation \a q.
 */
DescribeFileSystemsRequestPrivate::DescribeFileSystemsRequestPrivate(
    const EFSRequest::Action action, DescribeFileSystemsRequest * const q)
    : EFSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFileSystemsRequest
 * class' copy constructor.
 */
DescribeFileSystemsRequestPrivate::DescribeFileSystemsRequestPrivate(
    const DescribeFileSystemsRequestPrivate &other, DescribeFileSystemsRequest * const q)
    : EFSRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
