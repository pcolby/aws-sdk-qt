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

#include "deleteimagerequest.h"
#include "deleteimagerequest_p.h"
#include "deleteimageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteImageRequest
 * \brief The DeleteImageRequest class provides an interface for SageMaker DeleteImage requests.
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
 * \sa SageMakerClient::deleteImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageRequest::DeleteImageRequest(const DeleteImageRequest &other)
    : SageMakerRequest(new DeleteImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageRequest object.
 */
DeleteImageRequest::DeleteImageRequest()
    : SageMakerRequest(new DeleteImageRequestPrivate(SageMakerRequest::DeleteImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteImageRequestPrivate
 * \brief The DeleteImageRequestPrivate class provides private implementation for DeleteImageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteImageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const SageMakerRequest::Action action, DeleteImageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageRequest
 * class' copy constructor.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const DeleteImageRequestPrivate &other, DeleteImageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
