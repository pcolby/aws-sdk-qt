// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableproactiveengagementrequest.h"
#include "disableproactiveengagementrequest_p.h"
#include "disableproactiveengagementresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisableProactiveEngagementRequest
 * \brief The DisableProactiveEngagementRequest class provides an interface for Shield DisableProactiveEngagement requests.
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
 * \sa ShieldClient::disableProactiveEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
DisableProactiveEngagementRequest::DisableProactiveEngagementRequest(const DisableProactiveEngagementRequest &other)
    : ShieldRequest(new DisableProactiveEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableProactiveEngagementRequest object.
 */
DisableProactiveEngagementRequest::DisableProactiveEngagementRequest()
    : ShieldRequest(new DisableProactiveEngagementRequestPrivate(ShieldRequest::DisableProactiveEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool DisableProactiveEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableProactiveEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableProactiveEngagementRequest::response(QNetworkReply * const reply) const
{
    return new DisableProactiveEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DisableProactiveEngagementRequestPrivate
 * \brief The DisableProactiveEngagementRequestPrivate class provides private implementation for DisableProactiveEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisableProactiveEngagementRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DisableProactiveEngagementRequestPrivate::DisableProactiveEngagementRequestPrivate(
    const ShieldRequest::Action action, DisableProactiveEngagementRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableProactiveEngagementRequest
 * class' copy constructor.
 */
DisableProactiveEngagementRequestPrivate::DisableProactiveEngagementRequestPrivate(
    const DisableProactiveEngagementRequestPrivate &other, DisableProactiveEngagementRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
