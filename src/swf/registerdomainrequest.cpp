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

#include "registerdomainrequest.h"
#include "registerdomainrequest_p.h"
#include "registerdomainresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RegisterDomainRequest
 *
 * @brief  Implements SWF RegisterDomain requests.
 *
 * @see    SWFClient::registerDomain
 */

/**
 * @brief  Constructs a new RegisterDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterDomainResponse::RegisterDomainResponse(

/**
 * @brief  Constructs a new RegisterDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterDomainRequest::RegisterDomainRequest(const RegisterDomainRequest &other)
    : SWFRequest(new RegisterDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterDomainRequest object.
 */
RegisterDomainRequest::RegisterDomainRequest()
    : SWFRequest(new RegisterDomainRequestPrivate(SWFRequest::RegisterDomainAction, this))
{

}

bool RegisterDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RegisterDomainRequest::response(QNetworkReply * const reply) const
{
    return new RegisterDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterDomainRequestPrivate
 *
 * @brief  Private implementation for RegisterDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDomainRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RegisterDomainRequest instance.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const SWFRequest::Action action, RegisterDomainRequest * const q)
    : RegisterDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterDomainRequest instance.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const RegisterDomainRequestPrivate &other, RegisterDomainRequest * const q)
    : RegisterDomainPrivate(other, q)
{

}
