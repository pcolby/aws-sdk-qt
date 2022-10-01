// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatethirdpartyfirewallrequest.h"
#include "disassociatethirdpartyfirewallrequest_p.h"
#include "disassociatethirdpartyfirewallresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DisassociateThirdPartyFirewallRequest
 * \brief The DisassociateThirdPartyFirewallRequest class provides an interface for Fms DisassociateThirdPartyFirewall requests.
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
 * \sa FmsClient::disassociateThirdPartyFirewall
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateThirdPartyFirewallRequest::DisassociateThirdPartyFirewallRequest(const DisassociateThirdPartyFirewallRequest &other)
    : FmsRequest(new DisassociateThirdPartyFirewallRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateThirdPartyFirewallRequest object.
 */
DisassociateThirdPartyFirewallRequest::DisassociateThirdPartyFirewallRequest()
    : FmsRequest(new DisassociateThirdPartyFirewallRequestPrivate(FmsRequest::DisassociateThirdPartyFirewallAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateThirdPartyFirewallRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateThirdPartyFirewallResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateThirdPartyFirewallRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateThirdPartyFirewallResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::DisassociateThirdPartyFirewallRequestPrivate
 * \brief The DisassociateThirdPartyFirewallRequestPrivate class provides private implementation for DisassociateThirdPartyFirewallRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DisassociateThirdPartyFirewallRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DisassociateThirdPartyFirewallRequestPrivate::DisassociateThirdPartyFirewallRequestPrivate(
    const FmsRequest::Action action, DisassociateThirdPartyFirewallRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateThirdPartyFirewallRequest
 * class' copy constructor.
 */
DisassociateThirdPartyFirewallRequestPrivate::DisassociateThirdPartyFirewallRequestPrivate(
    const DisassociateThirdPartyFirewallRequestPrivate &other, DisassociateThirdPartyFirewallRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
