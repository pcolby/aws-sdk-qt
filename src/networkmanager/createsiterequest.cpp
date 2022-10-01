// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsiterequest.h"
#include "createsiterequest_p.h"
#include "createsiteresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateSiteRequest
 * \brief The CreateSiteRequest class provides an interface for NetworkManager CreateSite requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createSite
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSiteRequest::CreateSiteRequest(const CreateSiteRequest &other)
    : NetworkManagerRequest(new CreateSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSiteRequest object.
 */
CreateSiteRequest::CreateSiteRequest()
    : NetworkManagerRequest(new CreateSiteRequestPrivate(NetworkManagerRequest::CreateSiteAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSiteRequest::response(QNetworkReply * const reply) const
{
    return new CreateSiteResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateSiteRequestPrivate
 * \brief The CreateSiteRequestPrivate class provides private implementation for CreateSiteRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateSiteRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateSiteRequestPrivate::CreateSiteRequestPrivate(
    const NetworkManagerRequest::Action action, CreateSiteRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSiteRequest
 * class' copy constructor.
 */
CreateSiteRequestPrivate::CreateSiteRequestPrivate(
    const CreateSiteRequestPrivate &other, CreateSiteRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
