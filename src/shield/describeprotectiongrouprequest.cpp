// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
