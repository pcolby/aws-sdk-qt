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

#include "listdevicedefinitionsrequest.h"
#include "listdevicedefinitionsrequest_p.h"
#include "listdevicedefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListDeviceDefinitionsRequest
 *
 * @brief  Implements Greengrass ListDeviceDefinitions requests.
 *
 * @see    GreengrassClient::listDeviceDefinitions
 */

/**
 * @brief  Constructs a new ListDeviceDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeviceDefinitionsRequest::ListDeviceDefinitionsRequest(const ListDeviceDefinitionsRequest &other)
    : GreengrassRequest(new ListDeviceDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeviceDefinitionsRequest object.
 */
ListDeviceDefinitionsRequest::ListDeviceDefinitionsRequest()
    : GreengrassRequest(new ListDeviceDefinitionsRequestPrivate(GreengrassRequest::ListDeviceDefinitionsAction, this))
{

}

bool ListDeviceDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeviceDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeviceDefinitionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeviceDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListDeviceDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceDefinitionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListDeviceDefinitionsRequest instance.
 */
ListDeviceDefinitionsRequestPrivate::ListDeviceDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListDeviceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeviceDefinitionsRequest instance.
 */
ListDeviceDefinitionsRequestPrivate::ListDeviceDefinitionsRequestPrivate(
    const ListDeviceDefinitionsRequestPrivate &other, ListDeviceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
