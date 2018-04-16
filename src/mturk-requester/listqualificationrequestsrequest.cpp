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

#include "listqualificationrequestsrequest.h"
#include "listqualificationrequestsrequest_p.h"
#include "listqualificationrequestsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationRequestsRequest
 *
 * \brief The ListQualificationRequestsRequest class provides an interface for MTurk ListQualificationRequests requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::listQualificationRequests
 */

/*!
 * @brief  Constructs a new ListQualificationRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQualificationRequestsRequest::ListQualificationRequestsRequest(const ListQualificationRequestsRequest &other)
    : MTurkRequest(new ListQualificationRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListQualificationRequestsRequest object.
 */
ListQualificationRequestsRequest::ListQualificationRequestsRequest()
    : MTurkRequest(new ListQualificationRequestsRequestPrivate(MTurkRequest::ListQualificationRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool ListQualificationRequestsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListQualificationRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQualificationRequestsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQualificationRequestsRequest::response(QNetworkReply * const reply) const
{
    return new ListQualificationRequestsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListQualificationRequestsRequestPrivate
 *
 * @brief  Private implementation for ListQualificationRequestsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListQualificationRequestsRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListQualificationRequestsRequest instance.
 */
ListQualificationRequestsRequestPrivate::ListQualificationRequestsRequestPrivate(
    const MTurkRequest::Action action, ListQualificationRequestsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListQualificationRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQualificationRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQualificationRequestsRequest instance.
 */
ListQualificationRequestsRequestPrivate::ListQualificationRequestsRequestPrivate(
    const ListQualificationRequestsRequestPrivate &other, ListQualificationRequestsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
