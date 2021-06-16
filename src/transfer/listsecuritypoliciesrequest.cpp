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

#include "listsecuritypoliciesrequest.h"
#include "listsecuritypoliciesrequest_p.h"
#include "listsecuritypoliciesresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListSecurityPoliciesRequest
 * \brief The ListSecurityPoliciesRequest class provides an interface for Transfer ListSecurityPolicies requests.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3). AWS helps you seamlessly migrate your file transfer workflows to AWS Transfer
 *  Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53 so nothing
 *  changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it with AWS
 *  services for processing, analytics, machine learning, and archiving. Getting started with AWS Transfer Family is easy
 *  since there is no infrastructure to buy and set
 *
 * \sa TransferClient::listSecurityPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListSecurityPoliciesRequest::ListSecurityPoliciesRequest(const ListSecurityPoliciesRequest &other)
    : TransferRequest(new ListSecurityPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSecurityPoliciesRequest object.
 */
ListSecurityPoliciesRequest::ListSecurityPoliciesRequest()
    : TransferRequest(new ListSecurityPoliciesRequestPrivate(TransferRequest::ListSecurityPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSecurityPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSecurityPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSecurityPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListSecurityPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::ListSecurityPoliciesRequestPrivate
 * \brief The ListSecurityPoliciesRequestPrivate class provides private implementation for ListSecurityPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListSecurityPoliciesRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
ListSecurityPoliciesRequestPrivate::ListSecurityPoliciesRequestPrivate(
    const TransferRequest::Action action, ListSecurityPoliciesRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSecurityPoliciesRequest
 * class' copy constructor.
 */
ListSecurityPoliciesRequestPrivate::ListSecurityPoliciesRequestPrivate(
    const ListSecurityPoliciesRequestPrivate &other, ListSecurityPoliciesRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
