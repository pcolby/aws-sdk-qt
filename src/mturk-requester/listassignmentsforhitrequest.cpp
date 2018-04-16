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

#include "listassignmentsforhitrequest.h"
#include "listassignmentsforhitrequest_p.h"
#include "listassignmentsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITRequest
 *
 * \brief The ListAssignmentsForHITRequest class encapsulates MTurk ListAssignmentsForHIT requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::listAssignmentsForHIT
 */

/*!
 * @brief  Constructs a new ListAssignmentsForHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssignmentsForHITRequest::ListAssignmentsForHITRequest(const ListAssignmentsForHITRequest &other)
    : MTurkRequest(new ListAssignmentsForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListAssignmentsForHITRequest object.
 */
ListAssignmentsForHITRequest::ListAssignmentsForHITRequest()
    : MTurkRequest(new ListAssignmentsForHITRequestPrivate(MTurkRequest::ListAssignmentsForHITAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssignmentsForHITRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListAssignmentsForHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssignmentsForHITResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssignmentsForHITRequest::response(QNetworkReply * const reply) const
{
    return new ListAssignmentsForHITResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListAssignmentsForHITRequestPrivate
 *
 * @brief  Private implementation for ListAssignmentsForHITRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListAssignmentsForHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListAssignmentsForHITRequest instance.
 */
ListAssignmentsForHITRequestPrivate::ListAssignmentsForHITRequestPrivate(
    const MTurkRequest::Action action, ListAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListAssignmentsForHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssignmentsForHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssignmentsForHITRequest instance.
 */
ListAssignmentsForHITRequestPrivate::ListAssignmentsForHITRequestPrivate(
    const ListAssignmentsForHITRequestPrivate &other, ListAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
