// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restorecorenetworkpolicyversionrequest.h"
#include "restorecorenetworkpolicyversionrequest_p.h"
#include "restorecorenetworkpolicyversionresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RestoreCoreNetworkPolicyVersionRequest
 * \brief The RestoreCoreNetworkPolicyVersionRequest class provides an interface for NetworkManager RestoreCoreNetworkPolicyVersion requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::restoreCoreNetworkPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreCoreNetworkPolicyVersionRequest::RestoreCoreNetworkPolicyVersionRequest(const RestoreCoreNetworkPolicyVersionRequest &other)
    : NetworkManagerRequest(new RestoreCoreNetworkPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreCoreNetworkPolicyVersionRequest object.
 */
RestoreCoreNetworkPolicyVersionRequest::RestoreCoreNetworkPolicyVersionRequest()
    : NetworkManagerRequest(new RestoreCoreNetworkPolicyVersionRequestPrivate(NetworkManagerRequest::RestoreCoreNetworkPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreCoreNetworkPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreCoreNetworkPolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreCoreNetworkPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new RestoreCoreNetworkPolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::RestoreCoreNetworkPolicyVersionRequestPrivate
 * \brief The RestoreCoreNetworkPolicyVersionRequestPrivate class provides private implementation for RestoreCoreNetworkPolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RestoreCoreNetworkPolicyVersionRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
RestoreCoreNetworkPolicyVersionRequestPrivate::RestoreCoreNetworkPolicyVersionRequestPrivate(
    const NetworkManagerRequest::Action action, RestoreCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreCoreNetworkPolicyVersionRequest
 * class' copy constructor.
 */
RestoreCoreNetworkPolicyVersionRequestPrivate::RestoreCoreNetworkPolicyVersionRequestPrivate(
    const RestoreCoreNetworkPolicyVersionRequestPrivate &other, RestoreCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
