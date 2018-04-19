/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
