// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilesystemaliasesrequest.h"
#include "describefilesystemaliasesrequest_p.h"
#include "describefilesystemaliasesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeFileSystemAliasesRequest
 * \brief The DescribeFileSystemAliasesRequest class provides an interface for FSx DescribeFileSystemAliases requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeFileSystemAliases
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFileSystemAliasesRequest::DescribeFileSystemAliasesRequest(const DescribeFileSystemAliasesRequest &other)
    : FSxRequest(new DescribeFileSystemAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFileSystemAliasesRequest object.
 */
DescribeFileSystemAliasesRequest::DescribeFileSystemAliasesRequest()
    : FSxRequest(new DescribeFileSystemAliasesRequestPrivate(FSxRequest::DescribeFileSystemAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFileSystemAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFileSystemAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFileSystemAliasesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFileSystemAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeFileSystemAliasesRequestPrivate
 * \brief The DescribeFileSystemAliasesRequestPrivate class provides private implementation for DescribeFileSystemAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeFileSystemAliasesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeFileSystemAliasesRequestPrivate::DescribeFileSystemAliasesRequestPrivate(
    const FSxRequest::Action action, DescribeFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFileSystemAliasesRequest
 * class' copy constructor.
 */
DescribeFileSystemAliasesRequestPrivate::DescribeFileSystemAliasesRequestPrivate(
    const DescribeFileSystemAliasesRequestPrivate &other, DescribeFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
