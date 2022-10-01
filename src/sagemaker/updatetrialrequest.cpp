// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrialrequest.h"
#include "updatetrialrequest_p.h"
#include "updatetrialresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateTrialRequest
 * \brief The UpdateTrialRequest class provides an interface for SageMaker UpdateTrial requests.
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
 * \sa SageMakerClient::updateTrial
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrialRequest::UpdateTrialRequest(const UpdateTrialRequest &other)
    : SageMakerRequest(new UpdateTrialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrialRequest object.
 */
UpdateTrialRequest::UpdateTrialRequest()
    : SageMakerRequest(new UpdateTrialRequestPrivate(SageMakerRequest::UpdateTrialAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrialRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrialResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateTrialRequestPrivate
 * \brief The UpdateTrialRequestPrivate class provides private implementation for UpdateTrialRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateTrialRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateTrialRequestPrivate::UpdateTrialRequestPrivate(
    const SageMakerRequest::Action action, UpdateTrialRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrialRequest
 * class' copy constructor.
 */
UpdateTrialRequestPrivate::UpdateTrialRequestPrivate(
    const UpdateTrialRequestPrivate &other, UpdateTrialRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
