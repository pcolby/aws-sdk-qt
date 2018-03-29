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

#include "liststepsrequest.h"
#include "liststepsrequest_p.h"
#include "liststepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  ListStepsRequest
 *
 * @brief  Implements EMR ListSteps requests.
 *
 * @see    EMRClient::listSteps
 */

/**
 * @brief  Constructs a new ListStepsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStepsRequest::ListStepsRequest(const ListStepsRequest &other)
    : EMRRequest(new ListStepsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStepsRequest object.
 */
ListStepsRequest::ListStepsRequest()
    : EMRRequest(new ListStepsRequestPrivate(EMRRequest::ListStepsAction, this))
{

}

bool ListStepsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStepsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStepsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStepsRequest::response(QNetworkReply * const reply) const
{
    return new ListStepsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStepsRequestPrivate
 *
 * @brief  Private implementation for ListStepsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStepsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListStepsRequest instance.
 */
ListStepsRequestPrivate::ListStepsRequestPrivate(
    const EMRRequest::Action action, ListStepsRequest * const q)
    : ListStepsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStepsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStepsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStepsRequest instance.
 */
ListStepsRequestPrivate::ListStepsRequestPrivate(
    const ListStepsRequestPrivate &other, ListStepsRequest * const q)
    : ListStepsPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
