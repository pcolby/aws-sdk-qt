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

#include "notifyworkersrequest.h"
#include "notifyworkersrequest_p.h"
#include "notifyworkersresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  NotifyWorkersRequest
 *
 * @brief  Implements MTurk NotifyWorkers requests.
 *
 * @see    MTurkClient::notifyWorkers
 */

/**
 * @brief  Constructs a new NotifyWorkersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
NotifyWorkersRequest::NotifyWorkersRequest(const NotifyWorkersRequest &other)
    : MTurkRequest(new NotifyWorkersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new NotifyWorkersRequest object.
 */
NotifyWorkersRequest::NotifyWorkersRequest()
    : MTurkRequest(new NotifyWorkersRequestPrivate(MTurkRequest::NotifyWorkersAction, this))
{

}

bool NotifyWorkersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an NotifyWorkersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An NotifyWorkersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyWorkersRequest::response(QNetworkReply * const reply) const
{
    return new NotifyWorkersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  NotifyWorkersRequestPrivate
 *
 * @brief  Private implementation for NotifyWorkersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new NotifyWorkersRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public NotifyWorkersRequest instance.
 */
NotifyWorkersRequestPrivate::NotifyWorkersRequestPrivate(
    const MTurkRequest::Action action, NotifyWorkersRequest * const q)
    : NotifyWorkersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new NotifyWorkersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the NotifyWorkersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public NotifyWorkersRequest instance.
 */
NotifyWorkersRequestPrivate::NotifyWorkersRequestPrivate(
    const NotifyWorkersRequestPrivate &other, NotifyWorkersRequest * const q)
    : NotifyWorkersPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
