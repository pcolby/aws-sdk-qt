// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprofilerequest.h"
#include "createprofilerequest_p.h"
#include "createprofileresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::CreateProfileRequest
 * \brief The CreateProfileRequest class provides an interface for Transfer CreateProfile requests.
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
 * \sa TransferClient::createProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProfileRequest::CreateProfileRequest(const CreateProfileRequest &other)
    : TransferRequest(new CreateProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProfileRequest object.
 */
CreateProfileRequest::CreateProfileRequest()
    : TransferRequest(new CreateProfileRequestPrivate(TransferRequest::CreateProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::CreateProfileRequestPrivate
 * \brief The CreateProfileRequestPrivate class provides private implementation for CreateProfileRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a CreateProfileRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const TransferRequest::Action action, CreateProfileRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProfileRequest
 * class' copy constructor.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const CreateProfileRequestPrivate &other, CreateProfileRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
