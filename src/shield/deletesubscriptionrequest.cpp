// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesubscriptionrequest.h"
#include "deletesubscriptionrequest_p.h"
#include "deletesubscriptionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DeleteSubscriptionRequest
 * \brief The DeleteSubscriptionRequest class provides an interface for Shield DeleteSubscription requests.
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
 * \sa ShieldClient::deleteSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSubscriptionRequest::DeleteSubscriptionRequest(const DeleteSubscriptionRequest &other)
    : ShieldRequest(new DeleteSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSubscriptionRequest object.
 */
DeleteSubscriptionRequest::DeleteSubscriptionRequest()
    : ShieldRequest(new DeleteSubscriptionRequestPrivate(ShieldRequest::DeleteSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DeleteSubscriptionRequestPrivate
 * \brief The DeleteSubscriptionRequestPrivate class provides private implementation for DeleteSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DeleteSubscriptionRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DeleteSubscriptionRequestPrivate::DeleteSubscriptionRequestPrivate(
    const ShieldRequest::Action action, DeleteSubscriptionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubscriptionRequest
 * class' copy constructor.
 */
DeleteSubscriptionRequestPrivate::DeleteSubscriptionRequestPrivate(
    const DeleteSubscriptionRequestPrivate &other, DeleteSubscriptionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
