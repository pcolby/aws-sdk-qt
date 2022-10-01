// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthirdpartyfirewallfirewallpoliciesrequest.h"
#include "listthirdpartyfirewallfirewallpoliciesrequest_p.h"
#include "listthirdpartyfirewallfirewallpoliciesresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListThirdPartyFirewallFirewallPoliciesRequest
 * \brief The ListThirdPartyFirewallFirewallPoliciesRequest class provides an interface for Fms ListThirdPartyFirewallFirewallPolicies requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::listThirdPartyFirewallFirewallPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListThirdPartyFirewallFirewallPoliciesRequest::ListThirdPartyFirewallFirewallPoliciesRequest(const ListThirdPartyFirewallFirewallPoliciesRequest &other)
    : FmsRequest(new ListThirdPartyFirewallFirewallPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThirdPartyFirewallFirewallPoliciesRequest object.
 */
ListThirdPartyFirewallFirewallPoliciesRequest::ListThirdPartyFirewallFirewallPoliciesRequest()
    : FmsRequest(new ListThirdPartyFirewallFirewallPoliciesRequestPrivate(FmsRequest::ListThirdPartyFirewallFirewallPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListThirdPartyFirewallFirewallPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThirdPartyFirewallFirewallPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThirdPartyFirewallFirewallPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListThirdPartyFirewallFirewallPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::ListThirdPartyFirewallFirewallPoliciesRequestPrivate
 * \brief The ListThirdPartyFirewallFirewallPoliciesRequestPrivate class provides private implementation for ListThirdPartyFirewallFirewallPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListThirdPartyFirewallFirewallPoliciesRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListThirdPartyFirewallFirewallPoliciesRequestPrivate::ListThirdPartyFirewallFirewallPoliciesRequestPrivate(
    const FmsRequest::Action action, ListThirdPartyFirewallFirewallPoliciesRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThirdPartyFirewallFirewallPoliciesRequest
 * class' copy constructor.
 */
ListThirdPartyFirewallFirewallPoliciesRequestPrivate::ListThirdPartyFirewallFirewallPoliciesRequestPrivate(
    const ListThirdPartyFirewallFirewallPoliciesRequestPrivate &other, ListThirdPartyFirewallFirewallPoliciesRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
