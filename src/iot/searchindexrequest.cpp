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

#include "searchindexrequest.h"
#include "searchindexrequest_p.h"
#include "searchindexresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  SearchIndexRequest
 *
 * @brief  Implements IoT SearchIndex requests.
 *
 * @see    IoTClient::searchIndex
 */

/**
 * @brief  Constructs a new SearchIndexRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchIndexRequest::SearchIndexRequest(const SearchIndexRequest &other)
    : IoTRequest(new SearchIndexRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchIndexRequest object.
 */
SearchIndexRequest::SearchIndexRequest()
    : IoTRequest(new SearchIndexRequestPrivate(IoTRequest::SearchIndexAction, this))
{

}

bool SearchIndexRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchIndexResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchIndexResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchIndexRequest::response(QNetworkReply * const reply) const
{
    return new SearchIndexResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchIndexRequestPrivate
 *
 * @brief  Private implementation for SearchIndexRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchIndexRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public SearchIndexRequest instance.
 */
SearchIndexRequestPrivate::SearchIndexRequestPrivate(
    const IoTRequest::Action action, SearchIndexRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchIndexRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchIndexRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchIndexRequest instance.
 */
SearchIndexRequestPrivate::SearchIndexRequestPrivate(
    const SearchIndexRequestPrivate &other, SearchIndexRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
