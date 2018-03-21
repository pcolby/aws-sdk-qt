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

#include "listkeypoliciesrequest.h"
#include "listkeypoliciesrequest_p.h"
#include "listkeypoliciesresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  ListKeyPoliciesRequest
 *
 * @brief  Implements KMS ListKeyPolicies requests.
 *
 * @see    KMSClient::listKeyPolicies
 */

/**
 * @brief  Constructs a new ListKeyPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListKeyPoliciesResponse::ListKeyPoliciesResponse(

/**
 * @brief  Constructs a new ListKeyPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListKeyPoliciesRequest::ListKeyPoliciesRequest(const ListKeyPoliciesRequest &other)
    : KMSRequest(new ListKeyPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListKeyPoliciesRequest object.
 */
ListKeyPoliciesRequest::ListKeyPoliciesRequest()
    : KMSRequest(new ListKeyPoliciesRequestPrivate(KMSRequest::ListKeyPoliciesAction, this))
{

}

bool ListKeyPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListKeyPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListKeyPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * ListKeyPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListKeyPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListKeyPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListKeyPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListKeyPoliciesRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ListKeyPoliciesRequest instance.
 */
ListKeyPoliciesRequestPrivate::ListKeyPoliciesRequestPrivate(
    const KMSRequest::Action action, ListKeyPoliciesRequest * const q)
    : ListKeyPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListKeyPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListKeyPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListKeyPoliciesRequest instance.
 */
ListKeyPoliciesRequestPrivate::ListKeyPoliciesRequestPrivate(
    const ListKeyPoliciesRequestPrivate &other, ListKeyPoliciesRequest * const q)
    : ListKeyPoliciesPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
