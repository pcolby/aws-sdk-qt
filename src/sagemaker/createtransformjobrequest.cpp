// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtransformjobrequest.h"
#include "createtransformjobrequest_p.h"
#include "createtransformjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTransformJobRequest
 * \brief The CreateTransformJobRequest class provides an interface for SageMaker CreateTransformJob requests.
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
 * \sa SageMakerClient::createTransformJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTransformJobRequest::CreateTransformJobRequest(const CreateTransformJobRequest &other)
    : SageMakerRequest(new CreateTransformJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTransformJobRequest object.
 */
CreateTransformJobRequest::CreateTransformJobRequest()
    : SageMakerRequest(new CreateTransformJobRequestPrivate(SageMakerRequest::CreateTransformJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTransformJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTransformJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTransformJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateTransformJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateTransformJobRequestPrivate
 * \brief The CreateTransformJobRequestPrivate class provides private implementation for CreateTransformJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTransformJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateTransformJobRequestPrivate::CreateTransformJobRequestPrivate(
    const SageMakerRequest::Action action, CreateTransformJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTransformJobRequest
 * class' copy constructor.
 */
CreateTransformJobRequestPrivate::CreateTransformJobRequestPrivate(
    const CreateTransformJobRequestPrivate &other, CreateTransformJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
