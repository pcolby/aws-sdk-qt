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

#include "listjobsbystatusrequest.h"
#include "listjobsbystatusrequest_p.h"
#include "listjobsbystatusresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  ListJobsByStatusRequest
 *
 * @brief  Implements ElasticTranscoder ListJobsByStatus requests.
 *
 * @see    ElasticTranscoderClient::listJobsByStatus
 */

/**
 * @brief  Constructs a new ListJobsByStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobsByStatusRequest::ListJobsByStatusRequest(const ListJobsByStatusRequest &other)
    : ElasticTranscoderRequest(new ListJobsByStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListJobsByStatusRequest object.
 */
ListJobsByStatusRequest::ListJobsByStatusRequest()
    : ElasticTranscoderRequest(new ListJobsByStatusRequestPrivate(ElasticTranscoderRequest::ListJobsByStatusAction, this))
{

}

bool ListJobsByStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListJobsByStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobsByStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * ListJobsByStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsByStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListJobsByStatusRequestPrivate
 *
 * @brief  Private implementation for ListJobsByStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsByStatusRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public ListJobsByStatusRequest instance.
 */
ListJobsByStatusRequestPrivate::ListJobsByStatusRequestPrivate(
    const ElasticTranscoderRequest::Action action, ListJobsByStatusRequest * const q)
    : ListJobsByStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsByStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobsByStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobsByStatusRequest instance.
 */
ListJobsByStatusRequestPrivate::ListJobsByStatusRequestPrivate(
    const ListJobsByStatusRequestPrivate &other, ListJobsByStatusRequest * const q)
    : ListJobsByStatusPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
