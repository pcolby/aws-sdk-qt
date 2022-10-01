// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprotectionrequest.h"
#include "describeprotectionrequest_p.h"
#include "describeprotectionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeProtectionRequest
 * \brief The DescribeProtectionRequest class provides an interface for Shield DescribeProtection requests.
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
 * \sa ShieldClient::describeProtection
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProtectionRequest::DescribeProtectionRequest(const DescribeProtectionRequest &other)
    : ShieldRequest(new DescribeProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProtectionRequest object.
 */
DescribeProtectionRequest::DescribeProtectionRequest()
    : ShieldRequest(new DescribeProtectionRequestPrivate(ShieldRequest::DescribeProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProtectionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DescribeProtectionRequestPrivate
 * \brief The DescribeProtectionRequestPrivate class provides private implementation for DescribeProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeProtectionRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DescribeProtectionRequestPrivate::DescribeProtectionRequestPrivate(
    const ShieldRequest::Action action, DescribeProtectionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProtectionRequest
 * class' copy constructor.
 */
DescribeProtectionRequestPrivate::DescribeProtectionRequestPrivate(
    const DescribeProtectionRequestPrivate &other, DescribeProtectionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
