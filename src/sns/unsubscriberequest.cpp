// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "unsubscriberequest.h"
#include "unsubscriberequest_p.h"
#include "unsubscriberesponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::UnsubscribeRequest
 * \brief The UnsubscribeRequest class provides an interface for Sns Unsubscribe requests.
 *
 * \inmodule QtAwsSns
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see the <a
 *  href="http://aws.amazon.com/sns/">Amazon SNS product page</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/sns/latest/dg/sns-authentication-and-access-control.html">Identity and access
 *  management in Amazon SNS</a> in the <i>Amazon SNS Developer Guide.</i>
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::unsubscribe
 */

/*!
 * Constructs a copy of \a other.
 */
UnsubscribeRequest::UnsubscribeRequest(const UnsubscribeRequest &other)
    : SnsRequest(new UnsubscribeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnsubscribeRequest object.
 */
UnsubscribeRequest::UnsubscribeRequest()
    : SnsRequest(new UnsubscribeRequestPrivate(SnsRequest::UnsubscribeAction, this))
{

}

/*!
 * \reimp
 */
bool UnsubscribeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnsubscribeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnsubscribeRequest::response(QNetworkReply * const reply) const
{
    return new UnsubscribeResponse(*this, reply);
}

/*!
 * \class QtAws::Sns::UnsubscribeRequestPrivate
 * \brief The UnsubscribeRequestPrivate class provides private implementation for UnsubscribeRequest.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a UnsubscribeRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
UnsubscribeRequestPrivate::UnsubscribeRequestPrivate(
    const SnsRequest::Action action, UnsubscribeRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnsubscribeRequest
 * class' copy constructor.
 */
UnsubscribeRequestPrivate::UnsubscribeRequestPrivate(
    const UnsubscribeRequestPrivate &other, UnsubscribeRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace Sns
} // namespace QtAws
