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

#include "listjobsrequest.h"
#include "listjobsrequest_p.h"
#include "listjobsresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  ListJobsRequest
 *
 * @brief  Implements Glacier ListJobs requests.
 *
 * @see    GlacierClient::listJobs
 */

/**
 * @brief  Constructs a new ListJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobsRequest::ListJobsRequest(const ListJobsRequest &other)
    : GlacierRequest(new ListJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListJobsRequest object.
 */
ListJobsRequest::ListJobsRequest()
    : GlacierRequest(new ListJobsRequestPrivate(GlacierRequest::ListJobsAction, this))
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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsRequest::response(QNetworkReply * const reply) const
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
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public ListJobsRequest instance.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const GlacierRequest::Action action, ListJobsRequest * const q)
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

} // namespace Glacier
} // namespace QtAws
