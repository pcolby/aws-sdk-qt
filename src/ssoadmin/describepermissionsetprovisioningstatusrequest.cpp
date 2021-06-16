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

#include "describepermissionsetprovisioningstatusrequest.h"
#include "describepermissionsetprovisioningstatusrequest_p.h"
#include "describepermissionsetprovisioningstatusresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetProvisioningStatusRequest
 * \brief The DescribePermissionSetProvisioningStatusRequest class provides an interface for SSOAdmin DescribePermissionSetProvisioningStatus requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describePermissionSetProvisioningStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePermissionSetProvisioningStatusRequest::DescribePermissionSetProvisioningStatusRequest(const DescribePermissionSetProvisioningStatusRequest &other)
    : SSOAdminRequest(new DescribePermissionSetProvisioningStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePermissionSetProvisioningStatusRequest object.
 */
DescribePermissionSetProvisioningStatusRequest::DescribePermissionSetProvisioningStatusRequest()
    : SSOAdminRequest(new DescribePermissionSetProvisioningStatusRequestPrivate(SSOAdminRequest::DescribePermissionSetProvisioningStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePermissionSetProvisioningStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePermissionSetProvisioningStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePermissionSetProvisioningStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribePermissionSetProvisioningStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetProvisioningStatusRequestPrivate
 * \brief The DescribePermissionSetProvisioningStatusRequestPrivate class provides private implementation for DescribePermissionSetProvisioningStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribePermissionSetProvisioningStatusRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DescribePermissionSetProvisioningStatusRequestPrivate::DescribePermissionSetProvisioningStatusRequestPrivate(
    const SSOAdminRequest::Action action, DescribePermissionSetProvisioningStatusRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePermissionSetProvisioningStatusRequest
 * class' copy constructor.
 */
DescribePermissionSetProvisioningStatusRequestPrivate::DescribePermissionSetProvisioningStatusRequestPrivate(
    const DescribePermissionSetProvisioningStatusRequestPrivate &other, DescribePermissionSetProvisioningStatusRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
