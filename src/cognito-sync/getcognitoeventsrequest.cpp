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

#include "getcognitoeventsrequest.h"
#include "getcognitoeventsrequest_p.h"
#include "getcognitoeventsresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  GetCognitoEventsRequest
 *
 * @brief  Implements CognitoSync GetCognitoEvents requests.
 *
 * @see    CognitoSyncClient::getCognitoEvents
 */

/**
 * @brief  Constructs a new GetCognitoEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCognitoEventsRequest::GetCognitoEventsRequest(const GetCognitoEventsRequest &other)
    : CognitoSyncRequest(new GetCognitoEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCognitoEventsRequest object.
 */
GetCognitoEventsRequest::GetCognitoEventsRequest()
    : CognitoSyncRequest(new GetCognitoEventsRequestPrivate(CognitoSyncRequest::GetCognitoEventsAction, this))
{

}

bool GetCognitoEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCognitoEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCognitoEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * GetCognitoEventsRequest::response(QNetworkReply * const reply) const
{
    return new GetCognitoEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCognitoEventsRequestPrivate
 *
 * @brief  Private implementation for GetCognitoEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCognitoEventsRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public GetCognitoEventsRequest instance.
 */
GetCognitoEventsRequestPrivate::GetCognitoEventsRequestPrivate(
    const CognitoSyncRequest::Action action, GetCognitoEventsRequest * const q)
    : GetCognitoEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCognitoEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCognitoEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCognitoEventsRequest instance.
 */
GetCognitoEventsRequestPrivate::GetCognitoEventsRequestPrivate(
    const GetCognitoEventsRequestPrivate &other, GetCognitoEventsRequest * const q)
    : GetCognitoEventsPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
