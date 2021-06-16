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

#include "describeaccountassignmentdeletionstatusrequest.h"
#include "describeaccountassignmentdeletionstatusrequest_p.h"
#include "describeaccountassignmentdeletionstatusresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentDeletionStatusRequest
 * \brief The DescribeAccountAssignmentDeletionStatusRequest class provides an interface for SSOAdmin DescribeAccountAssignmentDeletionStatus requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describeAccountAssignmentDeletionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountAssignmentDeletionStatusRequest::DescribeAccountAssignmentDeletionStatusRequest(const DescribeAccountAssignmentDeletionStatusRequest &other)
    : SSOAdminRequest(new DescribeAccountAssignmentDeletionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountAssignmentDeletionStatusRequest object.
 */
DescribeAccountAssignmentDeletionStatusRequest::DescribeAccountAssignmentDeletionStatusRequest()
    : SSOAdminRequest(new DescribeAccountAssignmentDeletionStatusRequestPrivate(SSOAdminRequest::DescribeAccountAssignmentDeletionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountAssignmentDeletionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountAssignmentDeletionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountAssignmentDeletionStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountAssignmentDeletionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentDeletionStatusRequestPrivate
 * \brief The DescribeAccountAssignmentDeletionStatusRequestPrivate class provides private implementation for DescribeAccountAssignmentDeletionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribeAccountAssignmentDeletionStatusRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DescribeAccountAssignmentDeletionStatusRequestPrivate::DescribeAccountAssignmentDeletionStatusRequestPrivate(
    const SSOAdminRequest::Action action, DescribeAccountAssignmentDeletionStatusRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountAssignmentDeletionStatusRequest
 * class' copy constructor.
 */
DescribeAccountAssignmentDeletionStatusRequestPrivate::DescribeAccountAssignmentDeletionStatusRequestPrivate(
    const DescribeAccountAssignmentDeletionStatusRequestPrivate &other, DescribeAccountAssignmentDeletionStatusRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
