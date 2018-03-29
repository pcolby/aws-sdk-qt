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

#include "getchangerequest.h"
#include "getchangerequest_p.h"
#include "getchangeresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetChangeRequest
 *
 * @brief  Implements Route53 GetChange requests.
 *
 * @see    Route53Client::getChange
 */

/**
 * @brief  Constructs a new GetChangeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetChangeRequest::GetChangeRequest(const GetChangeRequest &other)
    : Route53Request(new GetChangeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetChangeRequest object.
 */
GetChangeRequest::GetChangeRequest()
    : Route53Request(new GetChangeRequestPrivate(Route53Request::GetChangeAction, this))
{

}

bool GetChangeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetChangeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetChangeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetChangeRequest::response(QNetworkReply * const reply) const
{
    return new GetChangeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetChangeRequestPrivate
 *
 * @brief  Private implementation for GetChangeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetChangeRequest instance.
 */
GetChangeRequestPrivate::GetChangeRequestPrivate(
    const Route53Request::Action action, GetChangeRequest * const q)
    : GetChangePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetChangeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetChangeRequest instance.
 */
GetChangeRequestPrivate::GetChangeRequestPrivate(
    const GetChangeRequestPrivate &other, GetChangeRequest * const q)
    : GetChangePrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
