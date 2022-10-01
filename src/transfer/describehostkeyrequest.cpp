// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehostkeyrequest.h"
#include "describehostkeyrequest_p.h"
#include "describehostkeyresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeHostKeyRequest
 * \brief The DescribeHostKeyRequest class provides an interface for Transfer DescribeHostKey requests.
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
 * \sa TransferClient::describeHostKey
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHostKeyRequest::DescribeHostKeyRequest(const DescribeHostKeyRequest &other)
    : TransferRequest(new DescribeHostKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHostKeyRequest object.
 */
DescribeHostKeyRequest::DescribeHostKeyRequest()
    : TransferRequest(new DescribeHostKeyRequestPrivate(TransferRequest::DescribeHostKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHostKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHostKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHostKeyRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHostKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DescribeHostKeyRequestPrivate
 * \brief The DescribeHostKeyRequestPrivate class provides private implementation for DescribeHostKeyRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeHostKeyRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DescribeHostKeyRequestPrivate::DescribeHostKeyRequestPrivate(
    const TransferRequest::Action action, DescribeHostKeyRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHostKeyRequest
 * class' copy constructor.
 */
DescribeHostKeyRequestPrivate::DescribeHostKeyRequestPrivate(
    const DescribeHostKeyRequestPrivate &other, DescribeHostKeyRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
