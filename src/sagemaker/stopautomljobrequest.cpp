// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopautomljobrequest.h"
#include "stopautomljobrequest_p.h"
#include "stopautomljobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopAutoMLJobRequest
 * \brief The StopAutoMLJobRequest class provides an interface for SageMaker StopAutoMLJob requests.
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
 * \sa SageMakerClient::stopAutoMLJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopAutoMLJobRequest::StopAutoMLJobRequest(const StopAutoMLJobRequest &other)
    : SageMakerRequest(new StopAutoMLJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopAutoMLJobRequest object.
 */
StopAutoMLJobRequest::StopAutoMLJobRequest()
    : SageMakerRequest(new StopAutoMLJobRequestPrivate(SageMakerRequest::StopAutoMLJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopAutoMLJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopAutoMLJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopAutoMLJobRequest::response(QNetworkReply * const reply) const
{
    return new StopAutoMLJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopAutoMLJobRequestPrivate
 * \brief The StopAutoMLJobRequestPrivate class provides private implementation for StopAutoMLJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopAutoMLJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopAutoMLJobRequestPrivate::StopAutoMLJobRequestPrivate(
    const SageMakerRequest::Action action, StopAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopAutoMLJobRequest
 * class' copy constructor.
 */
StopAutoMLJobRequestPrivate::StopAutoMLJobRequestPrivate(
    const StopAutoMLJobRequestPrivate &other, StopAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
