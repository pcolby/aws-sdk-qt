// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createautomljobrequest.h"
#include "createautomljobrequest_p.h"
#include "createautomljobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAutoMLJobRequest
 * \brief The CreateAutoMLJobRequest class provides an interface for SageMaker CreateAutoMLJob requests.
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
 * \sa SageMakerClient::createAutoMLJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAutoMLJobRequest::CreateAutoMLJobRequest(const CreateAutoMLJobRequest &other)
    : SageMakerRequest(new CreateAutoMLJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAutoMLJobRequest object.
 */
CreateAutoMLJobRequest::CreateAutoMLJobRequest()
    : SageMakerRequest(new CreateAutoMLJobRequestPrivate(SageMakerRequest::CreateAutoMLJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAutoMLJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAutoMLJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAutoMLJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateAutoMLJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateAutoMLJobRequestPrivate
 * \brief The CreateAutoMLJobRequestPrivate class provides private implementation for CreateAutoMLJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAutoMLJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateAutoMLJobRequestPrivate::CreateAutoMLJobRequestPrivate(
    const SageMakerRequest::Action action, CreateAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAutoMLJobRequest
 * class' copy constructor.
 */
CreateAutoMLJobRequestPrivate::CreateAutoMLJobRequestPrivate(
    const CreateAutoMLJobRequestPrivate &other, CreateAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
