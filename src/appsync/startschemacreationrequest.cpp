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

#include "startschemacreationrequest.h"
#include "startschemacreationrequest_p.h"
#include "startschemacreationresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/**
 * @class  StartSchemaCreationRequest
 *
 * @brief  Implements AppSync StartSchemaCreation requests.
 *
 * @see    AppSyncClient::startSchemaCreation
 */

/**
 * @brief  Constructs a new StartSchemaCreationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartSchemaCreationRequest::StartSchemaCreationRequest(const StartSchemaCreationRequest &other)
    : AppSyncRequest(new StartSchemaCreationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartSchemaCreationRequest object.
 */
StartSchemaCreationRequest::StartSchemaCreationRequest()
    : AppSyncRequest(new StartSchemaCreationRequestPrivate(AppSyncRequest::StartSchemaCreationAction, this))
{

}

bool StartSchemaCreationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartSchemaCreationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartSchemaCreationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * StartSchemaCreationRequest::response(QNetworkReply * const reply) const
{
    return new StartSchemaCreationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartSchemaCreationRequestPrivate
 *
 * @brief  Private implementation for StartSchemaCreationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartSchemaCreationRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public StartSchemaCreationRequest instance.
 */
StartSchemaCreationRequestPrivate::StartSchemaCreationRequestPrivate(
    const AppSyncRequest::Action action, StartSchemaCreationRequest * const q)
    : StartSchemaCreationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartSchemaCreationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartSchemaCreationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartSchemaCreationRequest instance.
 */
StartSchemaCreationRequestPrivate::StartSchemaCreationRequestPrivate(
    const StartSchemaCreationRequestPrivate &other, StartSchemaCreationRequest * const q)
    : StartSchemaCreationPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
