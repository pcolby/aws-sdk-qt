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
