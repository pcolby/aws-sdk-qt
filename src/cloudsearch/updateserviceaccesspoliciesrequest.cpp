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

#include "updateserviceaccesspoliciesrequest.h"
#include "updateserviceaccesspoliciesrequest_p.h"
#include "updateserviceaccesspoliciesresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  UpdateServiceAccessPoliciesRequest
 *
 * @brief  Implements CloudSearch UpdateServiceAccessPolicies requests.
 *
 * @see    CloudSearchClient::updateServiceAccessPolicies
 */

/**
 * @brief  Constructs a new UpdateServiceAccessPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServiceAccessPoliciesResponse::UpdateServiceAccessPoliciesResponse(

/**
 * @brief  Constructs a new UpdateServiceAccessPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateServiceAccessPoliciesRequest::UpdateServiceAccessPoliciesRequest(const UpdateServiceAccessPoliciesRequest &other)
    : CloudSearchRequest(new UpdateServiceAccessPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateServiceAccessPoliciesRequest object.
 */
UpdateServiceAccessPoliciesRequest::UpdateServiceAccessPoliciesRequest()
    : CloudSearchRequest(new UpdateServiceAccessPoliciesRequestPrivate(CloudSearchRequest::UpdateServiceAccessPoliciesAction, this))
{

}

bool UpdateServiceAccessPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateServiceAccessPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateServiceAccessPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * UpdateServiceAccessPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceAccessPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateServiceAccessPoliciesRequestPrivate
 *
 * @brief  Private implementation for UpdateServiceAccessPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceAccessPoliciesRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public UpdateServiceAccessPoliciesRequest instance.
 */
UpdateServiceAccessPoliciesRequestPrivate::UpdateServiceAccessPoliciesRequestPrivate(
    const CloudSearchRequest::Action action, UpdateServiceAccessPoliciesRequest * const q)
    : UpdateServiceAccessPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceAccessPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceAccessPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateServiceAccessPoliciesRequest instance.
 */
UpdateServiceAccessPoliciesRequestPrivate::UpdateServiceAccessPoliciesRequestPrivate(
    const UpdateServiceAccessPoliciesRequestPrivate &other, UpdateServiceAccessPoliciesRequest * const q)
    : UpdateServiceAccessPoliciesPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
