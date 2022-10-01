// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcorenetworkpolicyrequest.h"
#include "getcorenetworkpolicyrequest_p.h"
#include "getcorenetworkpolicyresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkPolicyRequest
 * \brief The GetCoreNetworkPolicyRequest class provides an interface for NetworkManager GetCoreNetworkPolicy requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetworkPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreNetworkPolicyRequest::GetCoreNetworkPolicyRequest(const GetCoreNetworkPolicyRequest &other)
    : NetworkManagerRequest(new GetCoreNetworkPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreNetworkPolicyRequest object.
 */
GetCoreNetworkPolicyRequest::GetCoreNetworkPolicyRequest()
    : NetworkManagerRequest(new GetCoreNetworkPolicyRequestPrivate(NetworkManagerRequest::GetCoreNetworkPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreNetworkPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreNetworkPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreNetworkPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreNetworkPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkPolicyRequestPrivate
 * \brief The GetCoreNetworkPolicyRequestPrivate class provides private implementation for GetCoreNetworkPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkPolicyRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetCoreNetworkPolicyRequestPrivate::GetCoreNetworkPolicyRequestPrivate(
    const NetworkManagerRequest::Action action, GetCoreNetworkPolicyRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreNetworkPolicyRequest
 * class' copy constructor.
 */
GetCoreNetworkPolicyRequestPrivate::GetCoreNetworkPolicyRequestPrivate(
    const GetCoreNetworkPolicyRequestPrivate &other, GetCoreNetworkPolicyRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
