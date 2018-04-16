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

#include "deletethreatintelsetrequest.h"
#include "deletethreatintelsetrequest_p.h"
#include "deletethreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetRequest
 *
 * \brief The DeleteThreatIntelSetRequest class encapsulates GuardDuty DeleteThreatIntelSet requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::deleteThreatIntelSet
 */

/*!
 * @brief  Constructs a new DeleteThreatIntelSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteThreatIntelSetRequest::DeleteThreatIntelSetRequest(const DeleteThreatIntelSetRequest &other)
    : GuardDutyRequest(new DeleteThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteThreatIntelSetRequest object.
 */
DeleteThreatIntelSetRequest::DeleteThreatIntelSetRequest()
    : GuardDutyRequest(new DeleteThreatIntelSetRequestPrivate(GuardDutyRequest::DeleteThreatIntelSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThreatIntelSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteThreatIntelSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteThreatIntelSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThreatIntelSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteThreatIntelSetRequestPrivate
 *
 * @brief  Private implementation for DeleteThreatIntelSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteThreatIntelSetRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DeleteThreatIntelSetRequest instance.
 */
DeleteThreatIntelSetRequestPrivate::DeleteThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, DeleteThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteThreatIntelSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteThreatIntelSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteThreatIntelSetRequest instance.
 */
DeleteThreatIntelSetRequestPrivate::DeleteThreatIntelSetRequestPrivate(
    const DeleteThreatIntelSetRequestPrivate &other, DeleteThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
