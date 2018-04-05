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

#include "getrandompasswordrequest.h"
#include "getrandompasswordrequest_p.h"
#include "getrandompasswordresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  GetRandomPasswordRequest
 *
 * @brief  Implements SecretsManager GetRandomPassword requests.
 *
 * @see    SecretsManagerClient::getRandomPassword
 */

/**
 * @brief  Constructs a new GetRandomPasswordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRandomPasswordRequest::GetRandomPasswordRequest(const GetRandomPasswordRequest &other)
    : SecretsManagerRequest(new GetRandomPasswordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRandomPasswordRequest object.
 */
GetRandomPasswordRequest::GetRandomPasswordRequest()
    : SecretsManagerRequest(new GetRandomPasswordRequestPrivate(SecretsManagerRequest::GetRandomPasswordAction, this))
{

}

bool GetRandomPasswordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRandomPasswordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRandomPasswordResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRandomPasswordRequest::response(QNetworkReply * const reply) const
{
    return new GetRandomPasswordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRandomPasswordRequestPrivate
 *
 * @brief  Private implementation for GetRandomPasswordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRandomPasswordRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public GetRandomPasswordRequest instance.
 */
GetRandomPasswordRequestPrivate::GetRandomPasswordRequestPrivate(
    const SecretsManagerRequest::Action action, GetRandomPasswordRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRandomPasswordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRandomPasswordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRandomPasswordRequest instance.
 */
GetRandomPasswordRequestPrivate::GetRandomPasswordRequestPrivate(
    const GetRandomPasswordRequestPrivate &other, GetRandomPasswordRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
