// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecorenetworkpolicyversionrequest.h"
#include "deletecorenetworkpolicyversionrequest_p.h"
#include "deletecorenetworkpolicyversionresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionRequest
 * \brief The DeleteCoreNetworkPolicyVersionRequest class provides an interface for NetworkManager DeleteCoreNetworkPolicyVersion requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteCoreNetworkPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCoreNetworkPolicyVersionRequest::DeleteCoreNetworkPolicyVersionRequest(const DeleteCoreNetworkPolicyVersionRequest &other)
    : NetworkManagerRequest(new DeleteCoreNetworkPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionRequest object.
 */
DeleteCoreNetworkPolicyVersionRequest::DeleteCoreNetworkPolicyVersionRequest()
    : NetworkManagerRequest(new DeleteCoreNetworkPolicyVersionRequestPrivate(NetworkManagerRequest::DeleteCoreNetworkPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCoreNetworkPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCoreNetworkPolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCoreNetworkPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCoreNetworkPolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionRequestPrivate
 * \brief The DeleteCoreNetworkPolicyVersionRequestPrivate class provides private implementation for DeleteCoreNetworkPolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteCoreNetworkPolicyVersionRequestPrivate::DeleteCoreNetworkPolicyVersionRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCoreNetworkPolicyVersionRequest
 * class' copy constructor.
 */
DeleteCoreNetworkPolicyVersionRequestPrivate::DeleteCoreNetworkPolicyVersionRequestPrivate(
    const DeleteCoreNetworkPolicyVersionRequestPrivate &other, DeleteCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
