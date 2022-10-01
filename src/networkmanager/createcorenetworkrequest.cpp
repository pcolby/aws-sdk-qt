// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcorenetworkrequest.h"
#include "createcorenetworkrequest_p.h"
#include "createcorenetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateCoreNetworkRequest
 * \brief The CreateCoreNetworkRequest class provides an interface for NetworkManager CreateCoreNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createCoreNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCoreNetworkRequest::CreateCoreNetworkRequest(const CreateCoreNetworkRequest &other)
    : NetworkManagerRequest(new CreateCoreNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCoreNetworkRequest object.
 */
CreateCoreNetworkRequest::CreateCoreNetworkRequest()
    : NetworkManagerRequest(new CreateCoreNetworkRequestPrivate(NetworkManagerRequest::CreateCoreNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCoreNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCoreNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCoreNetworkRequest::response(QNetworkReply * const reply) const
{
    return new CreateCoreNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateCoreNetworkRequestPrivate
 * \brief The CreateCoreNetworkRequestPrivate class provides private implementation for CreateCoreNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateCoreNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateCoreNetworkRequestPrivate::CreateCoreNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, CreateCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCoreNetworkRequest
 * class' copy constructor.
 */
CreateCoreNetworkRequestPrivate::CreateCoreNetworkRequestPrivate(
    const CreateCoreNetworkRequestPrivate &other, CreateCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
