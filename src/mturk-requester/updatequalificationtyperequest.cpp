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

#include "updatequalificationtyperequest.h"
#include "updatequalificationtyperequest_p.h"
#include "updatequalificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateQualificationTypeRequest
 *
 * \brief The UpdateQualificationTypeRequest class encapsulates MTurk UpdateQualificationType requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::updateQualificationType
 */

/*!
 * @brief  Constructs a new UpdateQualificationTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateQualificationTypeRequest::UpdateQualificationTypeRequest(const UpdateQualificationTypeRequest &other)
    : MTurkRequest(new UpdateQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateQualificationTypeRequest object.
 */
UpdateQualificationTypeRequest::UpdateQualificationTypeRequest()
    : MTurkRequest(new UpdateQualificationTypeRequestPrivate(MTurkRequest::UpdateQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateQualificationTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateQualificationTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQualificationTypeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateQualificationTypeRequestPrivate
 *
 * @brief  Private implementation for UpdateQualificationTypeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateQualificationTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public UpdateQualificationTypeRequest instance.
 */
UpdateQualificationTypeRequestPrivate::UpdateQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, UpdateQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateQualificationTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateQualificationTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateQualificationTypeRequest instance.
 */
UpdateQualificationTypeRequestPrivate::UpdateQualificationTypeRequestPrivate(
    const UpdateQualificationTypeRequestPrivate &other, UpdateQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
