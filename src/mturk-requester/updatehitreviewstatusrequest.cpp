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

#include "updatehitreviewstatusrequest.h"
#include "updatehitreviewstatusrequest_p.h"
#include "updatehitreviewstatusresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateHITReviewStatusRequest
 *
 * \brief The UpdateHITReviewStatusRequest class encapsulates MTurk UpdateHITReviewStatus requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::updateHITReviewStatus
 */

/*!
 * @brief  Constructs a new UpdateHITReviewStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateHITReviewStatusRequest::UpdateHITReviewStatusRequest(const UpdateHITReviewStatusRequest &other)
    : MTurkRequest(new UpdateHITReviewStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateHITReviewStatusRequest object.
 */
UpdateHITReviewStatusRequest::UpdateHITReviewStatusRequest()
    : MTurkRequest(new UpdateHITReviewStatusRequestPrivate(MTurkRequest::UpdateHITReviewStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHITReviewStatusRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateHITReviewStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateHITReviewStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHITReviewStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHITReviewStatusResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateHITReviewStatusRequestPrivate
 *
 * @brief  Private implementation for UpdateHITReviewStatusRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateHITReviewStatusRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public UpdateHITReviewStatusRequest instance.
 */
UpdateHITReviewStatusRequestPrivate::UpdateHITReviewStatusRequestPrivate(
    const MTurkRequest::Action action, UpdateHITReviewStatusRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateHITReviewStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateHITReviewStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateHITReviewStatusRequest instance.
 */
UpdateHITReviewStatusRequestPrivate::UpdateHITReviewStatusRequestPrivate(
    const UpdateHITReviewStatusRequestPrivate &other, UpdateHITReviewStatusRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
