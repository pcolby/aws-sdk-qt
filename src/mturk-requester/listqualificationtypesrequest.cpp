/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listqualificationtypesrequest.h"
#include "listqualificationtypesrequest_p.h"
#include "listqualificationtypesresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  ListQualificationTypesRequest
 *
 * @brief  Implements MTurk ListQualificationTypes requests.
 *
 * @see    MTurkClient::listQualificationTypes
 */

/**
 * @brief  Constructs a new ListQualificationTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQualificationTypesResponse::ListQualificationTypesResponse(

/**
 * @brief  Constructs a new ListQualificationTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQualificationTypesRequest::ListQualificationTypesRequest(const ListQualificationTypesRequest &other)
    : MTurkRequest(new ListQualificationTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListQualificationTypesRequest object.
 */
ListQualificationTypesRequest::ListQualificationTypesRequest()
    : MTurkRequest(new ListQualificationTypesRequestPrivate(MTurkRequest::ListQualificationTypesAction, this))
{

}

bool ListQualificationTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListQualificationTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQualificationTypesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * ListQualificationTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListQualificationTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListQualificationTypesRequestPrivate
 *
 * @brief  Private implementation for ListQualificationTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQualificationTypesRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListQualificationTypesRequest instance.
 */
ListQualificationTypesRequestPrivate::ListQualificationTypesRequestPrivate(
    const MTurkRequest::Action action, ListQualificationTypesRequest * const q)
    : ListQualificationTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListQualificationTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQualificationTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQualificationTypesRequest instance.
 */
ListQualificationTypesRequestPrivate::ListQualificationTypesRequestPrivate(
    const ListQualificationTypesRequestPrivate &other, ListQualificationTypesRequest * const q)
    : ListQualificationTypesPrivate(other, q)
{

}
