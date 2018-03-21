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

#include "updatesqlinjectionmatchsetrequest.h"
#include "updatesqlinjectionmatchsetrequest_p.h"
#include "updatesqlinjectionmatchsetresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  UpdateSqlInjectionMatchSetRequest
 *
 * @brief  Implements WAF UpdateSqlInjectionMatchSet requests.
 *
 * @see    WAFClient::updateSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new UpdateSqlInjectionMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSqlInjectionMatchSetResponse::UpdateSqlInjectionMatchSetResponse(

/**
 * @brief  Constructs a new UpdateSqlInjectionMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSqlInjectionMatchSetRequest::UpdateSqlInjectionMatchSetRequest(const UpdateSqlInjectionMatchSetRequest &other)
    : WAFRequest(new UpdateSqlInjectionMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSqlInjectionMatchSetRequest object.
 */
UpdateSqlInjectionMatchSetRequest::UpdateSqlInjectionMatchSetRequest()
    : WAFRequest(new UpdateSqlInjectionMatchSetRequestPrivate(WAFRequest::UpdateSqlInjectionMatchSetAction, this))
{

}

bool UpdateSqlInjectionMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSqlInjectionMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSqlInjectionMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * UpdateSqlInjectionMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSqlInjectionMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSqlInjectionMatchSetRequestPrivate
 *
 * @brief  Private implementation for UpdateSqlInjectionMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSqlInjectionMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateSqlInjectionMatchSetRequest instance.
 */
UpdateSqlInjectionMatchSetRequestPrivate::UpdateSqlInjectionMatchSetRequestPrivate(
    const WAFRequest::Action action, UpdateSqlInjectionMatchSetRequest * const q)
    : UpdateSqlInjectionMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSqlInjectionMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSqlInjectionMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSqlInjectionMatchSetRequest instance.
 */
UpdateSqlInjectionMatchSetRequestPrivate::UpdateSqlInjectionMatchSetRequestPrivate(
    const UpdateSqlInjectionMatchSetRequestPrivate &other, UpdateSqlInjectionMatchSetRequest * const q)
    : UpdateSqlInjectionMatchSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
