// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testidentityproviderrequest.h"
#include "testidentityproviderrequest_p.h"
#include "testidentityproviderresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TestIdentityProviderRequest
 * \brief The TestIdentityProviderRequest class provides an interface for Transfer TestIdentityProvider requests.
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
 * \sa TransferClient::testIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
TestIdentityProviderRequest::TestIdentityProviderRequest(const TestIdentityProviderRequest &other)
    : TransferRequest(new TestIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestIdentityProviderRequest object.
 */
TestIdentityProviderRequest::TestIdentityProviderRequest()
    : TransferRequest(new TestIdentityProviderRequestPrivate(TransferRequest::TestIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool TestIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new TestIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::TestIdentityProviderRequestPrivate
 * \brief The TestIdentityProviderRequestPrivate class provides private implementation for TestIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TestIdentityProviderRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
TestIdentityProviderRequestPrivate::TestIdentityProviderRequestPrivate(
    const TransferRequest::Action action, TestIdentityProviderRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestIdentityProviderRequest
 * class' copy constructor.
 */
TestIdentityProviderRequestPrivate::TestIdentityProviderRequestPrivate(
    const TestIdentityProviderRequestPrivate &other, TestIdentityProviderRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
