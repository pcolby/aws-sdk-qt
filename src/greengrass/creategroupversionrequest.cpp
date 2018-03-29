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

#include "creategroupversionrequest.h"
#include "creategroupversionrequest_p.h"
#include "creategroupversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateGroupVersionRequest
 *
 * @brief  Implements Greengrass CreateGroupVersion requests.
 *
 * @see    GreengrassClient::createGroupVersion
 */

/**
 * @brief  Constructs a new CreateGroupVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGroupVersionRequest::CreateGroupVersionRequest(const CreateGroupVersionRequest &other)
    : GreengrassRequest(new CreateGroupVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGroupVersionRequest object.
 */
CreateGroupVersionRequest::CreateGroupVersionRequest()
    : GreengrassRequest(new CreateGroupVersionRequestPrivate(GreengrassRequest::CreateGroupVersionAction, this))
{

}

bool CreateGroupVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGroupVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGroupVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGroupVersionRequestPrivate
 *
 * @brief  Private implementation for CreateGroupVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateGroupVersionRequest instance.
 */
CreateGroupVersionRequestPrivate::CreateGroupVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateGroupVersionRequest * const q)
    : CreateGroupVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGroupVersionRequest instance.
 */
CreateGroupVersionRequestPrivate::CreateGroupVersionRequestPrivate(
    const CreateGroupVersionRequestPrivate &other, CreateGroupVersionRequest * const q)
    : CreateGroupVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
