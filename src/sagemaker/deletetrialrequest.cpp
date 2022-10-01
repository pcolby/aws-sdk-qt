// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetrialrequest.h"
#include "deletetrialrequest_p.h"
#include "deletetrialresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteTrialRequest
 * \brief The DeleteTrialRequest class provides an interface for SageMaker DeleteTrial requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::deleteTrial
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTrialRequest::DeleteTrialRequest(const DeleteTrialRequest &other)
    : SageMakerRequest(new DeleteTrialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTrialRequest object.
 */
DeleteTrialRequest::DeleteTrialRequest()
    : SageMakerRequest(new DeleteTrialRequestPrivate(SageMakerRequest::DeleteTrialAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTrialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrialRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrialResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteTrialRequestPrivate
 * \brief The DeleteTrialRequestPrivate class provides private implementation for DeleteTrialRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteTrialRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteTrialRequestPrivate::DeleteTrialRequestPrivate(
    const SageMakerRequest::Action action, DeleteTrialRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrialRequest
 * class' copy constructor.
 */
DeleteTrialRequestPrivate::DeleteTrialRequestPrivate(
    const DeleteTrialRequestPrivate &other, DeleteTrialRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
