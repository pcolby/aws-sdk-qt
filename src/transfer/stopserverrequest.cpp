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

#include "stopserverrequest.h"
#include "stopserverrequest_p.h"
#include "stopserverresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StopServerRequest
 * \brief The StopServerRequest class provides an interface for Transfer StopServer requests.
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
 * \sa TransferClient::stopServer
 */

/*!
 * Constructs a copy of \a other.
 */
StopServerRequest::StopServerRequest(const StopServerRequest &other)
    : TransferRequest(new StopServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopServerRequest object.
 */
StopServerRequest::StopServerRequest()
    : TransferRequest(new StopServerRequestPrivate(TransferRequest::StopServerAction, this))
{

}

/*!
 * \reimp
 */
bool StopServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopServerRequest::response(QNetworkReply * const reply) const
{
    return new StopServerResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::StopServerRequestPrivate
 * \brief The StopServerRequestPrivate class provides private implementation for StopServerRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StopServerRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
StopServerRequestPrivate::StopServerRequestPrivate(
    const TransferRequest::Action action, StopServerRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopServerRequest
 * class' copy constructor.
 */
StopServerRequestPrivate::StopServerRequestPrivate(
    const StopServerRequestPrivate &other, StopServerRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
