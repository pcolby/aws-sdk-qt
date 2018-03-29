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

#include "listexportsrequest.h"
#include "listexportsrequest_p.h"
#include "listexportsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListExportsRequest
 *
 * @brief  Implements CloudFormation ListExports requests.
 *
 * @see    CloudFormationClient::listExports
 */

/**
 * @brief  Constructs a new ListExportsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListExportsRequest::ListExportsRequest(const ListExportsRequest &other)
    : CloudFormationRequest(new ListExportsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListExportsRequest object.
 */
ListExportsRequest::ListExportsRequest()
    : CloudFormationRequest(new ListExportsRequestPrivate(CloudFormationRequest::ListExportsAction, this))
{

}

bool ListExportsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListExportsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListExportsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * ListExportsRequest::response(QNetworkReply * const reply) const
{
    return new ListExportsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListExportsRequestPrivate
 *
 * @brief  Private implementation for ListExportsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListExportsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListExportsRequest instance.
 */
ListExportsRequestPrivate::ListExportsRequestPrivate(
    const CloudFormationRequest::Action action, ListExportsRequest * const q)
    : ListExportsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListExportsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListExportsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListExportsRequest instance.
 */
ListExportsRequestPrivate::ListExportsRequestPrivate(
    const ListExportsRequestPrivate &other, ListExportsRequest * const q)
    : ListExportsPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
