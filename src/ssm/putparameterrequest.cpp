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

#include "putparameterrequest.h"
#include "putparameterrequest_p.h"
#include "putparameterresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  PutParameterRequest
 *
 * @brief  Implements SSM PutParameter requests.
 *
 * @see    SSMClient::putParameter
 */

/**
 * @brief  Constructs a new PutParameterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutParameterResponse::PutParameterResponse(

/**
 * @brief  Constructs a new PutParameterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutParameterRequest::PutParameterRequest(const PutParameterRequest &other)
    : SSMRequest(new PutParameterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutParameterRequest object.
 */
PutParameterRequest::PutParameterRequest()
    : SSMRequest(new PutParameterRequestPrivate(SSMRequest::PutParameterAction, this))
{

}

bool PutParameterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutParameterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutParameterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * PutParameterRequest::response(QNetworkReply * const reply) const
{
    return new PutParameterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutParameterRequestPrivate
 *
 * @brief  Private implementation for PutParameterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutParameterRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public PutParameterRequest instance.
 */
PutParameterRequestPrivate::PutParameterRequestPrivate(
    const SSMRequest::Action action, PutParameterRequest * const q)
    : PutParameterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutParameterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutParameterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutParameterRequest instance.
 */
PutParameterRequestPrivate::PutParameterRequestPrivate(
    const PutParameterRequestPrivate &other, PutParameterRequest * const q)
    : PutParameterPrivate(other, q)
{

}
