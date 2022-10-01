// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatarepositoryassociationsrequest.h"
#include "describedatarepositoryassociationsrequest_p.h"
#include "describedatarepositoryassociationsresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeDataRepositoryAssociationsRequest
 * \brief The DescribeDataRepositoryAssociationsRequest class provides an interface for FSx DescribeDataRepositoryAssociations requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeDataRepositoryAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataRepositoryAssociationsRequest::DescribeDataRepositoryAssociationsRequest(const DescribeDataRepositoryAssociationsRequest &other)
    : FSxRequest(new DescribeDataRepositoryAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataRepositoryAssociationsRequest object.
 */
DescribeDataRepositoryAssociationsRequest::DescribeDataRepositoryAssociationsRequest()
    : FSxRequest(new DescribeDataRepositoryAssociationsRequestPrivate(FSxRequest::DescribeDataRepositoryAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataRepositoryAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataRepositoryAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataRepositoryAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataRepositoryAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeDataRepositoryAssociationsRequestPrivate
 * \brief The DescribeDataRepositoryAssociationsRequestPrivate class provides private implementation for DescribeDataRepositoryAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeDataRepositoryAssociationsRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeDataRepositoryAssociationsRequestPrivate::DescribeDataRepositoryAssociationsRequestPrivate(
    const FSxRequest::Action action, DescribeDataRepositoryAssociationsRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataRepositoryAssociationsRequest
 * class' copy constructor.
 */
DescribeDataRepositoryAssociationsRequestPrivate::DescribeDataRepositoryAssociationsRequestPrivate(
    const DescribeDataRepositoryAssociationsRequestPrivate &other, DescribeDataRepositoryAssociationsRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
