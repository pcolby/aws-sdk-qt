// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhumantaskuirequest.h"
#include "createhumantaskuirequest_p.h"
#include "createhumantaskuiresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateHumanTaskUiRequest
 * \brief The CreateHumanTaskUiRequest class provides an interface for SageMaker CreateHumanTaskUi requests.
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
 * \sa SageMakerClient::createHumanTaskUi
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHumanTaskUiRequest::CreateHumanTaskUiRequest(const CreateHumanTaskUiRequest &other)
    : SageMakerRequest(new CreateHumanTaskUiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHumanTaskUiRequest object.
 */
CreateHumanTaskUiRequest::CreateHumanTaskUiRequest()
    : SageMakerRequest(new CreateHumanTaskUiRequestPrivate(SageMakerRequest::CreateHumanTaskUiAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHumanTaskUiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHumanTaskUiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHumanTaskUiRequest::response(QNetworkReply * const reply) const
{
    return new CreateHumanTaskUiResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateHumanTaskUiRequestPrivate
 * \brief The CreateHumanTaskUiRequestPrivate class provides private implementation for CreateHumanTaskUiRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateHumanTaskUiRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateHumanTaskUiRequestPrivate::CreateHumanTaskUiRequestPrivate(
    const SageMakerRequest::Action action, CreateHumanTaskUiRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHumanTaskUiRequest
 * class' copy constructor.
 */
CreateHumanTaskUiRequestPrivate::CreateHumanTaskUiRequestPrivate(
    const CreateHumanTaskUiRequestPrivate &other, CreateHumanTaskUiRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
