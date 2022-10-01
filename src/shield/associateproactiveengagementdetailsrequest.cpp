// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateproactiveengagementdetailsrequest.h"
#include "associateproactiveengagementdetailsrequest_p.h"
#include "associateproactiveengagementdetailsresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateProactiveEngagementDetailsRequest
 * \brief The AssociateProactiveEngagementDetailsRequest class provides an interface for Shield AssociateProactiveEngagementDetails requests.
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
 * \sa ShieldClient::associateProactiveEngagementDetails
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateProactiveEngagementDetailsRequest::AssociateProactiveEngagementDetailsRequest(const AssociateProactiveEngagementDetailsRequest &other)
    : ShieldRequest(new AssociateProactiveEngagementDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateProactiveEngagementDetailsRequest object.
 */
AssociateProactiveEngagementDetailsRequest::AssociateProactiveEngagementDetailsRequest()
    : ShieldRequest(new AssociateProactiveEngagementDetailsRequestPrivate(ShieldRequest::AssociateProactiveEngagementDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateProactiveEngagementDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateProactiveEngagementDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateProactiveEngagementDetailsRequest::response(QNetworkReply * const reply) const
{
    return new AssociateProactiveEngagementDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::AssociateProactiveEngagementDetailsRequestPrivate
 * \brief The AssociateProactiveEngagementDetailsRequestPrivate class provides private implementation for AssociateProactiveEngagementDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateProactiveEngagementDetailsRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
AssociateProactiveEngagementDetailsRequestPrivate::AssociateProactiveEngagementDetailsRequestPrivate(
    const ShieldRequest::Action action, AssociateProactiveEngagementDetailsRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateProactiveEngagementDetailsRequest
 * class' copy constructor.
 */
AssociateProactiveEngagementDetailsRequestPrivate::AssociateProactiveEngagementDetailsRequestPrivate(
    const AssociateProactiveEngagementDetailsRequestPrivate &other, AssociateProactiveEngagementDetailsRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
