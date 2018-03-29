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

#include "createsqlinjectionmatchsetrequest.h"
#include "createsqlinjectionmatchsetrequest_p.h"
#include "createsqlinjectionmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  CreateSqlInjectionMatchSetRequest
 *
 * @brief  Implements WAF CreateSqlInjectionMatchSet requests.
 *
 * @see    WAFClient::createSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new CreateSqlInjectionMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSqlInjectionMatchSetRequest::CreateSqlInjectionMatchSetRequest(const CreateSqlInjectionMatchSetRequest &other)
    : WAFRequest(new CreateSqlInjectionMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSqlInjectionMatchSetRequest object.
 */
CreateSqlInjectionMatchSetRequest::CreateSqlInjectionMatchSetRequest()
    : WAFRequest(new CreateSqlInjectionMatchSetRequestPrivate(WAFRequest::CreateSqlInjectionMatchSetAction, this))
{

}

bool CreateSqlInjectionMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSqlInjectionMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSqlInjectionMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * CreateSqlInjectionMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateSqlInjectionMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSqlInjectionMatchSetRequestPrivate
 *
 * @brief  Private implementation for CreateSqlInjectionMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSqlInjectionMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public CreateSqlInjectionMatchSetRequest instance.
 */
CreateSqlInjectionMatchSetRequestPrivate::CreateSqlInjectionMatchSetRequestPrivate(
    const WAFRequest::Action action, CreateSqlInjectionMatchSetRequest * const q)
    : CreateSqlInjectionMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSqlInjectionMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSqlInjectionMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSqlInjectionMatchSetRequest instance.
 */
CreateSqlInjectionMatchSetRequestPrivate::CreateSqlInjectionMatchSetRequestPrivate(
    const CreateSqlInjectionMatchSetRequestPrivate &other, CreateSqlInjectionMatchSetRequest * const q)
    : CreateSqlInjectionMatchSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
