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

#include "createconnectattachmentrequest.h"
#include "createconnectattachmentrequest_p.h"
#include "createconnectattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateConnectAttachmentRequest
 * \brief The CreateConnectAttachmentRequest class provides an interface for NetworkManager CreateConnectAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createConnectAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectAttachmentRequest::CreateConnectAttachmentRequest(const CreateConnectAttachmentRequest &other)
    : NetworkManagerRequest(new CreateConnectAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectAttachmentRequest object.
 */
CreateConnectAttachmentRequest::CreateConnectAttachmentRequest()
    : NetworkManagerRequest(new CreateConnectAttachmentRequestPrivate(NetworkManagerRequest::CreateConnectAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateConnectAttachmentRequestPrivate
 * \brief The CreateConnectAttachmentRequestPrivate class provides private implementation for CreateConnectAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateConnectAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateConnectAttachmentRequestPrivate::CreateConnectAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, CreateConnectAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectAttachmentRequest
 * class' copy constructor.
 */
CreateConnectAttachmentRequestPrivate::CreateConnectAttachmentRequestPrivate(
    const CreateConnectAttachmentRequestPrivate &other, CreateConnectAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
