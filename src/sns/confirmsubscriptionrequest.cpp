// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmsubscriptionrequest.h"
#include "confirmsubscriptionrequest_p.h"
#include "confirmsubscriptionresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::ConfirmSubscriptionRequest
 * \brief The ConfirmSubscriptionRequest class provides an interface for Sns ConfirmSubscription requests.
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
 * \sa SnsClient::confirmSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmSubscriptionRequest::ConfirmSubscriptionRequest(const ConfirmSubscriptionRequest &other)
    : SnsRequest(new ConfirmSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmSubscriptionRequest object.
 */
ConfirmSubscriptionRequest::ConfirmSubscriptionRequest()
    : SnsRequest(new ConfirmSubscriptionRequestPrivate(SnsRequest::ConfirmSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::Sns::ConfirmSubscriptionRequestPrivate
 * \brief The ConfirmSubscriptionRequestPrivate class provides private implementation for ConfirmSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a ConfirmSubscriptionRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
ConfirmSubscriptionRequestPrivate::ConfirmSubscriptionRequestPrivate(
    const SnsRequest::Action action, ConfirmSubscriptionRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmSubscriptionRequest
 * class' copy constructor.
 */
ConfirmSubscriptionRequestPrivate::ConfirmSubscriptionRequestPrivate(
    const ConfirmSubscriptionRequestPrivate &other, ConfirmSubscriptionRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace Sns
} // namespace QtAws
