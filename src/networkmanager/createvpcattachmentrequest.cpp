// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
