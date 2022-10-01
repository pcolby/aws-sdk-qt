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

#include "deleteimageversionrequest.h"
#include "deleteimageversionrequest_p.h"
#include "deleteimageversionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteImageVersionRequest
 * \brief The DeleteImageVersionRequest class provides an interface for SageMaker DeleteImageVersion requests.
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
 * \sa SageMakerClient::deleteImageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageVersionRequest::DeleteImageVersionRequest(const DeleteImageVersionRequest &other)
    : SageMakerRequest(new DeleteImageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageVersionRequest object.
 */
DeleteImageVersionRequest::DeleteImageVersionRequest()
    : SageMakerRequest(new DeleteImageVersionRequestPrivate(SageMakerRequest::DeleteImageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteImageVersionRequestPrivate
 * \brief The DeleteImageVersionRequestPrivate class provides private implementation for DeleteImageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteImageVersionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteImageVersionRequestPrivate::DeleteImageVersionRequestPrivate(
    const SageMakerRequest::Action action, DeleteImageVersionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageVersionRequest
 * class' copy constructor.
 */
DeleteImageVersionRequestPrivate::DeleteImageVersionRequestPrivate(
    const DeleteImageVersionRequestPrivate &other, DeleteImageVersionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
