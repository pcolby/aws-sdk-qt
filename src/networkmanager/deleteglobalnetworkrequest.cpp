// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteglobalnetworkrequest.h"
#include "deleteglobalnetworkrequest_p.h"
#include "deleteglobalnetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteGlobalNetworkRequest
 * \brief The DeleteGlobalNetworkRequest class provides an interface for NetworkManager DeleteGlobalNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteGlobalNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGlobalNetworkRequest::DeleteGlobalNetworkRequest(const DeleteGlobalNetworkRequest &other)
    : NetworkManagerRequest(new DeleteGlobalNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGlobalNetworkRequest object.
 */
DeleteGlobalNetworkRequest::DeleteGlobalNetworkRequest()
    : NetworkManagerRequest(new DeleteGlobalNetworkRequestPrivate(NetworkManagerRequest::DeleteGlobalNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGlobalNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGlobalNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGlobalNetworkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGlobalNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteGlobalNetworkRequestPrivate
 * \brief The DeleteGlobalNetworkRequestPrivate class provides private implementation for DeleteGlobalNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteGlobalNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteGlobalNetworkRequestPrivate::DeleteGlobalNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteGlobalNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGlobalNetworkRequest
 * class' copy constructor.
 */
DeleteGlobalNetworkRequestPrivate::DeleteGlobalNetworkRequestPrivate(
    const DeleteGlobalNetworkRequestPrivate &other, DeleteGlobalNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
