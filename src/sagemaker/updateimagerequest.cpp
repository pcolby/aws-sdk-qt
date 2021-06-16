/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
