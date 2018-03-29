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

#include "addapplicationoutputrequest.h"
#include "addapplicationoutputrequest_p.h"
#include "addapplicationoutputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationOutputRequest
 *
 * @brief  Implements KinesisAnalytics AddApplicationOutput requests.
 *
 * @see    KinesisAnalyticsClient::addApplicationOutput
 */

/**
 * @brief  Constructs a new AddApplicationOutputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest(const AddApplicationOutputRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddApplicationOutputRequest object.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest()
    : KinesisAnalyticsRequest(new AddApplicationOutputRequestPrivate(KinesisAnalyticsRequest::AddApplicationOutputAction, this))
{

}

bool AddApplicationOutputRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddApplicationOutputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddApplicationOutputResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * AddApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationOutputResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddApplicationOutputRequestPrivate
 *
 * @brief  Private implementation for AddApplicationOutputRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationOutputRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public AddApplicationOutputRequest instance.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationOutputRequest * const q)
    : AddApplicationOutputPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationOutputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationOutputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddApplicationOutputRequest instance.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const AddApplicationOutputRequestPrivate &other, AddApplicationOutputRequest * const q)
    : AddApplicationOutputPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace AWS
