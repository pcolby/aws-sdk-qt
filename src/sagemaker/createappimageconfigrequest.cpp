// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappimageconfigrequest.h"
#include "createappimageconfigrequest_p.h"
#include "createappimageconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAppImageConfigRequest
 * \brief The CreateAppImageConfigRequest class provides an interface for SageMaker CreateAppImageConfig requests.
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
 * \sa SageMakerClient::createAppImageConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppImageConfigRequest::CreateAppImageConfigRequest(const CreateAppImageConfigRequest &other)
    : SageMakerRequest(new CreateAppImageConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppImageConfigRequest object.
 */
CreateAppImageConfigRequest::CreateAppImageConfigRequest()
    : SageMakerRequest(new CreateAppImageConfigRequestPrivate(SageMakerRequest::CreateAppImageConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppImageConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppImageConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppImageConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppImageConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateAppImageConfigRequestPrivate
 * \brief The CreateAppImageConfigRequestPrivate class provides private implementation for CreateAppImageConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAppImageConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateAppImageConfigRequestPrivate::CreateAppImageConfigRequestPrivate(
    const SageMakerRequest::Action action, CreateAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppImageConfigRequest
 * class' copy constructor.
 */
CreateAppImageConfigRequestPrivate::CreateAppImageConfigRequestPrivate(
    const CreateAppImageConfigRequestPrivate &other, CreateAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
