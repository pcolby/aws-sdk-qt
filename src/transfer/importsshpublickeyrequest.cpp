/*
    Copyright 2013-2018 Paul Colby

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

#include "importsshpublickeyrequest.h"
#include "importsshpublickeyrequest_p.h"
#include "importsshpublickeyresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ImportSshPublicKeyRequest
 * \brief The ImportSshPublicKeyRequest class provides an interface for Transfer ImportSshPublicKey requests.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::importSshPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
ImportSshPublicKeyRequest::ImportSshPublicKeyRequest(const ImportSshPublicKeyRequest &other)
    : TransferRequest(new ImportSshPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportSshPublicKeyRequest object.
 */
ImportSshPublicKeyRequest::ImportSshPublicKeyRequest()
    : TransferRequest(new ImportSshPublicKeyRequestPrivate(TransferRequest::ImportSshPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool ImportSshPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportSshPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportSshPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new ImportSshPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::ImportSshPublicKeyRequestPrivate
 * \brief The ImportSshPublicKeyRequestPrivate class provides private implementation for ImportSshPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ImportSshPublicKeyRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
ImportSshPublicKeyRequestPrivate::ImportSshPublicKeyRequestPrivate(
    const TransferRequest::Action action, ImportSshPublicKeyRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportSshPublicKeyRequest
 * class' copy constructor.
 */
ImportSshPublicKeyRequestPrivate::ImportSshPublicKeyRequestPrivate(
    const ImportSshPublicKeyRequestPrivate &other, ImportSshPublicKeyRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
