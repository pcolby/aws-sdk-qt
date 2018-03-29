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

#include "listworkerswithqualificationtyperequest.h"
#include "listworkerswithqualificationtyperequest_p.h"
#include "listworkerswithqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  ListWorkersWithQualificationTypeRequest
 *
 * @brief  Implements MTurk ListWorkersWithQualificationType requests.
 *
 * @see    MTurkClient::listWorkersWithQualificationType
 */

/**
 * @brief  Constructs a new ListWorkersWithQualificationTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListWorkersWithQualificationTypeRequest::ListWorkersWithQualificationTypeRequest(const ListWorkersWithQualificationTypeRequest &other)
    : MTurkRequest(new ListWorkersWithQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListWorkersWithQualificationTypeRequest object.
 */
ListWorkersWithQualificationTypeRequest::ListWorkersWithQualificationTypeRequest()
    : MTurkRequest(new ListWorkersWithQualificationTypeRequestPrivate(MTurkRequest::ListWorkersWithQualificationTypeAction, this))
{

}

bool ListWorkersWithQualificationTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListWorkersWithQualificationTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListWorkersWithQualificationTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * ListWorkersWithQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkersWithQualificationTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListWorkersWithQualificationTypeRequestPrivate
 *
 * @brief  Private implementation for ListWorkersWithQualificationTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkersWithQualificationTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListWorkersWithQualificationTypeRequest instance.
 */
ListWorkersWithQualificationTypeRequestPrivate::ListWorkersWithQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, ListWorkersWithQualificationTypeRequest * const q)
    : ListWorkersWithQualificationTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkersWithQualificationTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListWorkersWithQualificationTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListWorkersWithQualificationTypeRequest instance.
 */
ListWorkersWithQualificationTypeRequestPrivate::ListWorkersWithQualificationTypeRequestPrivate(
    const ListWorkersWithQualificationTypeRequestPrivate &other, ListWorkersWithQualificationTypeRequest * const q)
    : ListWorkersWithQualificationTypePrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
