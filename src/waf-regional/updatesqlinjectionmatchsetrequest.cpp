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

#include "updatesqlinjectionmatchsetrequest.h"
#include "updatesqlinjectionmatchsetrequest_p.h"
#include "updatesqlinjectionmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateSqlInjectionMatchSetRequest
 *
 * @brief  Implements WAFRegional UpdateSqlInjectionMatchSet requests.
 *
 * @see    WAFRegionalClient::updateSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new UpdateSqlInjectionMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSqlInjectionMatchSetRequest::UpdateSqlInjectionMatchSetRequest(const UpdateSqlInjectionMatchSetRequest &other)
    : WAFRegionalRequest(new UpdateSqlInjectionMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSqlInjectionMatchSetRequest object.
 */
UpdateSqlInjectionMatchSetRequest::UpdateSqlInjectionMatchSetRequest()
    : WAFRegionalRequest(new UpdateSqlInjectionMatchSetRequestPrivate(WAFRegionalRequest::UpdateSqlInjectionMatchSetAction, this))
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
 * @see  WAFRegionalClient::send
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateSqlInjectionMatchSetRequest instance.
 */
UpdateSqlInjectionMatchSetRequestPrivate::UpdateSqlInjectionMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateSqlInjectionMatchSetRequest * const q)
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

} // namespace WAFRegional
} // namespace AWS
