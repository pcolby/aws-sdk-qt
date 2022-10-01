// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsubscriptionrequest.h"
#include "createsubscriptionrequest_p.h"
#include "createsubscriptionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::CreateSubscriptionRequest
 * \brief The CreateSubscriptionRequest class provides an interface for Shield CreateSubscription requests.
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
 * \sa ShieldClient::createSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSubscriptionRequest::CreateSubscriptionRequest(const CreateSubscriptionRequest &other)
    : ShieldRequest(new CreateSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSubscriptionRequest object.
 */
CreateSubscriptionRequest::CreateSubscriptionRequest()
    : ShieldRequest(new CreateSubscriptionRequestPrivate(ShieldRequest::CreateSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::CreateSubscriptionRequestPrivate
 * \brief The CreateSubscriptionRequestPrivate class provides private implementation for CreateSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a CreateSubscriptionRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
CreateSubscriptionRequestPrivate::CreateSubscriptionRequestPrivate(
    const ShieldRequest::Action action, CreateSubscriptionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSubscriptionRequest
 * class' copy constructor.
 */
CreateSubscriptionRequestPrivate::CreateSubscriptionRequestPrivate(
    const CreateSubscriptionRequestPrivate &other, CreateSubscriptionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
