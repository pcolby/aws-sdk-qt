// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccessrequest.h"
#include "describeaccessrequest_p.h"
#include "describeaccessresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeAccessRequest
 * \brief The DescribeAccessRequest class provides an interface for Transfer DescribeAccess requests.
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
 * \sa TransferClient::describeAccess
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccessRequest::DescribeAccessRequest(const DescribeAccessRequest &other)
    : TransferRequest(new DescribeAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccessRequest object.
 */
DescribeAccessRequest::DescribeAccessRequest()
    : TransferRequest(new DescribeAccessRequestPrivate(TransferRequest::DescribeAccessAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccessRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccessResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DescribeAccessRequestPrivate
 * \brief The DescribeAccessRequestPrivate class provides private implementation for DescribeAccessRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeAccessRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DescribeAccessRequestPrivate::DescribeAccessRequestPrivate(
    const TransferRequest::Action action, DescribeAccessRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccessRequest
 * class' copy constructor.
 */
DescribeAccessRequestPrivate::DescribeAccessRequestPrivate(
    const DescribeAccessRequestPrivate &other, DescribeAccessRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
