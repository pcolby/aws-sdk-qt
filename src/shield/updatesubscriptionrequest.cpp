// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubscriptionrequest.h"
#include "updatesubscriptionrequest_p.h"
#include "updatesubscriptionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateSubscriptionRequest
 * \brief The UpdateSubscriptionRequest class provides an interface for Shield UpdateSubscription requests.
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
 * \sa ShieldClient::updateSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSubscriptionRequest::UpdateSubscriptionRequest(const UpdateSubscriptionRequest &other)
    : ShieldRequest(new UpdateSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSubscriptionRequest object.
 */
UpdateSubscriptionRequest::UpdateSubscriptionRequest()
    : ShieldRequest(new UpdateSubscriptionRequestPrivate(ShieldRequest::UpdateSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::UpdateSubscriptionRequestPrivate
 * \brief The UpdateSubscriptionRequestPrivate class provides private implementation for UpdateSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateSubscriptionRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
UpdateSubscriptionRequestPrivate::UpdateSubscriptionRequestPrivate(
    const ShieldRequest::Action action, UpdateSubscriptionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriptionRequest
 * class' copy constructor.
 */
UpdateSubscriptionRequestPrivate::UpdateSubscriptionRequestPrivate(
    const UpdateSubscriptionRequestPrivate &other, UpdateSubscriptionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
