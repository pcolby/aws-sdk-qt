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

#include "queryobjectsrequest.h"
#include "queryobjectsrequest_p.h"
#include "queryobjectsresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  QueryObjectsRequest
 *
 * @brief  Implements DataPipeline QueryObjects requests.
 *
 * @see    DataPipelineClient::queryObjects
 */

/**
 * @brief  Constructs a new QueryObjectsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
QueryObjectsRequest::QueryObjectsRequest(const QueryObjectsRequest &other)
    : DataPipelineRequest(new QueryObjectsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new QueryObjectsRequest object.
 */
QueryObjectsRequest::QueryObjectsRequest()
    : DataPipelineRequest(new QueryObjectsRequestPrivate(DataPipelineRequest::QueryObjectsAction, this))
{

}

bool QueryObjectsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an QueryObjectsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An QueryObjectsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryObjectsRequest::response(QNetworkReply * const reply) const
{
    return new QueryObjectsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  QueryObjectsRequestPrivate
 *
 * @brief  Private implementation for QueryObjectsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new QueryObjectsRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public QueryObjectsRequest instance.
 */
QueryObjectsRequestPrivate::QueryObjectsRequestPrivate(
    const DataPipelineRequest::Action action, QueryObjectsRequest * const q)
    : QueryObjectsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new QueryObjectsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the QueryObjectsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public QueryObjectsRequest instance.
 */
QueryObjectsRequestPrivate::QueryObjectsRequestPrivate(
    const QueryObjectsRequestPrivate &other, QueryObjectsRequest * const q)
    : QueryObjectsPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
