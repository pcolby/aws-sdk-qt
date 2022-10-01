// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendworkflowstepstaterequest.h"
#include "sendworkflowstepstaterequest_p.h"
#include "sendworkflowstepstateresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::SendWorkflowStepStateRequest
 * \brief The SendWorkflowStepStateRequest class provides an interface for Transfer SendWorkflowStepState requests.
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
 * \sa TransferClient::sendWorkflowStepState
 */

/*!
 * Constructs a copy of \a other.
 */
SendWorkflowStepStateRequest::SendWorkflowStepStateRequest(const SendWorkflowStepStateRequest &other)
    : TransferRequest(new SendWorkflowStepStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendWorkflowStepStateRequest object.
 */
SendWorkflowStepStateRequest::SendWorkflowStepStateRequest()
    : TransferRequest(new SendWorkflowStepStateRequestPrivate(TransferRequest::SendWorkflowStepStateAction, this))
{

}

/*!
 * \reimp
 */
bool SendWorkflowStepStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendWorkflowStepStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendWorkflowStepStateRequest::response(QNetworkReply * const reply) const
{
    return new SendWorkflowStepStateResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::SendWorkflowStepStateRequestPrivate
 * \brief The SendWorkflowStepStateRequestPrivate class provides private implementation for SendWorkflowStepStateRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a SendWorkflowStepStateRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
SendWorkflowStepStateRequestPrivate::SendWorkflowStepStateRequestPrivate(
    const TransferRequest::Action action, SendWorkflowStepStateRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendWorkflowStepStateRequest
 * class' copy constructor.
 */
SendWorkflowStepStateRequestPrivate::SendWorkflowStepStateRequestPrivate(
    const SendWorkflowStepStateRequestPrivate &other, SendWorkflowStepStateRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
