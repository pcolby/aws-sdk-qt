// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapprequest.h"
#include "createapprequest_p.h"
#include "createappresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAppRequest
 * \brief The CreateAppRequest class provides an interface for SageMaker CreateApp requests.
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
 * \sa SageMakerClient::createApp
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppRequest::CreateAppRequest(const CreateAppRequest &other)
    : SageMakerRequest(new CreateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppRequest object.
 */
CreateAppRequest::CreateAppRequest()
    : SageMakerRequest(new CreateAppRequestPrivate(SageMakerRequest::CreateAppAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateAppRequestPrivate
 * \brief The CreateAppRequestPrivate class provides private implementation for CreateAppRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAppRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const SageMakerRequest::Action action, CreateAppRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppRequest
 * class' copy constructor.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const CreateAppRequestPrivate &other, CreateAppRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
