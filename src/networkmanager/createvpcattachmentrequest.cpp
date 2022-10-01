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

#include "createvpcattachmentrequest.h"
#include "createvpcattachmentrequest_p.h"
#include "createvpcattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateVpcAttachmentRequest
 * \brief The CreateVpcAttachmentRequest class provides an interface for NetworkManager CreateVpcAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createVpcAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVpcAttachmentRequest::CreateVpcAttachmentRequest(const CreateVpcAttachmentRequest &other)
    : NetworkManagerRequest(new CreateVpcAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVpcAttachmentRequest object.
 */
CreateVpcAttachmentRequest::CreateVpcAttachmentRequest()
    : NetworkManagerRequest(new CreateVpcAttachmentRequestPrivate(NetworkManagerRequest::CreateVpcAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVpcAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVpcAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpcAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateVpcAttachmentRequestPrivate
 * \brief The CreateVpcAttachmentRequestPrivate class provides private implementation for CreateVpcAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateVpcAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateVpcAttachmentRequestPrivate::CreateVpcAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, CreateVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcAttachmentRequest
 * class' copy constructor.
 */
CreateVpcAttachmentRequestPrivate::CreateVpcAttachmentRequestPrivate(
    const CreateVpcAttachmentRequestPrivate &other, CreateVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
