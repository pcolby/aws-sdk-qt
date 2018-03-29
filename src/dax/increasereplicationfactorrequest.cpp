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

#include "increasereplicationfactorrequest.h"
#include "increasereplicationfactorrequest_p.h"
#include "increasereplicationfactorresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/**
 * @class  IncreaseReplicationFactorRequest
 *
 * @brief  Implements DAX IncreaseReplicationFactor requests.
 *
 * @see    DAXClient::increaseReplicationFactor
 */

/**
 * @brief  Constructs a new IncreaseReplicationFactorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
IncreaseReplicationFactorRequest::IncreaseReplicationFactorRequest(const IncreaseReplicationFactorRequest &other)
    : DAXRequest(new IncreaseReplicationFactorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new IncreaseReplicationFactorRequest object.
 */
IncreaseReplicationFactorRequest::IncreaseReplicationFactorRequest()
    : DAXRequest(new IncreaseReplicationFactorRequestPrivate(DAXRequest::IncreaseReplicationFactorAction, this))
{

}

bool IncreaseReplicationFactorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an IncreaseReplicationFactorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An IncreaseReplicationFactorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * IncreaseReplicationFactorRequest::response(QNetworkReply * const reply) const
{
    return new IncreaseReplicationFactorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  IncreaseReplicationFactorRequestPrivate
 *
 * @brief  Private implementation for IncreaseReplicationFactorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IncreaseReplicationFactorRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public IncreaseReplicationFactorRequest instance.
 */
IncreaseReplicationFactorRequestPrivate::IncreaseReplicationFactorRequestPrivate(
    const DAXRequest::Action action, IncreaseReplicationFactorRequest * const q)
    : IncreaseReplicationFactorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new IncreaseReplicationFactorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the IncreaseReplicationFactorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public IncreaseReplicationFactorRequest instance.
 */
IncreaseReplicationFactorRequestPrivate::IncreaseReplicationFactorRequestPrivate(
    const IncreaseReplicationFactorRequestPrivate &other, IncreaseReplicationFactorRequest * const q)
    : IncreaseReplicationFactorPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
