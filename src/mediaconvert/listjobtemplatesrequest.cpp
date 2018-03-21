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

#include "listjobtemplatesrequest.h"
#include "listjobtemplatesrequest_p.h"
#include "listjobtemplatesresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  ListJobTemplatesRequest
 *
 * @brief  Implements MediaConvert ListJobTemplates requests.
 *
 * @see    MediaConvertClient::listJobTemplates
 */

/**
 * @brief  Constructs a new ListJobTemplatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobTemplatesRequest::ListJobTemplatesRequest(const ListJobTemplatesRequest &other)
    : MediaConvertRequest(new ListJobTemplatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListJobTemplatesRequest object.
 */
ListJobTemplatesRequest::ListJobTemplatesRequest()
    : MediaConvertRequest(new ListJobTemplatesRequestPrivate(MediaConvertRequest::ListJobTemplatesAction, this))
{

}

bool ListJobTemplatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListJobTemplatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobTemplatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * ListJobTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListJobTemplatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListJobTemplatesRequestPrivate
 *
 * @brief  Private implementation for ListJobTemplatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobTemplatesRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public ListJobTemplatesRequest instance.
 */
ListJobTemplatesRequestPrivate::ListJobTemplatesRequestPrivate(
    const MediaConvertRequest::Action action, ListJobTemplatesRequest * const q)
    : ListJobTemplatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListJobTemplatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobTemplatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobTemplatesRequest instance.
 */
ListJobTemplatesRequestPrivate::ListJobTemplatesRequestPrivate(
    const ListJobTemplatesRequestPrivate &other, ListJobTemplatesRequest * const q)
    : ListJobTemplatesPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS
