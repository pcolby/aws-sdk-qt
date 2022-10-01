// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecorenetworkrequest.h"
#include "deletecorenetworkrequest_p.h"
#include "deletecorenetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkRequest
 * \brief The DeleteCoreNetworkRequest class provides an interface for NetworkManager DeleteCoreNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteCoreNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCoreNetworkRequest::DeleteCoreNetworkRequest(const DeleteCoreNetworkRequest &other)
    : NetworkManagerRequest(new DeleteCoreNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCoreNetworkRequest object.
 */
DeleteCoreNetworkRequest::DeleteCoreNetworkRequest()
    : NetworkManagerRequest(new DeleteCoreNetworkRequestPrivate(NetworkManagerRequest::DeleteCoreNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCoreNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCoreNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCoreNetworkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCoreNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkRequestPrivate
 * \brief The DeleteCoreNetworkRequestPrivate class provides private implementation for DeleteCoreNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteCoreNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteCoreNetworkRequestPrivate::DeleteCoreNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCoreNetworkRequest
 * class' copy constructor.
 */
DeleteCoreNetworkRequestPrivate::DeleteCoreNetworkRequestPrivate(
    const DeleteCoreNetworkRequestPrivate &other, DeleteCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
