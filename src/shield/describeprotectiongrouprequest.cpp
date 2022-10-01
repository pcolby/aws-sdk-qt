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

#include "describeprotectiongrouprequest.h"
#include "describeprotectiongrouprequest_p.h"
#include "describeprotectiongroupresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeProtectionGroupRequest
 * \brief The DescribeProtectionGroupRequest class provides an interface for Shield DescribeProtectionGroup requests.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::describeProtectionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProtectionGroupRequest::DescribeProtectionGroupRequest(const DescribeProtectionGroupRequest &other)
    : ShieldRequest(new DescribeProtectionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProtectionGroupRequest object.
 */
DescribeProtectionGroupRequest::DescribeProtectionGroupRequest()
    : ShieldRequest(new DescribeProtectionGroupRequestPrivate(ShieldRequest::DescribeProtectionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProtectionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProtectionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProtectionGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProtectionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DescribeProtectionGroupRequestPrivate
 * \brief The DescribeProtectionGroupRequestPrivate class provides private implementation for DescribeProtectionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeProtectionGroupRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DescribeProtectionGroupRequestPrivate::DescribeProtectionGroupRequestPrivate(
    const ShieldRequest::Action action, DescribeProtectionGroupRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProtectionGroupRequest
 * class' copy constructor.
 */
DescribeProtectionGroupRequestPrivate::DescribeProtectionGroupRequestPrivate(
    const DescribeProtectionGroupRequestPrivate &other, DescribeProtectionGroupRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
