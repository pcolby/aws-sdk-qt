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

#include "listexecutionsrequest.h"
#include "listexecutionsrequest_p.h"
#include "listexecutionsresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  ListExecutionsRequest
 *
 * @brief  Implements SFN ListExecutions requests.
 *
 * @see    SFNClient::listExecutions
 */

/**
 * @brief  Constructs a new ListExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListExecutionsRequest::ListExecutionsRequest(const ListExecutionsRequest &other)
    : SFNRequest(new ListExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListExecutionsRequest object.
 */
ListExecutionsRequest::ListExecutionsRequest()
    : SFNRequest(new ListExecutionsRequestPrivate(SFNRequest::ListExecutionsAction, this))
{

}

bool ListExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListExecutionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SFNClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListExecutionsRequestPrivate
 *
 * @brief  Private implementation for ListExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListExecutionsRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public ListExecutionsRequest instance.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const SFNRequest::Action action, ListExecutionsRequest * const q)
    : ListExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListExecutionsRequest instance.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const ListExecutionsRequestPrivate &other, ListExecutionsRequest * const q)
    : ListExecutionsPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
