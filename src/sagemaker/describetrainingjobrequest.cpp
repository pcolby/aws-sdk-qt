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

#include "describetrainingjobrequest.h"
#include "describetrainingjobrequest_p.h"
#include "describetrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrainingJobRequest
 *
 * \brief The DescribeTrainingJobRequest class encapsulates SageMaker DescribeTrainingJob requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::describeTrainingJob
 */

/*!
 * @brief  Constructs a new DescribeTrainingJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTrainingJobRequest::DescribeTrainingJobRequest(const DescribeTrainingJobRequest &other)
    : SageMakerRequest(new DescribeTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeTrainingJobRequest object.
 */
DescribeTrainingJobRequest::DescribeTrainingJobRequest()
    : SageMakerRequest(new DescribeTrainingJobRequestPrivate(SageMakerRequest::DescribeTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeTrainingJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTrainingJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrainingJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeTrainingJobRequestPrivate
 *
 * @brief  Private implementation for DescribeTrainingJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTrainingJobRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DescribeTrainingJobRequest instance.
 */
DescribeTrainingJobRequestPrivate::DescribeTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTrainingJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrainingJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTrainingJobRequest instance.
 */
DescribeTrainingJobRequestPrivate::DescribeTrainingJobRequestPrivate(
    const DescribeTrainingJobRequestPrivate &other, DescribeTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
