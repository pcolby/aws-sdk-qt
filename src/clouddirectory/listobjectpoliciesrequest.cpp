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

#include "listobjectpoliciesrequest.h"
#include "listobjectpoliciesrequest_p.h"
#include "listobjectpoliciesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListObjectPoliciesRequest
 *
 * @brief  Implements CloudDirectory ListObjectPolicies requests.
 *
 * @see    CloudDirectoryClient::listObjectPolicies
 */

/**
 * @brief  Constructs a new ListObjectPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectPoliciesRequest::ListObjectPoliciesRequest(const ListObjectPoliciesRequest &other)
    : CloudDirectoryRequest(new ListObjectPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListObjectPoliciesRequest object.
 */
ListObjectPoliciesRequest::ListObjectPoliciesRequest()
    : CloudDirectoryRequest(new ListObjectPoliciesRequestPrivate(CloudDirectoryRequest::ListObjectPoliciesAction, this))
{

}

bool ListObjectPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListObjectPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListObjectPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListObjectPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListObjectPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectPoliciesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListObjectPoliciesRequest instance.
 */
ListObjectPoliciesRequestPrivate::ListObjectPoliciesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectPoliciesRequest * const q)
    : ListObjectPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectPoliciesRequest instance.
 */
ListObjectPoliciesRequestPrivate::ListObjectPoliciesRequestPrivate(
    const ListObjectPoliciesRequestPrivate &other, ListObjectPoliciesRequest * const q)
    : ListObjectPoliciesPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
