// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprofilerequest.h"
#include "describeprofilerequest_p.h"
#include "describeprofileresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeProfileRequest
 * \brief The DescribeProfileRequest class provides an interface for Transfer DescribeProfile requests.
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
 * \sa TransferClient::describeProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProfileRequest::DescribeProfileRequest(const DescribeProfileRequest &other)
    : TransferRequest(new DescribeProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProfileRequest object.
 */
DescribeProfileRequest::DescribeProfileRequest()
    : TransferRequest(new DescribeProfileRequestPrivate(TransferRequest::DescribeProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProfileRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DescribeProfileRequestPrivate
 * \brief The DescribeProfileRequestPrivate class provides private implementation for DescribeProfileRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeProfileRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DescribeProfileRequestPrivate::DescribeProfileRequestPrivate(
    const TransferRequest::Action action, DescribeProfileRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProfileRequest
 * class' copy constructor.
 */
DescribeProfileRequestPrivate::DescribeProfileRequestPrivate(
    const DescribeProfileRequestPrivate &other, DescribeProfileRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
