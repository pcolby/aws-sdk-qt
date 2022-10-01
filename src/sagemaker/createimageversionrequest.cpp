// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimageversionrequest.h"
#include "createimageversionrequest_p.h"
#include "createimageversionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateImageVersionRequest
 * \brief The CreateImageVersionRequest class provides an interface for SageMaker CreateImageVersion requests.
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
 * \sa SageMakerClient::createImageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageVersionRequest::CreateImageVersionRequest(const CreateImageVersionRequest &other)
    : SageMakerRequest(new CreateImageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageVersionRequest object.
 */
CreateImageVersionRequest::CreateImageVersionRequest()
    : SageMakerRequest(new CreateImageVersionRequestPrivate(SageMakerRequest::CreateImageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateImageVersionRequestPrivate
 * \brief The CreateImageVersionRequestPrivate class provides private implementation for CreateImageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateImageVersionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateImageVersionRequestPrivate::CreateImageVersionRequestPrivate(
    const SageMakerRequest::Action action, CreateImageVersionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImageVersionRequest
 * class' copy constructor.
 */
CreateImageVersionRequestPrivate::CreateImageVersionRequestPrivate(
    const CreateImageVersionRequestPrivate &other, CreateImageVersionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
