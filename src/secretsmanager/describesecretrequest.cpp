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

#include "describesecretrequest.h"
#include "describesecretrequest_p.h"
#include "describesecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  DescribeSecretRequest
 *
 * @brief  Implements SecretsManager DescribeSecret requests.
 *
 * @see    SecretsManagerClient::describeSecret
 */

/**
 * @brief  Constructs a new DescribeSecretRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSecretRequest::DescribeSecretRequest(const DescribeSecretRequest &other)
    : SecretsManagerRequest(new DescribeSecretRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSecretRequest object.
 */
DescribeSecretRequest::DescribeSecretRequest()
    : SecretsManagerRequest(new DescribeSecretRequestPrivate(SecretsManagerRequest::DescribeSecretAction, this))
{

}

bool DescribeSecretRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSecretResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSecretResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSecretRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSecretResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSecretRequestPrivate
 *
 * @brief  Private implementation for DescribeSecretRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecretRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public DescribeSecretRequest instance.
 */
DescribeSecretRequestPrivate::DescribeSecretRequestPrivate(
    const SecretsManagerRequest::Action action, DescribeSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecretRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSecretRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSecretRequest instance.
 */
DescribeSecretRequestPrivate::DescribeSecretRequestPrivate(
    const DescribeSecretRequestPrivate &other, DescribeSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
