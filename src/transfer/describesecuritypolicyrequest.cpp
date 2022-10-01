// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesecuritypolicyrequest.h"
#include "describesecuritypolicyrequest_p.h"
#include "describesecuritypolicyresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeSecurityPolicyRequest
 * \brief The DescribeSecurityPolicyRequest class provides an interface for Transfer DescribeSecurityPolicy requests.
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
 * \sa TransferClient::describeSecurityPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSecurityPolicyRequest::DescribeSecurityPolicyRequest(const DescribeSecurityPolicyRequest &other)
    : TransferRequest(new DescribeSecurityPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSecurityPolicyRequest object.
 */
DescribeSecurityPolicyRequest::DescribeSecurityPolicyRequest()
    : TransferRequest(new DescribeSecurityPolicyRequestPrivate(TransferRequest::DescribeSecurityPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSecurityPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSecurityPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSecurityPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSecurityPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DescribeSecurityPolicyRequestPrivate
 * \brief The DescribeSecurityPolicyRequestPrivate class provides private implementation for DescribeSecurityPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeSecurityPolicyRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DescribeSecurityPolicyRequestPrivate::DescribeSecurityPolicyRequestPrivate(
    const TransferRequest::Action action, DescribeSecurityPolicyRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSecurityPolicyRequest
 * class' copy constructor.
 */
DescribeSecurityPolicyRequestPrivate::DescribeSecurityPolicyRequestPrivate(
    const DescribeSecurityPolicyRequestPrivate &other, DescribeSecurityPolicyRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
