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

#include "updateipsetrequest.h"
#include "updateipsetrequest_p.h"
#include "updateipsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateIPSetRequest
 *
 * \brief The UpdateIPSetRequest class encapsulates GuardDuty UpdateIPSet requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::updateIPSet
 */

/*!
 * @brief  Constructs a new UpdateIPSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateIPSetRequest::UpdateIPSetRequest(const UpdateIPSetRequest &other)
    : GuardDutyRequest(new UpdateIPSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateIPSetRequest object.
 */
UpdateIPSetRequest::UpdateIPSetRequest()
    : GuardDutyRequest(new UpdateIPSetRequestPrivate(GuardDutyRequest::UpdateIPSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIPSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateIPSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateIPSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIPSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIPSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateIPSetRequestPrivate
 *
 * @brief  Private implementation for UpdateIPSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateIPSetRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public UpdateIPSetRequest instance.
 */
UpdateIPSetRequestPrivate::UpdateIPSetRequestPrivate(
    const GuardDutyRequest::Action action, UpdateIPSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateIPSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateIPSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateIPSetRequest instance.
 */
UpdateIPSetRequestPrivate::UpdateIPSetRequestPrivate(
    const UpdateIPSetRequestPrivate &other, UpdateIPSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
