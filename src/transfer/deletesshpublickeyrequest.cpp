/*
    Copyright 2013-2019 Paul Colby

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

#include "deletesshpublickeyrequest.h"
#include "deletesshpublickeyrequest_p.h"
#include "deletesshpublickeyresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteSshPublicKeyRequest
 * \brief The DeleteSshPublicKeyRequest class provides an interface for Transfer DeleteSshPublicKey requests.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer for SFTP is a fully managed service that enables the transfer of files directly into and out of Amazon S3
 *  using the Secure File Transfer Protocol (SFTP)—also known as Secure Shell (SSH) File Transfer Protocol. AWS helps you
 *  seamlessly migrate your file transfer workflows to AWS Transfer for SFTP—by integrating with existing authentication
 *  systems, and providing DNS routing with Amazon Route 53—so nothing changes for your customers and partners, or their
 *  applications. With your data in S3, you can use it with AWS services for processing, analytics, machine learning, and
 *  archiving. Getting started with AWS Transfer for SFTP (AWS SFTP) is easy; there is no infrastructure to buy and setup.
 *
 * \sa TransferClient::deleteSshPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSshPublicKeyRequest::DeleteSshPublicKeyRequest(const DeleteSshPublicKeyRequest &other)
    : TransferRequest(new DeleteSshPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSshPublicKeyRequest object.
 */
DeleteSshPublicKeyRequest::DeleteSshPublicKeyRequest()
    : TransferRequest(new DeleteSshPublicKeyRequestPrivate(TransferRequest::DeleteSshPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSshPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSshPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSshPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSshPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DeleteSshPublicKeyRequestPrivate
 * \brief The DeleteSshPublicKeyRequestPrivate class provides private implementation for DeleteSshPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteSshPublicKeyRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DeleteSshPublicKeyRequestPrivate::DeleteSshPublicKeyRequestPrivate(
    const TransferRequest::Action action, DeleteSshPublicKeyRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSshPublicKeyRequest
 * class' copy constructor.
 */
DeleteSshPublicKeyRequestPrivate::DeleteSshPublicKeyRequestPrivate(
    const DeleteSshPublicKeyRequestPrivate &other, DeleteSshPublicKeyRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
