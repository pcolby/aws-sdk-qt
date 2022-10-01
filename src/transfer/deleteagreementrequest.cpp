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

#include "deleteagreementrequest.h"
#include "deleteagreementrequest_p.h"
#include "deleteagreementresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteAgreementRequest
 * \brief The DeleteAgreementRequest class provides an interface for Transfer DeleteAgreement requests.
 *
 * \inmodule QtAwsTransfer
 *
 *  Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3) or Amazon EFS. Additionally, you can use Applicability Statement 2 (AS2) to
 *  transfer files into and out of Amazon S3. Amazon Web Services helps you seamlessly migrate your file transfer workflows
 *  to Transfer Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53
 *  so nothing changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it
 *  with Amazon Web Services for processing, analytics, machine learning, and archiving. Getting started with Transfer
 *  Family is easy since there is no infrastructure to buy and set
 *
 * \sa TransferClient::deleteAgreement
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAgreementRequest::DeleteAgreementRequest(const DeleteAgreementRequest &other)
    : TransferRequest(new DeleteAgreementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAgreementRequest object.
 */
DeleteAgreementRequest::DeleteAgreementRequest()
    : TransferRequest(new DeleteAgreementRequestPrivate(TransferRequest::DeleteAgreementAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAgreementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAgreementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAgreementRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAgreementResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DeleteAgreementRequestPrivate
 * \brief The DeleteAgreementRequestPrivate class provides private implementation for DeleteAgreementRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteAgreementRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DeleteAgreementRequestPrivate::DeleteAgreementRequestPrivate(
    const TransferRequest::Action action, DeleteAgreementRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAgreementRequest
 * class' copy constructor.
 */
DeleteAgreementRequestPrivate::DeleteAgreementRequestPrivate(
    const DeleteAgreementRequestPrivate &other, DeleteAgreementRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
