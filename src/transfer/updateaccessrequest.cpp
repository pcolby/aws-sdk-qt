// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccessrequest.h"
#include "updateaccessrequest_p.h"
#include "updateaccessresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateAccessRequest
 * \brief The UpdateAccessRequest class provides an interface for Transfer UpdateAccess requests.
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
 * \sa TransferClient::updateAccess
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccessRequest::UpdateAccessRequest(const UpdateAccessRequest &other)
    : TransferRequest(new UpdateAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccessRequest object.
 */
UpdateAccessRequest::UpdateAccessRequest()
    : TransferRequest(new UpdateAccessRequestPrivate(TransferRequest::UpdateAccessAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccessRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccessResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::UpdateAccessRequestPrivate
 * \brief The UpdateAccessRequestPrivate class provides private implementation for UpdateAccessRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateAccessRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
UpdateAccessRequestPrivate::UpdateAccessRequestPrivate(
    const TransferRequest::Action action, UpdateAccessRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccessRequest
 * class' copy constructor.
 */
UpdateAccessRequestPrivate::UpdateAccessRequestPrivate(
    const UpdateAccessRequestPrivate &other, UpdateAccessRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
