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

#include "createconnectorrequest.h"
#include "createconnectorrequest_p.h"
#include "createconnectorresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::CreateConnectorRequest
 * \brief The CreateConnectorRequest class provides an interface for Transfer CreateConnector requests.
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
 * \sa TransferClient::createConnector
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectorRequest::CreateConnectorRequest(const CreateConnectorRequest &other)
    : TransferRequest(new CreateConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectorRequest object.
 */
CreateConnectorRequest::CreateConnectorRequest()
    : TransferRequest(new CreateConnectorRequestPrivate(TransferRequest::CreateConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectorRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::CreateConnectorRequestPrivate
 * \brief The CreateConnectorRequestPrivate class provides private implementation for CreateConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a CreateConnectorRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
CreateConnectorRequestPrivate::CreateConnectorRequestPrivate(
    const TransferRequest::Action action, CreateConnectorRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectorRequest
 * class' copy constructor.
 */
CreateConnectorRequestPrivate::CreateConnectorRequestPrivate(
    const CreateConnectorRequestPrivate &other, CreateConnectorRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
