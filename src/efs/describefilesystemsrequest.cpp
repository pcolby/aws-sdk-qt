// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilesystemsrequest.h"
#include "describefilesystemsrequest_p.h"
#include "describefilesystemsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeFileSystemsRequest
 * \brief The DescribeFileSystemsRequest class provides an interface for Efs DescribeFileSystems requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::describeFileSystems
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest(const DescribeFileSystemsRequest &other)
    : EfsRequest(new DescribeFileSystemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFileSystemsRequest object.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest()
    : EfsRequest(new DescribeFileSystemsRequestPrivate(EfsRequest::DescribeFileSystemsAction, this))
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
 * \class QtAws::Efs::DescribeFileSystemsRequestPrivate
 * \brief The DescribeFileSystemsRequestPrivate class provides private implementation for DescribeFileSystemsRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeFileSystemsRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DescribeFileSystemsRequestPrivate::DescribeFileSystemsRequestPrivate(
    const EfsRequest::Action action, DescribeFileSystemsRequest * const q)
    : EfsRequestPrivate(action, q)
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
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
