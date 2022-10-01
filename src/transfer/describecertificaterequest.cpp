// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecertificaterequest.h"
#include "describecertificaterequest_p.h"
#include "describecertificateresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeCertificateRequest
 * \brief The DescribeCertificateRequest class provides an interface for Transfer DescribeCertificate requests.
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
 * \sa TransferClient::describeCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCertificateRequest::DescribeCertificateRequest(const DescribeCertificateRequest &other)
    : TransferRequest(new DescribeCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCertificateRequest object.
 */
DescribeCertificateRequest::DescribeCertificateRequest()
    : TransferRequest(new DescribeCertificateRequestPrivate(TransferRequest::DescribeCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DescribeCertificateRequestPrivate
 * \brief The DescribeCertificateRequestPrivate class provides private implementation for DescribeCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeCertificateRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DescribeCertificateRequestPrivate::DescribeCertificateRequestPrivate(
    const TransferRequest::Action action, DescribeCertificateRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificateRequest
 * class' copy constructor.
 */
DescribeCertificateRequestPrivate::DescribeCertificateRequestPrivate(
    const DescribeCertificateRequestPrivate &other, DescribeCertificateRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
