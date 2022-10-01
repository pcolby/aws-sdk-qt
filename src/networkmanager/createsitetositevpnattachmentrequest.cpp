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

#include "createsitetositevpnattachmentrequest.h"
#include "createsitetositevpnattachmentrequest_p.h"
#include "createsitetositevpnattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateSiteToSiteVpnAttachmentRequest
 * \brief The CreateSiteToSiteVpnAttachmentRequest class provides an interface for NetworkManager CreateSiteToSiteVpnAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createSiteToSiteVpnAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSiteToSiteVpnAttachmentRequest::CreateSiteToSiteVpnAttachmentRequest(const CreateSiteToSiteVpnAttachmentRequest &other)
    : NetworkManagerRequest(new CreateSiteToSiteVpnAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSiteToSiteVpnAttachmentRequest object.
 */
CreateSiteToSiteVpnAttachmentRequest::CreateSiteToSiteVpnAttachmentRequest()
    : NetworkManagerRequest(new CreateSiteToSiteVpnAttachmentRequestPrivate(NetworkManagerRequest::CreateSiteToSiteVpnAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSiteToSiteVpnAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSiteToSiteVpnAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSiteToSiteVpnAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateSiteToSiteVpnAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateSiteToSiteVpnAttachmentRequestPrivate
 * \brief The CreateSiteToSiteVpnAttachmentRequestPrivate class provides private implementation for CreateSiteToSiteVpnAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateSiteToSiteVpnAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateSiteToSiteVpnAttachmentRequestPrivate::CreateSiteToSiteVpnAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, CreateSiteToSiteVpnAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSiteToSiteVpnAttachmentRequest
 * class' copy constructor.
 */
CreateSiteToSiteVpnAttachmentRequestPrivate::CreateSiteToSiteVpnAttachmentRequestPrivate(
    const CreateSiteToSiteVpnAttachmentRequestPrivate &other, CreateSiteToSiteVpnAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
