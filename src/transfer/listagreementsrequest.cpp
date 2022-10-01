// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listagreementsrequest.h"
#include "listagreementsrequest_p.h"
#include "listagreementsresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListAgreementsRequest
 * \brief The ListAgreementsRequest class provides an interface for Transfer ListAgreements requests.
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
 * \sa TransferClient::listAgreements
 */

/*!
 * Constructs a copy of \a other.
 */
ListAgreementsRequest::ListAgreementsRequest(const ListAgreementsRequest &other)
    : TransferRequest(new ListAgreementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAgreementsRequest object.
 */
ListAgreementsRequest::ListAgreementsRequest()
    : TransferRequest(new ListAgreementsRequestPrivate(TransferRequest::ListAgreementsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAgreementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAgreementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAgreementsRequest::response(QNetworkReply * const reply) const
{
    return new ListAgreementsResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::ListAgreementsRequestPrivate
 * \brief The ListAgreementsRequestPrivate class provides private implementation for ListAgreementsRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListAgreementsRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
ListAgreementsRequestPrivate::ListAgreementsRequestPrivate(
    const TransferRequest::Action action, ListAgreementsRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAgreementsRequest
 * class' copy constructor.
 */
ListAgreementsRequestPrivate::ListAgreementsRequestPrivate(
    const ListAgreementsRequestPrivate &other, ListAgreementsRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
