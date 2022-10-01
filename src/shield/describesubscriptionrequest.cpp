// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesubscriptionrequest.h"
#include "describesubscriptionrequest_p.h"
#include "describesubscriptionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeSubscriptionRequest
 * \brief The DescribeSubscriptionRequest class provides an interface for Shield DescribeSubscription requests.
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
 * \sa ShieldClient::describeSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSubscriptionRequest::DescribeSubscriptionRequest(const DescribeSubscriptionRequest &other)
    : ShieldRequest(new DescribeSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSubscriptionRequest object.
 */
DescribeSubscriptionRequest::DescribeSubscriptionRequest()
    : ShieldRequest(new DescribeSubscriptionRequestPrivate(ShieldRequest::DescribeSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DescribeSubscriptionRequestPrivate
 * \brief The DescribeSubscriptionRequestPrivate class provides private implementation for DescribeSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeSubscriptionRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DescribeSubscriptionRequestPrivate::DescribeSubscriptionRequestPrivate(
    const ShieldRequest::Action action, DescribeSubscriptionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubscriptionRequest
 * class' copy constructor.
 */
DescribeSubscriptionRequestPrivate::DescribeSubscriptionRequestPrivate(
    const DescribeSubscriptionRequestPrivate &other, DescribeSubscriptionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
