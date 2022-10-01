// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateimagerequest.h"
#include "updateimagerequest_p.h"
#include "updateimageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateImageRequest
 * \brief The UpdateImageRequest class provides an interface for SageMaker UpdateImage requests.
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
 * \sa SageMakerClient::updateImage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateImageRequest::UpdateImageRequest(const UpdateImageRequest &other)
    : SageMakerRequest(new UpdateImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateImageRequest object.
 */
UpdateImageRequest::UpdateImageRequest()
    : SageMakerRequest(new UpdateImageRequestPrivate(SageMakerRequest::UpdateImageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateImageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateImageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateImageRequestPrivate
 * \brief The UpdateImageRequestPrivate class provides private implementation for UpdateImageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateImageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateImageRequestPrivate::UpdateImageRequestPrivate(
    const SageMakerRequest::Action action, UpdateImageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateImageRequest
 * class' copy constructor.
 */
UpdateImageRequestPrivate::UpdateImageRequestPrivate(
    const UpdateImageRequestPrivate &other, UpdateImageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
