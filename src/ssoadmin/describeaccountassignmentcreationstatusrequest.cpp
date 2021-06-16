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

#include "describeaccountassignmentcreationstatusrequest.h"
#include "describeaccountassignmentcreationstatusrequest_p.h"
#include "describeaccountassignmentcreationstatusresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentCreationStatusRequest
 * \brief The DescribeAccountAssignmentCreationStatusRequest class provides an interface for SSOAdmin DescribeAccountAssignmentCreationStatus requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describeAccountAssignmentCreationStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountAssignmentCreationStatusRequest::DescribeAccountAssignmentCreationStatusRequest(const DescribeAccountAssignmentCreationStatusRequest &other)
    : SSOAdminRequest(new DescribeAccountAssignmentCreationStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountAssignmentCreationStatusRequest object.
 */
DescribeAccountAssignmentCreationStatusRequest::DescribeAccountAssignmentCreationStatusRequest()
    : SSOAdminRequest(new DescribeAccountAssignmentCreationStatusRequestPrivate(SSOAdminRequest::DescribeAccountAssignmentCreationStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountAssignmentCreationStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountAssignmentCreationStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountAssignmentCreationStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountAssignmentCreationStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DescribeAccountAssignmentCreationStatusRequestPrivate
 * \brief The DescribeAccountAssignmentCreationStatusRequestPrivate class provides private implementation for DescribeAccountAssignmentCreationStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribeAccountAssignmentCreationStatusRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DescribeAccountAssignmentCreationStatusRequestPrivate::DescribeAccountAssignmentCreationStatusRequestPrivate(
    const SSOAdminRequest::Action action, DescribeAccountAssignmentCreationStatusRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountAssignmentCreationStatusRequest
 * class' copy constructor.
 */
DescribeAccountAssignmentCreationStatusRequestPrivate::DescribeAccountAssignmentCreationStatusRequestPrivate(
    const DescribeAccountAssignmentCreationStatusRequestPrivate &other, DescribeAccountAssignmentCreationStatusRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
