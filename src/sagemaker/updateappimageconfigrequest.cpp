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

#include "updateappimageconfigrequest.h"
#include "updateappimageconfigrequest_p.h"
#include "updateappimageconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigRequest
 * \brief The UpdateAppImageConfigRequest class provides an interface for SageMaker UpdateAppImageConfig requests.
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
 * \sa SageMakerClient::updateAppImageConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppImageConfigRequest::UpdateAppImageConfigRequest(const UpdateAppImageConfigRequest &other)
    : SageMakerRequest(new UpdateAppImageConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppImageConfigRequest object.
 */
UpdateAppImageConfigRequest::UpdateAppImageConfigRequest()
    : SageMakerRequest(new UpdateAppImageConfigRequestPrivate(SageMakerRequest::UpdateAppImageConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppImageConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppImageConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppImageConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppImageConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigRequestPrivate
 * \brief The UpdateAppImageConfigRequestPrivate class provides private implementation for UpdateAppImageConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateAppImageConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateAppImageConfigRequestPrivate::UpdateAppImageConfigRequestPrivate(
    const SageMakerRequest::Action action, UpdateAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppImageConfigRequest
 * class' copy constructor.
 */
UpdateAppImageConfigRequestPrivate::UpdateAppImageConfigRequestPrivate(
    const UpdateAppImageConfigRequestPrivate &other, UpdateAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
