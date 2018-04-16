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

#include "listtrainingjobsrequest.h"
#include "listtrainingjobsrequest_p.h"
#include "listtrainingjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsRequest
 *
 * \brief The ListTrainingJobsRequest class encapsulates SageMaker ListTrainingJobs requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::listTrainingJobs
 */

/*!
 * @brief  Constructs a new ListTrainingJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest(const ListTrainingJobsRequest &other)
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTrainingJobsRequest object.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest()
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(SageMakerRequest::ListTrainingJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrainingJobsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTrainingJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrainingJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrainingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTrainingJobsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTrainingJobsRequestPrivate
 *
 * @brief  Private implementation for ListTrainingJobsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrainingJobsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListTrainingJobsRequest instance.
 */
ListTrainingJobsRequestPrivate::ListTrainingJobsRequestPrivate(
    const SageMakerRequest::Action action, ListTrainingJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrainingJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTrainingJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTrainingJobsRequest instance.
 */
ListTrainingJobsRequestPrivate::ListTrainingJobsRequestPrivate(
    const ListTrainingJobsRequestPrivate &other, ListTrainingJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
