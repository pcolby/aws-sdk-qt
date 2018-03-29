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

#include "creategrantrequest.h"
#include "creategrantrequest_p.h"
#include "creategrantresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  CreateGrantRequest
 *
 * @brief  Implements KMS CreateGrant requests.
 *
 * @see    KMSClient::createGrant
 */

/**
 * @brief  Constructs a new CreateGrantRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGrantRequest::CreateGrantRequest(const CreateGrantRequest &other)
    : KMSRequest(new CreateGrantRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGrantRequest object.
 */
CreateGrantRequest::CreateGrantRequest()
    : KMSRequest(new CreateGrantRequestPrivate(KMSRequest::CreateGrantAction, this))
{

}

bool CreateGrantRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGrantResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGrantResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGrantRequest::response(QNetworkReply * const reply) const
{
    return new CreateGrantResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGrantRequestPrivate
 *
 * @brief  Private implementation for CreateGrantRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGrantRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public CreateGrantRequest instance.
 */
CreateGrantRequestPrivate::CreateGrantRequestPrivate(
    const KMSRequest::Action action, CreateGrantRequest * const q)
    : KMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGrantRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGrantRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGrantRequest instance.
 */
CreateGrantRequestPrivate::CreateGrantRequestPrivate(
    const CreateGrantRequestPrivate &other, CreateGrantRequest * const q)
    : KMSRequestPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
