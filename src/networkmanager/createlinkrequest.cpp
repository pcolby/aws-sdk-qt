// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlinkrequest.h"
#include "createlinkrequest_p.h"
#include "createlinkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateLinkRequest
 * \brief The CreateLinkRequest class provides an interface for NetworkManager CreateLink requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createLink
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLinkRequest::CreateLinkRequest(const CreateLinkRequest &other)
    : NetworkManagerRequest(new CreateLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLinkRequest object.
 */
CreateLinkRequest::CreateLinkRequest()
    : NetworkManagerRequest(new CreateLinkRequestPrivate(NetworkManagerRequest::CreateLinkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLinkRequest::response(QNetworkReply * const reply) const
{
    return new CreateLinkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateLinkRequestPrivate
 * \brief The CreateLinkRequestPrivate class provides private implementation for CreateLinkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateLinkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateLinkRequestPrivate::CreateLinkRequestPrivate(
    const NetworkManagerRequest::Action action, CreateLinkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLinkRequest
 * class' copy constructor.
 */
CreateLinkRequestPrivate::CreateLinkRequestPrivate(
    const CreateLinkRequestPrivate &other, CreateLinkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
