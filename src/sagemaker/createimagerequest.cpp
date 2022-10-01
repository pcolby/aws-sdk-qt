// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimagerequest.h"
#include "createimagerequest_p.h"
#include "createimageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateImageRequest
 * \brief The CreateImageRequest class provides an interface for SageMaker CreateImage requests.
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
 * \sa SageMakerClient::createImage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageRequest::CreateImageRequest(const CreateImageRequest &other)
    : SageMakerRequest(new CreateImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageRequest object.
 */
CreateImageRequest::CreateImageRequest()
    : SageMakerRequest(new CreateImageRequestPrivate(SageMakerRequest::CreateImageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateImageRequestPrivate
 * \brief The CreateImageRequestPrivate class provides private implementation for CreateImageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateImageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateImageRequestPrivate::CreateImageRequestPrivate(
    const SageMakerRequest::Action action, CreateImageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImageRequest
 * class' copy constructor.
 */
CreateImageRequestPrivate::CreateImageRequestPrivate(
    const CreateImageRequestPrivate &other, CreateImageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
