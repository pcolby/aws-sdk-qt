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

#include "listhitsforqualificationtyperequest.h"
#include "listhitsforqualificationtyperequest_p.h"
#include "listhitsforqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  ListHITsForQualificationTypeRequest
 *
 * @brief  Implements MTurk ListHITsForQualificationType requests.
 *
 * @see    MTurkClient::listHITsForQualificationType
 */

/**
 * @brief  Constructs a new ListHITsForQualificationTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHITsForQualificationTypeRequest::ListHITsForQualificationTypeRequest(const ListHITsForQualificationTypeRequest &other)
    : MTurkRequest(new ListHITsForQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListHITsForQualificationTypeRequest object.
 */
ListHITsForQualificationTypeRequest::ListHITsForQualificationTypeRequest()
    : MTurkRequest(new ListHITsForQualificationTypeRequestPrivate(MTurkRequest::ListHITsForQualificationTypeAction, this))
{

}

bool ListHITsForQualificationTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListHITsForQualificationTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHITsForQualificationTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHITsForQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new ListHITsForQualificationTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListHITsForQualificationTypeRequestPrivate
 *
 * @brief  Private implementation for ListHITsForQualificationTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHITsForQualificationTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListHITsForQualificationTypeRequest instance.
 */
ListHITsForQualificationTypeRequestPrivate::ListHITsForQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, ListHITsForQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListHITsForQualificationTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHITsForQualificationTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHITsForQualificationTypeRequest instance.
 */
ListHITsForQualificationTypeRequestPrivate::ListHITsForQualificationTypeRequestPrivate(
    const ListHITsForQualificationTypeRequestPrivate &other, ListHITsForQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
