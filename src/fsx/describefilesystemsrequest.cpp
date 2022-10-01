// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilesystemsrequest.h"
#include "describefilesystemsrequest_p.h"
#include "describefilesystemsresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeFileSystemsRequest
 * \brief The DescribeFileSystemsRequest class provides an interface for FSx DescribeFileSystems requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeFileSystems
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest(const DescribeFileSystemsRequest &other)
    : FSxRequest(new DescribeFileSystemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFileSystemsRequest object.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest()
    : FSxRequest(new DescribeFileSystemsRequestPrivate(FSxRequest::DescribeFileSystemsAction, this))
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
 * \class QtAws::FSx::DescribeFileSystemsRequestPrivate
 * \brief The DescribeFileSystemsRequestPrivate class provides private implementation for DescribeFileSystemsRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeFileSystemsRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeFileSystemsRequestPrivate::DescribeFileSystemsRequestPrivate(
    const FSxRequest::Action action, DescribeFileSystemsRequest * const q)
    : FSxRequestPrivate(action, q)
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
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
