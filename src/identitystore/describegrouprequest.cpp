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

#include "describegrouprequest.h"
#include "describegrouprequest_p.h"
#include "describegroupresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DescribeGroupRequest
 * \brief The DescribeGroupRequest class provides an interface for IdentityStore DescribeGroup requests.
 *
 * \inmodule QtAwsIdentityStore
 *
 *
 * \sa IdentityStoreClient::describeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGroupRequest::DescribeGroupRequest(const DescribeGroupRequest &other)
    : IdentityStoreRequest(new DescribeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGroupRequest object.
 */
DescribeGroupRequest::DescribeGroupRequest()
    : IdentityStoreRequest(new DescribeGroupRequestPrivate(IdentityStoreRequest::DescribeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::DescribeGroupRequestPrivate
 * \brief The DescribeGroupRequestPrivate class provides private implementation for DescribeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DescribeGroupRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const IdentityStoreRequest::Action action, DescribeGroupRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGroupRequest
 * class' copy constructor.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const DescribeGroupRequestPrivate &other, DescribeGroupRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
