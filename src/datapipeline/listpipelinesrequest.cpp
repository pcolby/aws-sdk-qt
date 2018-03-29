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

#include "listpipelinesrequest.h"
#include "listpipelinesrequest_p.h"
#include "listpipelinesresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  ListPipelinesRequest
 *
 * @brief  Implements DataPipeline ListPipelines requests.
 *
 * @see    DataPipelineClient::listPipelines
 */

/**
 * @brief  Constructs a new ListPipelinesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPipelinesRequest::ListPipelinesRequest(const ListPipelinesRequest &other)
    : DataPipelineRequest(new ListPipelinesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPipelinesRequest object.
 */
ListPipelinesRequest::ListPipelinesRequest()
    : DataPipelineRequest(new ListPipelinesRequestPrivate(DataPipelineRequest::ListPipelinesAction, this))
{

}

bool ListPipelinesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPipelinesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPipelinesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelinesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPipelinesRequestPrivate
 *
 * @brief  Private implementation for ListPipelinesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelinesRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public ListPipelinesRequest instance.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const DataPipelineRequest::Action action, ListPipelinesRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelinesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPipelinesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPipelinesRequest instance.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const ListPipelinesRequestPrivate &other, ListPipelinesRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
