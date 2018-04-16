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

#include "deleteipsetrequest.h"
#include "deleteipsetrequest_p.h"
#include "deleteipsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteIPSetRequest
 *
 * \brief The DeleteIPSetRequest class encapsulates GuardDuty DeleteIPSet requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::deleteIPSet
 */

/*!
 * @brief  Constructs a new DeleteIPSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIPSetRequest::DeleteIPSetRequest(const DeleteIPSetRequest &other)
    : GuardDutyRequest(new DeleteIPSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteIPSetRequest object.
 */
DeleteIPSetRequest::DeleteIPSetRequest()
    : GuardDutyRequest(new DeleteIPSetRequestPrivate(GuardDutyRequest::DeleteIPSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIPSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteIPSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIPSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIPSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIPSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteIPSetRequestPrivate
 *
 * @brief  Private implementation for DeleteIPSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteIPSetRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DeleteIPSetRequest instance.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const GuardDutyRequest::Action action, DeleteIPSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteIPSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIPSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIPSetRequest instance.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const DeleteIPSetRequestPrivate &other, DeleteIPSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
