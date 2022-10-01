// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createglobalnetworkrequest.h"
#include "createglobalnetworkrequest_p.h"
#include "createglobalnetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateGlobalNetworkRequest
 * \brief The CreateGlobalNetworkRequest class provides an interface for NetworkManager CreateGlobalNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createGlobalNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGlobalNetworkRequest::CreateGlobalNetworkRequest(const CreateGlobalNetworkRequest &other)
    : NetworkManagerRequest(new CreateGlobalNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGlobalNetworkRequest object.
 */
CreateGlobalNetworkRequest::CreateGlobalNetworkRequest()
    : NetworkManagerRequest(new CreateGlobalNetworkRequestPrivate(NetworkManagerRequest::CreateGlobalNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGlobalNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGlobalNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGlobalNetworkRequest::response(QNetworkReply * const reply) const
{
    return new CreateGlobalNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateGlobalNetworkRequestPrivate
 * \brief The CreateGlobalNetworkRequestPrivate class provides private implementation for CreateGlobalNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateGlobalNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateGlobalNetworkRequestPrivate::CreateGlobalNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, CreateGlobalNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGlobalNetworkRequest
 * class' copy constructor.
 */
CreateGlobalNetworkRequestPrivate::CreateGlobalNetworkRequestPrivate(
    const CreateGlobalNetworkRequestPrivate &other, CreateGlobalNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
