// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfiletransferrequest.h"
#include "startfiletransferrequest_p.h"
#include "startfiletransferresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StartFileTransferRequest
 * \brief The StartFileTransferRequest class provides an interface for Transfer StartFileTransfer requests.
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
 * \sa TransferClient::startFileTransfer
 */

/*!
 * Constructs a copy of \a other.
 */
StartFileTransferRequest::StartFileTransferRequest(const StartFileTransferRequest &other)
    : TransferRequest(new StartFileTransferRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFileTransferRequest object.
 */
StartFileTransferRequest::StartFileTransferRequest()
    : TransferRequest(new StartFileTransferRequestPrivate(TransferRequest::StartFileTransferAction, this))
{

}

/*!
 * \reimp
 */
bool StartFileTransferRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFileTransferResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFileTransferRequest::response(QNetworkReply * const reply) const
{
    return new StartFileTransferResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::StartFileTransferRequestPrivate
 * \brief The StartFileTransferRequestPrivate class provides private implementation for StartFileTransferRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StartFileTransferRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
StartFileTransferRequestPrivate::StartFileTransferRequestPrivate(
    const TransferRequest::Action action, StartFileTransferRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFileTransferRequest
 * class' copy constructor.
 */
StartFileTransferRequestPrivate::StartFileTransferRequestPrivate(
    const StartFileTransferRequestPrivate &other, StartFileTransferRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
