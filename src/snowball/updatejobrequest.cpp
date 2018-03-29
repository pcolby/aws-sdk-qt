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

#include "updatejobrequest.h"
#include "updatejobrequest_p.h"
#include "updatejobresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/**
 * @class  UpdateJobRequest
 *
 * @brief  Implements Snowball UpdateJob requests.
 *
 * @see    SnowballClient::updateJob
 */

/**
 * @brief  Constructs a new UpdateJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateJobRequest::UpdateJobRequest(const UpdateJobRequest &other)
    : SnowballRequest(new UpdateJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateJobRequest object.
 */
UpdateJobRequest::UpdateJobRequest()
    : SnowballRequest(new UpdateJobRequestPrivate(SnowballRequest::UpdateJobAction, this))
{

}

bool UpdateJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SnowballClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateJobRequestPrivate
 *
 * @brief  Private implementation for UpdateJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public UpdateJobRequest instance.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const SnowballRequest::Action action, UpdateJobRequest * const q)
    : UpdateJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateJobRequest instance.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const UpdateJobRequestPrivate &other, UpdateJobRequest * const q)
    : UpdateJobPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
