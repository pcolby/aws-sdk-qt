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

#include "listpresetsrequest.h"
#include "listpresetsrequest_p.h"
#include "listpresetsresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  ListPresetsRequest
 *
 * @brief  Implements ElasticTranscoder ListPresets requests.
 *
 * @see    ElasticTranscoderClient::listPresets
 */

/**
 * @brief  Constructs a new ListPresetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPresetsRequest::ListPresetsRequest(const ListPresetsRequest &other)
    : ElasticTranscoderRequest(new ListPresetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPresetsRequest object.
 */
ListPresetsRequest::ListPresetsRequest()
    : ElasticTranscoderRequest(new ListPresetsRequestPrivate(ElasticTranscoderRequest::ListPresetsAction, this))
{

}

bool ListPresetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPresetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPresetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * ListPresetsRequest::response(QNetworkReply * const reply) const
{
    return new ListPresetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPresetsRequestPrivate
 *
 * @brief  Private implementation for ListPresetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPresetsRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public ListPresetsRequest instance.
 */
ListPresetsRequestPrivate::ListPresetsRequestPrivate(
    const ElasticTranscoderRequest::Action action, ListPresetsRequest * const q)
    : ListPresetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPresetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPresetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPresetsRequest instance.
 */
ListPresetsRequestPrivate::ListPresetsRequestPrivate(
    const ListPresetsRequestPrivate &other, ListPresetsRequest * const q)
    : ListPresetsPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
