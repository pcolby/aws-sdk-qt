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

#include "listcoredefinitionsrequest.h"
#include "listcoredefinitionsrequest_p.h"
#include "listcoredefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListCoreDefinitionsRequest
 *
 * @brief  Implements Greengrass ListCoreDefinitions requests.
 *
 * @see    GreengrassClient::listCoreDefinitions
 */

/**
 * @brief  Constructs a new ListCoreDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCoreDefinitionsRequest::ListCoreDefinitionsRequest(const ListCoreDefinitionsRequest &other)
    : GreengrassRequest(new ListCoreDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCoreDefinitionsRequest object.
 */
ListCoreDefinitionsRequest::ListCoreDefinitionsRequest()
    : GreengrassRequest(new ListCoreDefinitionsRequestPrivate(GreengrassRequest::ListCoreDefinitionsAction, this))
{

}

bool ListCoreDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCoreDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCoreDefinitionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoreDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCoreDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCoreDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListCoreDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCoreDefinitionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListCoreDefinitionsRequest instance.
 */
ListCoreDefinitionsRequestPrivate::ListCoreDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListCoreDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCoreDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCoreDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCoreDefinitionsRequest instance.
 */
ListCoreDefinitionsRequestPrivate::ListCoreDefinitionsRequestPrivate(
    const ListCoreDefinitionsRequestPrivate &other, ListCoreDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
