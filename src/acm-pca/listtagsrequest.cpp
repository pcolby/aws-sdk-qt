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

#include "listtagsrequest.h"
#include "listtagsrequest_p.h"
#include "listtagsresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  ListTagsRequest
 *
 * @brief  Implements ACMPCA ListTags requests.
 *
 * @see    ACMPCAClient::listTags
 */

/**
 * @brief  Constructs a new ListTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsRequest::ListTagsRequest(const ListTagsRequest &other)
    : ACMPCARequest(new ListTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsRequest object.
 */
ListTagsRequest::ListTagsRequest()
    : ACMPCARequest(new ListTagsRequestPrivate(ACMPCARequest::ListTagsAction, this))
{

}

bool ListTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsRequestPrivate
 *
 * @brief  Private implementation for ListTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public ListTagsRequest instance.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ACMPCARequest::Action action, ListTagsRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsRequest instance.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ListTagsRequestPrivate &other, ListTagsRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
