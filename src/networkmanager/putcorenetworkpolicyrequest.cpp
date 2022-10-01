// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcorenetworkpolicyrequest.h"
#include "putcorenetworkpolicyrequest_p.h"
#include "putcorenetworkpolicyresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::PutCoreNetworkPolicyRequest
 * \brief The PutCoreNetworkPolicyRequest class provides an interface for NetworkManager PutCoreNetworkPolicy requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::putCoreNetworkPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutCoreNetworkPolicyRequest::PutCoreNetworkPolicyRequest(const PutCoreNetworkPolicyRequest &other)
    : NetworkManagerRequest(new PutCoreNetworkPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutCoreNetworkPolicyRequest object.
 */
PutCoreNetworkPolicyRequest::PutCoreNetworkPolicyRequest()
    : NetworkManagerRequest(new PutCoreNetworkPolicyRequestPrivate(NetworkManagerRequest::PutCoreNetworkPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutCoreNetworkPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutCoreNetworkPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutCoreNetworkPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutCoreNetworkPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::PutCoreNetworkPolicyRequestPrivate
 * \brief The PutCoreNetworkPolicyRequestPrivate class provides private implementation for PutCoreNetworkPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a PutCoreNetworkPolicyRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
PutCoreNetworkPolicyRequestPrivate::PutCoreNetworkPolicyRequestPrivate(
    const NetworkManagerRequest::Action action, PutCoreNetworkPolicyRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutCoreNetworkPolicyRequest
 * class' copy constructor.
 */
PutCoreNetworkPolicyRequestPrivate::PutCoreNetworkPolicyRequestPrivate(
    const PutCoreNetworkPolicyRequestPrivate &other, PutCoreNetworkPolicyRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
