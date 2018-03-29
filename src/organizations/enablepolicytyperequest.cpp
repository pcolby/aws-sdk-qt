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

#include "enablepolicytyperequest.h"
#include "enablepolicytyperequest_p.h"
#include "enablepolicytyperesponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  EnablePolicyTypeRequest
 *
 * @brief  Implements Organizations EnablePolicyType requests.
 *
 * @see    OrganizationsClient::enablePolicyType
 */

/**
 * @brief  Constructs a new EnablePolicyTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnablePolicyTypeRequest::EnablePolicyTypeRequest(const EnablePolicyTypeRequest &other)
    : OrganizationsRequest(new EnablePolicyTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnablePolicyTypeRequest object.
 */
EnablePolicyTypeRequest::EnablePolicyTypeRequest()
    : OrganizationsRequest(new EnablePolicyTypeRequestPrivate(OrganizationsRequest::EnablePolicyTypeAction, this))
{

}

bool EnablePolicyTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnablePolicyTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnablePolicyTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * EnablePolicyTypeRequest::response(QNetworkReply * const reply) const
{
    return new EnablePolicyTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnablePolicyTypeRequestPrivate
 *
 * @brief  Private implementation for EnablePolicyTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnablePolicyTypeRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public EnablePolicyTypeRequest instance.
 */
EnablePolicyTypeRequestPrivate::EnablePolicyTypeRequestPrivate(
    const OrganizationsRequest::Action action, EnablePolicyTypeRequest * const q)
    : EnablePolicyTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnablePolicyTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnablePolicyTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnablePolicyTypeRequest instance.
 */
EnablePolicyTypeRequestPrivate::EnablePolicyTypeRequestPrivate(
    const EnablePolicyTypeRequestPrivate &other, EnablePolicyTypeRequest * const q)
    : EnablePolicyTypePrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
