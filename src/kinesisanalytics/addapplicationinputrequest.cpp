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

#include "addapplicationinputrequest.h"
#include "addapplicationinputrequest_p.h"
#include "addapplicationinputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationInputRequest
 *
 * @brief  Implements KinesisAnalytics AddApplicationInput requests.
 *
 * @see    KinesisAnalyticsClient::addApplicationInput
 */

/**
 * @brief  Constructs a new AddApplicationInputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddApplicationInputRequest::AddApplicationInputRequest(const AddApplicationInputRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationInputRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddApplicationInputRequest object.
 */
AddApplicationInputRequest::AddApplicationInputRequest()
    : KinesisAnalyticsRequest(new AddApplicationInputRequestPrivate(KinesisAnalyticsRequest::AddApplicationInputAction, this))
{

}

bool AddApplicationInputRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddApplicationInputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddApplicationInputResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * AddApplicationInputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationInputResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddApplicationInputRequestPrivate
 *
 * @brief  Private implementation for AddApplicationInputRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationInputRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public AddApplicationInputRequest instance.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationInputRequest * const q)
    : AddApplicationInputPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationInputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationInputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddApplicationInputRequest instance.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const AddApplicationInputRequestPrivate &other, AddApplicationInputRequest * const q)
    : AddApplicationInputPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace AWS
