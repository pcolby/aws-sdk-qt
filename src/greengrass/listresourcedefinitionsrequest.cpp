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

#include "listresourcedefinitionsrequest.h"
#include "listresourcedefinitionsrequest_p.h"
#include "listresourcedefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListResourceDefinitionsRequest
 *
 * @brief  Implements Greengrass ListResourceDefinitions requests.
 *
 * @see    GreengrassClient::listResourceDefinitions
 */

/**
 * @brief  Constructs a new ListResourceDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourceDefinitionsRequest::ListResourceDefinitionsRequest(const ListResourceDefinitionsRequest &other)
    : GreengrassRequest(new ListResourceDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourceDefinitionsRequest object.
 */
ListResourceDefinitionsRequest::ListResourceDefinitionsRequest()
    : GreengrassRequest(new ListResourceDefinitionsRequestPrivate(GreengrassRequest::ListResourceDefinitionsAction, this))
{

}

bool ListResourceDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourceDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourceDefinitionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourceDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListResourceDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDefinitionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListResourceDefinitionsRequest instance.
 */
ListResourceDefinitionsRequestPrivate::ListResourceDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListResourceDefinitionsRequest * const q)
    : ListResourceDefinitionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourceDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourceDefinitionsRequest instance.
 */
ListResourceDefinitionsRequestPrivate::ListResourceDefinitionsRequestPrivate(
    const ListResourceDefinitionsRequestPrivate &other, ListResourceDefinitionsRequest * const q)
    : ListResourceDefinitionsPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
