// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatethirdpartyfirewallrequest.h"
#include "associatethirdpartyfirewallrequest_p.h"
#include "associatethirdpartyfirewallresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::AssociateThirdPartyFirewallRequest
 * \brief The AssociateThirdPartyFirewallRequest class provides an interface for Fms AssociateThirdPartyFirewall requests.
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
 * \sa FmsClient::associateThirdPartyFirewall
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateThirdPartyFirewallRequest::AssociateThirdPartyFirewallRequest(const AssociateThirdPartyFirewallRequest &other)
    : FmsRequest(new AssociateThirdPartyFirewallRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateThirdPartyFirewallRequest object.
 */
AssociateThirdPartyFirewallRequest::AssociateThirdPartyFirewallRequest()
    : FmsRequest(new AssociateThirdPartyFirewallRequestPrivate(FmsRequest::AssociateThirdPartyFirewallAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateThirdPartyFirewallRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateThirdPartyFirewallResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateThirdPartyFirewallRequest::response(QNetworkReply * const reply) const
{
    return new AssociateThirdPartyFirewallResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::AssociateThirdPartyFirewallRequestPrivate
 * \brief The AssociateThirdPartyFirewallRequestPrivate class provides private implementation for AssociateThirdPartyFirewallRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a AssociateThirdPartyFirewallRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
AssociateThirdPartyFirewallRequestPrivate::AssociateThirdPartyFirewallRequestPrivate(
    const FmsRequest::Action action, AssociateThirdPartyFirewallRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateThirdPartyFirewallRequest
 * class' copy constructor.
 */
AssociateThirdPartyFirewallRequestPrivate::AssociateThirdPartyFirewallRequestPrivate(
    const AssociateThirdPartyFirewallRequestPrivate &other, AssociateThirdPartyFirewallRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
