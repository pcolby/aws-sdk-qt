// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepolicyrequest.h"
#include "getresourcepolicyrequest_p.h"
#include "getresourcepolicyresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetResourcePolicyRequest
 * \brief The GetResourcePolicyRequest class provides an interface for NetworkManager GetResourcePolicy requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcePolicyRequest::GetResourcePolicyRequest(const GetResourcePolicyRequest &other)
    : NetworkManagerRequest(new GetResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcePolicyRequest object.
 */
GetResourcePolicyRequest::GetResourcePolicyRequest()
    : NetworkManagerRequest(new GetResourcePolicyRequestPrivate(NetworkManagerRequest::GetResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetResourcePolicyRequestPrivate
 * \brief The GetResourcePolicyRequestPrivate class provides private implementation for GetResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetResourcePolicyRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetResourcePolicyRequestPrivate::GetResourcePolicyRequestPrivate(
    const NetworkManagerRequest::Action action, GetResourcePolicyRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcePolicyRequest
 * class' copy constructor.
 */
GetResourcePolicyRequestPrivate::GetResourcePolicyRequestPrivate(
    const GetResourcePolicyRequestPrivate &other, GetResourcePolicyRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
