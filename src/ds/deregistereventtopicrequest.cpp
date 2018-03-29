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

#include "deregistereventtopicrequest.h"
#include "deregistereventtopicrequest_p.h"
#include "deregistereventtopicresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DeregisterEventTopicRequest
 *
 * @brief  Implements DirectoryService DeregisterEventTopic requests.
 *
 * @see    DirectoryServiceClient::deregisterEventTopic
 */

/**
 * @brief  Constructs a new DeregisterEventTopicRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterEventTopicRequest::DeregisterEventTopicRequest(const DeregisterEventTopicRequest &other)
    : DirectoryServiceRequest(new DeregisterEventTopicRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterEventTopicRequest object.
 */
DeregisterEventTopicRequest::DeregisterEventTopicRequest()
    : DirectoryServiceRequest(new DeregisterEventTopicRequestPrivate(DirectoryServiceRequest::DeregisterEventTopicAction, this))
{

}

bool DeregisterEventTopicRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterEventTopicResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterEventTopicResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * DeregisterEventTopicRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterEventTopicResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterEventTopicRequestPrivate
 *
 * @brief  Private implementation for DeregisterEventTopicRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterEventTopicRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DeregisterEventTopicRequest instance.
 */
DeregisterEventTopicRequestPrivate::DeregisterEventTopicRequestPrivate(
    const DirectoryServiceRequest::Action action, DeregisterEventTopicRequest * const q)
    : DeregisterEventTopicPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterEventTopicRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterEventTopicRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterEventTopicRequest instance.
 */
DeregisterEventTopicRequestPrivate::DeregisterEventTopicRequestPrivate(
    const DeregisterEventTopicRequestPrivate &other, DeregisterEventTopicRequest * const q)
    : DeregisterEventTopicPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
