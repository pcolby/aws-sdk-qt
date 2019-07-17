/*
    Copyright 2013-2019 Paul Colby

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

#include "subscriberequest.h"
#include "subscriberequest_p.h"
#include "subscriberesponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SubscribeRequest
 * \brief The SubscribeRequest class provides an interface for SNS Subscribe requests.
 *
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">https://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::subscribe
 */

/*!
 * Constructs a copy of \a other.
 */
SubscribeRequest::SubscribeRequest(const SubscribeRequest &other)
    : SnsRequest(new SubscribeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SubscribeRequest object.
 */
SubscribeRequest::SubscribeRequest()
    : SnsRequest(new SubscribeRequestPrivate(SnsRequest::SubscribeAction, this))
{

}

/*!
 * \reimp
 */
bool SubscribeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SubscribeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SubscribeRequest::response(QNetworkReply * const reply) const
{
    return new SubscribeResponse(*this, reply);
}

/*!
 * \class QtAws::SNS::SubscribeRequestPrivate
 * \brief The SubscribeRequestPrivate class provides private implementation for SubscribeRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SubscribeRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
SubscribeRequestPrivate::SubscribeRequestPrivate(
    const SnsRequest::Action action, SubscribeRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SubscribeRequest
 * class' copy constructor.
 */
SubscribeRequestPrivate::SubscribeRequestPrivate(
    const SubscribeRequestPrivate &other, SubscribeRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
