// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcompilationjobrequest.h"
#include "stopcompilationjobrequest_p.h"
#include "stopcompilationjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopCompilationJobRequest
 * \brief The StopCompilationJobRequest class provides an interface for SageMaker StopCompilationJob requests.
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
 * \sa SageMakerClient::stopCompilationJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopCompilationJobRequest::StopCompilationJobRequest(const StopCompilationJobRequest &other)
    : SageMakerRequest(new StopCompilationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopCompilationJobRequest object.
 */
StopCompilationJobRequest::StopCompilationJobRequest()
    : SageMakerRequest(new StopCompilationJobRequestPrivate(SageMakerRequest::StopCompilationJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopCompilationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopCompilationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopCompilationJobRequest::response(QNetworkReply * const reply) const
{
    return new StopCompilationJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopCompilationJobRequestPrivate
 * \brief The StopCompilationJobRequestPrivate class provides private implementation for StopCompilationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopCompilationJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopCompilationJobRequestPrivate::StopCompilationJobRequestPrivate(
    const SageMakerRequest::Action action, StopCompilationJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopCompilationJobRequest
 * class' copy constructor.
 */
StopCompilationJobRequestPrivate::StopCompilationJobRequestPrivate(
    const StopCompilationJobRequestPrivate &other, StopCompilationJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
