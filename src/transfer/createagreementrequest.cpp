// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createagreementrequest.h"
#include "createagreementrequest_p.h"
#include "createagreementresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::CreateAgreementRequest
 * \brief The CreateAgreementRequest class provides an interface for Transfer CreateAgreement requests.
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
 * \sa TransferClient::createAgreement
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAgreementRequest::CreateAgreementRequest(const CreateAgreementRequest &other)
    : TransferRequest(new CreateAgreementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAgreementRequest object.
 */
CreateAgreementRequest::CreateAgreementRequest()
    : TransferRequest(new CreateAgreementRequestPrivate(TransferRequest::CreateAgreementAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAgreementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAgreementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAgreementRequest::response(QNetworkReply * const reply) const
{
    return new CreateAgreementResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::CreateAgreementRequestPrivate
 * \brief The CreateAgreementRequestPrivate class provides private implementation for CreateAgreementRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a CreateAgreementRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
CreateAgreementRequestPrivate::CreateAgreementRequestPrivate(
    const TransferRequest::Action action, CreateAgreementRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAgreementRequest
 * class' copy constructor.
 */
CreateAgreementRequestPrivate::CreateAgreementRequestPrivate(
    const CreateAgreementRequestPrivate &other, CreateAgreementRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
