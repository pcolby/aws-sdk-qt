// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsubscriptionstaterequest.h"
#include "getsubscriptionstaterequest_p.h"
#include "getsubscriptionstateresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::GetSubscriptionStateRequest
 * \brief The GetSubscriptionStateRequest class provides an interface for Shield GetSubscriptionState requests.
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
 * \sa ShieldClient::getSubscriptionState
 */

/*!
 * Constructs a copy of \a other.
 */
GetSubscriptionStateRequest::GetSubscriptionStateRequest(const GetSubscriptionStateRequest &other)
    : ShieldRequest(new GetSubscriptionStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSubscriptionStateRequest object.
 */
GetSubscriptionStateRequest::GetSubscriptionStateRequest()
    : ShieldRequest(new GetSubscriptionStateRequestPrivate(ShieldRequest::GetSubscriptionStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSubscriptionStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionStateRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionStateResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::GetSubscriptionStateRequestPrivate
 * \brief The GetSubscriptionStateRequestPrivate class provides private implementation for GetSubscriptionStateRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a GetSubscriptionStateRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
GetSubscriptionStateRequestPrivate::GetSubscriptionStateRequestPrivate(
    const ShieldRequest::Action action, GetSubscriptionStateRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionStateRequest
 * class' copy constructor.
 */
GetSubscriptionStateRequestPrivate::GetSubscriptionStateRequestPrivate(
    const GetSubscriptionStateRequestPrivate &other, GetSubscriptionStateRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
