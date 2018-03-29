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

#include "changeresourcerecordsetsrequest.h"
#include "changeresourcerecordsetsrequest_p.h"
#include "changeresourcerecordsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  ChangeResourceRecordSetsRequest
 *
 * @brief  Implements Route53 ChangeResourceRecordSets requests.
 *
 * @see    Route53Client::changeResourceRecordSets
 */

/**
 * @brief  Constructs a new ChangeResourceRecordSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ChangeResourceRecordSetsRequest::ChangeResourceRecordSetsRequest(const ChangeResourceRecordSetsRequest &other)
    : Route53Request(new ChangeResourceRecordSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ChangeResourceRecordSetsRequest object.
 */
ChangeResourceRecordSetsRequest::ChangeResourceRecordSetsRequest()
    : Route53Request(new ChangeResourceRecordSetsRequestPrivate(Route53Request::ChangeResourceRecordSetsAction, this))
{

}

bool ChangeResourceRecordSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ChangeResourceRecordSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ChangeResourceRecordSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * ChangeResourceRecordSetsRequest::response(QNetworkReply * const reply) const
{
    return new ChangeResourceRecordSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ChangeResourceRecordSetsRequestPrivate
 *
 * @brief  Private implementation for ChangeResourceRecordSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangeResourceRecordSetsRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ChangeResourceRecordSetsRequest instance.
 */
ChangeResourceRecordSetsRequestPrivate::ChangeResourceRecordSetsRequestPrivate(
    const Route53Request::Action action, ChangeResourceRecordSetsRequest * const q)
    : ChangeResourceRecordSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ChangeResourceRecordSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ChangeResourceRecordSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ChangeResourceRecordSetsRequest instance.
 */
ChangeResourceRecordSetsRequestPrivate::ChangeResourceRecordSetsRequestPrivate(
    const ChangeResourceRecordSetsRequestPrivate &other, ChangeResourceRecordSetsRequest * const q)
    : ChangeResourceRecordSetsPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
