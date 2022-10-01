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

#include "deleteappimageconfigrequest.h"
#include "deleteappimageconfigrequest_p.h"
#include "deleteappimageconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAppImageConfigRequest
 * \brief The DeleteAppImageConfigRequest class provides an interface for SageMaker DeleteAppImageConfig requests.
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
 * \sa SageMakerClient::deleteAppImageConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppImageConfigRequest::DeleteAppImageConfigRequest(const DeleteAppImageConfigRequest &other)
    : SageMakerRequest(new DeleteAppImageConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppImageConfigRequest object.
 */
DeleteAppImageConfigRequest::DeleteAppImageConfigRequest()
    : SageMakerRequest(new DeleteAppImageConfigRequestPrivate(SageMakerRequest::DeleteAppImageConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppImageConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppImageConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppImageConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppImageConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteAppImageConfigRequestPrivate
 * \brief The DeleteAppImageConfigRequestPrivate class provides private implementation for DeleteAppImageConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAppImageConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteAppImageConfigRequestPrivate::DeleteAppImageConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppImageConfigRequest
 * class' copy constructor.
 */
DeleteAppImageConfigRequestPrivate::DeleteAppImageConfigRequestPrivate(
    const DeleteAppImageConfigRequestPrivate &other, DeleteAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
