/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rebootinstancerequest.h"
#include "rebootinstancerequest_p.h"
#include "rebootinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  RebootInstanceRequest
 *
 * @brief  Implements OpsWorks RebootInstance requests.
 *
 * @see    OpsWorksClient::rebootInstance
 */

/**
 * @brief  Constructs a new RebootInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootInstanceRequest::RebootInstanceRequest(const RebootInstanceRequest &other)
    : OpsWorksRequest(new RebootInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootInstanceRequest object.
 */
RebootInstanceRequest::RebootInstanceRequest()
    : OpsWorksRequest(new RebootInstanceRequestPrivate(OpsWorksRequest::RebootInstanceAction, this))
{

}

bool RebootInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * RebootInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RebootInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootInstanceRequestPrivate
 *
 * @brief  Private implementation for RebootInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public RebootInstanceRequest instance.
 */
RebootInstanceRequestPrivate::RebootInstanceRequestPrivate(
    const OpsWorksRequest::Action action, RebootInstanceRequest * const q)
    : RebootInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootInstanceRequest instance.
 */
RebootInstanceRequestPrivate::RebootInstanceRequestPrivate(
    const RebootInstanceRequestPrivate &other, RebootInstanceRequest * const q)
    : RebootInstancePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
