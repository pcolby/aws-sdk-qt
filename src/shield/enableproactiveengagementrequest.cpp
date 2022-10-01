// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableproactiveengagementrequest.h"
#include "enableproactiveengagementrequest_p.h"
#include "enableproactiveengagementresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::EnableProactiveEngagementRequest
 * \brief The EnableProactiveEngagementRequest class provides an interface for Shield EnableProactiveEngagement requests.
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
 * \sa ShieldClient::enableProactiveEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
EnableProactiveEngagementRequest::EnableProactiveEngagementRequest(const EnableProactiveEngagementRequest &other)
    : ShieldRequest(new EnableProactiveEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableProactiveEngagementRequest object.
 */
EnableProactiveEngagementRequest::EnableProactiveEngagementRequest()
    : ShieldRequest(new EnableProactiveEngagementRequestPrivate(ShieldRequest::EnableProactiveEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool EnableProactiveEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableProactiveEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableProactiveEngagementRequest::response(QNetworkReply * const reply) const
{
    return new EnableProactiveEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::EnableProactiveEngagementRequestPrivate
 * \brief The EnableProactiveEngagementRequestPrivate class provides private implementation for EnableProactiveEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a EnableProactiveEngagementRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
EnableProactiveEngagementRequestPrivate::EnableProactiveEngagementRequestPrivate(
    const ShieldRequest::Action action, EnableProactiveEngagementRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableProactiveEngagementRequest
 * class' copy constructor.
 */
EnableProactiveEngagementRequestPrivate::EnableProactiveEngagementRequestPrivate(
    const EnableProactiveEngagementRequestPrivate &other, EnableProactiveEngagementRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
