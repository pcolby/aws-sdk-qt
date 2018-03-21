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

#include "listsecurityconfigurationsrequest.h"
#include "listsecurityconfigurationsrequest_p.h"
#include "listsecurityconfigurationsresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  ListSecurityConfigurationsRequest
 *
 * @brief  Implements EMR ListSecurityConfigurations requests.
 *
 * @see    EMRClient::listSecurityConfigurations
 */

/**
 * @brief  Constructs a new ListSecurityConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSecurityConfigurationsRequest::ListSecurityConfigurationsRequest(const ListSecurityConfigurationsRequest &other)
    : EMRRequest(new ListSecurityConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSecurityConfigurationsRequest object.
 */
ListSecurityConfigurationsRequest::ListSecurityConfigurationsRequest()
    : EMRRequest(new ListSecurityConfigurationsRequestPrivate(EMRRequest::ListSecurityConfigurationsAction, this))
{

}

bool ListSecurityConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSecurityConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSecurityConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * ListSecurityConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSecurityConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSecurityConfigurationsRequestPrivate
 *
 * @brief  Private implementation for ListSecurityConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSecurityConfigurationsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListSecurityConfigurationsRequest instance.
 */
ListSecurityConfigurationsRequestPrivate::ListSecurityConfigurationsRequestPrivate(
    const EMRRequest::Action action, ListSecurityConfigurationsRequest * const q)
    : ListSecurityConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSecurityConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSecurityConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSecurityConfigurationsRequest instance.
 */
ListSecurityConfigurationsRequestPrivate::ListSecurityConfigurationsRequestPrivate(
    const ListSecurityConfigurationsRequestPrivate &other, ListSecurityConfigurationsRequest * const q)
    : ListSecurityConfigurationsPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS
