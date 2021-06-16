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

#include "describepermissionsetrequest.h"
#include "describepermissionsetrequest_p.h"
#include "describepermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetRequest
 * \brief The DescribePermissionSetRequest class provides an interface for SSOAdmin DescribePermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describePermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePermissionSetRequest::DescribePermissionSetRequest(const DescribePermissionSetRequest &other)
    : SSOAdminRequest(new DescribePermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePermissionSetRequest object.
 */
DescribePermissionSetRequest::DescribePermissionSetRequest()
    : SSOAdminRequest(new DescribePermissionSetRequestPrivate(SSOAdminRequest::DescribePermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribePermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetRequestPrivate
 * \brief The DescribePermissionSetRequestPrivate class provides private implementation for DescribePermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribePermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DescribePermissionSetRequestPrivate::DescribePermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, DescribePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePermissionSetRequest
 * class' copy constructor.
 */
DescribePermissionSetRequestPrivate::DescribePermissionSetRequestPrivate(
    const DescribePermissionSetRequestPrivate &other, DescribePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
