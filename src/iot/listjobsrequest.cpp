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

#include "listjobsrequest.h"
#include "listjobsrequest_p.h"
#include "listjobsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListJobsRequest
 *
 * @brief  Implements IoT ListJobs requests.
 *
 * @see    IoTClient::listJobs
 */

/**
 * @brief  Constructs a new ListJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobsResponse::ListJobsResponse(

/**
 * @brief  Constructs a new ListJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobsRequest::ListJobsRequest(const ListJobsRequest &other)
    : IoTRequest(new ListJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListJobsRequest object.
 */
ListJobsRequest::ListJobsRequest()
    : IoTRequest(new ListJobsRequestPrivate(IoTRequest::ListJobsAction, this))
{

}

bool ListJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListJobsRequestPrivate
 *
 * @brief  Private implementation for ListJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListJobsRequest instance.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const IoTRequest::Action action, ListJobsRequest * const q)
    : ListJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobsRequest instance.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const ListJobsRequestPrivate &other, ListJobsRequest * const q)
    : ListJobsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
