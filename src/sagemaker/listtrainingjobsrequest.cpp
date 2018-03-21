/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtrainingjobsrequest.h"
#include "listtrainingjobsrequest_p.h"
#include "listtrainingjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  ListTrainingJobsRequest
 *
 * @brief  Implements SageMaker ListTrainingJobs requests.
 *
 * @see    SageMakerClient::listTrainingJobs
 */

/**
 * @brief  Constructs a new ListTrainingJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrainingJobsResponse::ListTrainingJobsResponse(

/**
 * @brief  Constructs a new ListTrainingJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest(const ListTrainingJobsRequest &other)
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTrainingJobsRequest object.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest()
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(SageMakerRequest::ListTrainingJobsAction, this))
{

}

bool ListTrainingJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTrainingJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrainingJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * ListTrainingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTrainingJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTrainingJobsRequestPrivate
 *
 * @brief  Private implementation for ListTrainingJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrainingJobsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListTrainingJobsRequest instance.
 */
ListTrainingJobsRequestPrivate::ListTrainingJobsRequestPrivate(
    const SageMakerRequest::Action action, ListTrainingJobsRequest * const q)
    : ListTrainingJobsPrivate(action, q)
{

}

/**
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
    : ListTrainingJobsPrivate(other, q)
{

}
