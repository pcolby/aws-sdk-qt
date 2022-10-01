// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersrequest.h"
#include "listusersrequest_p.h"
#include "listusersresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListUsersRequest
 * \brief The ListUsersRequest class provides an interface for Transfer ListUsers requests.
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
 * \sa TransferClient::listUsers
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsersRequest::ListUsersRequest(const ListUsersRequest &other)
    : TransferRequest(new ListUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsersRequest object.
 */
ListUsersRequest::ListUsersRequest()
    : TransferRequest(new ListUsersRequestPrivate(TransferRequest::ListUsersAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsersRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::ListUsersRequestPrivate
 * \brief The ListUsersRequestPrivate class provides private implementation for ListUsersRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListUsersRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const TransferRequest::Action action, ListUsersRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsersRequest
 * class' copy constructor.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const ListUsersRequestPrivate &other, ListUsersRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
