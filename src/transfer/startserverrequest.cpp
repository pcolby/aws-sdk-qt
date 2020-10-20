/*
    Copyright 2013-2020 Paul Colby

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

#include "startserverrequest.h"
#include "startserverrequest_p.h"
#include "startserverresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StartServerRequest
 * \brief The StartServerRequest class provides an interface for Transfer StartServer requests.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer for SFTP is a fully managed service that enables the transfer of files directly into and out of Amazon S3
 *  using the Secure File Transfer Protocol (SFTP)—also known as Secure Shell (SSH) File Transfer Protocol. AWS helps you
 *  seamlessly migrate your file transfer workflows to AWS Transfer for SFTP—by integrating with existing authentication
 *  systems, and providing DNS routing with Amazon Route 53—so nothing changes for your customers and partners, or their
 *  applications. With your data in S3, you can use it with AWS services for processing, analytics, machine learning, and
 *  archiving. Getting started with AWS Transfer for SFTP (AWS SFTP) is easy; there is no infrastructure to buy and setup.
 *
 * \sa TransferClient::startServer
 */

/*!
 * Constructs a copy of \a other.
 */
StartServerRequest::StartServerRequest(const StartServerRequest &other)
    : TransferRequest(new StartServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartServerRequest object.
 */
StartServerRequest::StartServerRequest()
    : TransferRequest(new StartServerRequestPrivate(TransferRequest::StartServerAction, this))
{

}

/*!
 * \reimp
 */
bool StartServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartServerRequest::response(QNetworkReply * const reply) const
{
    return new StartServerResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::StartServerRequestPrivate
 * \brief The StartServerRequestPrivate class provides private implementation for StartServerRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StartServerRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
StartServerRequestPrivate::StartServerRequestPrivate(
    const TransferRequest::Action action, StartServerRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartServerRequest
 * class' copy constructor.
 */
StartServerRequestPrivate::StartServerRequestPrivate(
    const StartServerRequestPrivate &other, StartServerRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
