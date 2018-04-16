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

#include "listdetectorsrequest.h"
#include "listdetectorsrequest_p.h"
#include "listdetectorsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListDetectorsRequest
 *
 * \brief The ListDetectorsRequest class provides an interface for GuardDuty ListDetectors requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::listDetectors
 */

/*!
 * @brief  Constructs a new ListDetectorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDetectorsRequest::ListDetectorsRequest(const ListDetectorsRequest &other)
    : GuardDutyRequest(new ListDetectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListDetectorsRequest object.
 */
ListDetectorsRequest::ListDetectorsRequest()
    : GuardDutyRequest(new ListDetectorsRequestPrivate(GuardDutyRequest::ListDetectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListDetectorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDetectorsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListDetectorsRequestPrivate
 *
 * @brief  Private implementation for ListDetectorsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDetectorsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public ListDetectorsRequest instance.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const GuardDutyRequest::Action action, ListDetectorsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListDetectorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDetectorsRequest instance.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const ListDetectorsRequestPrivate &other, ListDetectorsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
