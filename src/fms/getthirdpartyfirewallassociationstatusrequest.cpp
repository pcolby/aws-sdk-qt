// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getthirdpartyfirewallassociationstatusrequest.h"
#include "getthirdpartyfirewallassociationstatusrequest_p.h"
#include "getthirdpartyfirewallassociationstatusresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetThirdPartyFirewallAssociationStatusRequest
 * \brief The GetThirdPartyFirewallAssociationStatusRequest class provides an interface for Fms GetThirdPartyFirewallAssociationStatus requests.
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
 * \sa FmsClient::getThirdPartyFirewallAssociationStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetThirdPartyFirewallAssociationStatusRequest::GetThirdPartyFirewallAssociationStatusRequest(const GetThirdPartyFirewallAssociationStatusRequest &other)
    : FmsRequest(new GetThirdPartyFirewallAssociationStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetThirdPartyFirewallAssociationStatusRequest object.
 */
GetThirdPartyFirewallAssociationStatusRequest::GetThirdPartyFirewallAssociationStatusRequest()
    : FmsRequest(new GetThirdPartyFirewallAssociationStatusRequestPrivate(FmsRequest::GetThirdPartyFirewallAssociationStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetThirdPartyFirewallAssociationStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetThirdPartyFirewallAssociationStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThirdPartyFirewallAssociationStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetThirdPartyFirewallAssociationStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetThirdPartyFirewallAssociationStatusRequestPrivate
 * \brief The GetThirdPartyFirewallAssociationStatusRequestPrivate class provides private implementation for GetThirdPartyFirewallAssociationStatusRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetThirdPartyFirewallAssociationStatusRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetThirdPartyFirewallAssociationStatusRequestPrivate::GetThirdPartyFirewallAssociationStatusRequestPrivate(
    const FmsRequest::Action action, GetThirdPartyFirewallAssociationStatusRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetThirdPartyFirewallAssociationStatusRequest
 * class' copy constructor.
 */
GetThirdPartyFirewallAssociationStatusRequestPrivate::GetThirdPartyFirewallAssociationStatusRequestPrivate(
    const GetThirdPartyFirewallAssociationStatusRequestPrivate &other, GetThirdPartyFirewallAssociationStatusRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
