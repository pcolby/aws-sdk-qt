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

#include "createaddressrequest.h"
#include "createaddressrequest_p.h"
#include "createaddressresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/**
 * @class  CreateAddressRequest
 *
 * @brief  Implements Snowball CreateAddress requests.
 *
 * @see    SnowballClient::createAddress
 */

/**
 * @brief  Constructs a new CreateAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAddressRequest::CreateAddressRequest(const CreateAddressRequest &other)
    : SnowballRequest(new CreateAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAddressRequest object.
 */
CreateAddressRequest::CreateAddressRequest()
    : SnowballRequest(new CreateAddressRequestPrivate(SnowballRequest::CreateAddressAction, this))
{

}

bool CreateAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * CreateAddressRequest::response(QNetworkReply * const reply) const
{
    return new CreateAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAddressRequestPrivate
 *
 * @brief  Private implementation for CreateAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAddressRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public CreateAddressRequest instance.
 */
CreateAddressRequestPrivate::CreateAddressRequestPrivate(
    const SnowballRequest::Action action, CreateAddressRequest * const q)
    : CreateAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAddressRequest instance.
 */
CreateAddressRequestPrivate::CreateAddressRequestPrivate(
    const CreateAddressRequestPrivate &other, CreateAddressRequest * const q)
    : CreateAddressPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
