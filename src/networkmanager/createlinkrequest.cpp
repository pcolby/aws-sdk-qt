/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
