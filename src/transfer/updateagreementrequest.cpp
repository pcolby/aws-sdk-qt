// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateagreementrequest.h"
#include "updateagreementrequest_p.h"
#include "updateagreementresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateAgreementRequest
 * \brief The UpdateAgreementRequest class provides an interface for Transfer UpdateAgreement requests.
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
 * \sa TransferClient::updateAgreement
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAgreementRequest::UpdateAgreementRequest(const UpdateAgreementRequest &other)
    : TransferRequest(new UpdateAgreementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAgreementRequest object.
 */
UpdateAgreementRequest::UpdateAgreementRequest()
    : TransferRequest(new UpdateAgreementRequestPrivate(TransferRequest::UpdateAgreementAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAgreementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAgreementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAgreementRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAgreementResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::UpdateAgreementRequestPrivate
 * \brief The UpdateAgreementRequestPrivate class provides private implementation for UpdateAgreementRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateAgreementRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
UpdateAgreementRequestPrivate::UpdateAgreementRequestPrivate(
    const TransferRequest::Action action, UpdateAgreementRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAgreementRequest
 * class' copy constructor.
 */
UpdateAgreementRequestPrivate::UpdateAgreementRequestPrivate(
    const UpdateAgreementRequestPrivate &other, UpdateAgreementRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
