// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexecutionsrequest.h"
#include "listexecutionsrequest_p.h"
#include "listexecutionsresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListExecutionsRequest
 * \brief The ListExecutionsRequest class provides an interface for Transfer ListExecutions requests.
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
 * \sa TransferClient::listExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListExecutionsRequest::ListExecutionsRequest(const ListExecutionsRequest &other)
    : TransferRequest(new ListExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExecutionsRequest object.
 */
ListExecutionsRequest::ListExecutionsRequest()
    : TransferRequest(new ListExecutionsRequestPrivate(TransferRequest::ListExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::ListExecutionsRequestPrivate
 * \brief The ListExecutionsRequestPrivate class provides private implementation for ListExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListExecutionsRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const TransferRequest::Action action, ListExecutionsRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExecutionsRequest
 * class' copy constructor.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const ListExecutionsRequestPrivate &other, ListExecutionsRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
