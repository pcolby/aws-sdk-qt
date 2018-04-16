/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stoptrainingjobrequest.h"
#include "stoptrainingjobrequest_p.h"
#include "stoptrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTrainingJobRequest
 *
 * \brief The StopTrainingJobRequest class provides an interface for SageMaker StopTrainingJob requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::stopTrainingJob
 */

/*!
 * @brief  Constructs a new StopTrainingJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopTrainingJobRequest::StopTrainingJobRequest(const StopTrainingJobRequest &other)
    : SageMakerRequest(new StopTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopTrainingJobRequest object.
 */
StopTrainingJobRequest::StopTrainingJobRequest()
    : SageMakerRequest(new StopTrainingJobRequestPrivate(SageMakerRequest::StopTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopTrainingJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopTrainingJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new StopTrainingJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopTrainingJobRequestPrivate
 *
 * @brief  Private implementation for StopTrainingJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopTrainingJobRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public StopTrainingJobRequest instance.
 */
StopTrainingJobRequestPrivate::StopTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, StopTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StopTrainingJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopTrainingJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopTrainingJobRequest instance.
 */
StopTrainingJobRequestPrivate::StopTrainingJobRequestPrivate(
    const StopTrainingJobRequestPrivate &other, StopTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
