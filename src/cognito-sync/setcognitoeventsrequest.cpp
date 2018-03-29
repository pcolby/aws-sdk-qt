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

#include "setcognitoeventsrequest.h"
#include "setcognitoeventsrequest_p.h"
#include "setcognitoeventsresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  SetCognitoEventsRequest
 *
 * @brief  Implements CognitoSync SetCognitoEvents requests.
 *
 * @see    CognitoSyncClient::setCognitoEvents
 */

/**
 * @brief  Constructs a new SetCognitoEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetCognitoEventsRequest::SetCognitoEventsRequest(const SetCognitoEventsRequest &other)
    : CognitoSyncRequest(new SetCognitoEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetCognitoEventsRequest object.
 */
SetCognitoEventsRequest::SetCognitoEventsRequest()
    : CognitoSyncRequest(new SetCognitoEventsRequestPrivate(CognitoSyncRequest::SetCognitoEventsAction, this))
{

}

bool SetCognitoEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetCognitoEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetCognitoEventsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * SetCognitoEventsRequest::response(QNetworkReply * const reply) const
{
    return new SetCognitoEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetCognitoEventsRequestPrivate
 *
 * @brief  Private implementation for SetCognitoEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetCognitoEventsRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public SetCognitoEventsRequest instance.
 */
SetCognitoEventsRequestPrivate::SetCognitoEventsRequestPrivate(
    const CognitoSyncRequest::Action action, SetCognitoEventsRequest * const q)
    : SetCognitoEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetCognitoEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetCognitoEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetCognitoEventsRequest instance.
 */
SetCognitoEventsRequestPrivate::SetCognitoEventsRequestPrivate(
    const SetCognitoEventsRequestPrivate &other, SetCognitoEventsRequest * const q)
    : SetCognitoEventsPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
