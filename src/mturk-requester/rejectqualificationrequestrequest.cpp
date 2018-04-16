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

#include "rejectqualificationrequestrequest.h"
#include "rejectqualificationrequestrequest_p.h"
#include "rejectqualificationrequestresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectQualificationRequestRequest
 *
 * \brief The RejectQualificationRequestRequest class provides an interface for MTurk RejectQualificationRequest requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::rejectQualificationRequest
 */

/*!
 * @brief  Constructs a new RejectQualificationRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest(const RejectQualificationRequestRequest &other)
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RejectQualificationRequestRequest object.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest()
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(MTurkRequest::RejectQualificationRequestAction, this))
{

}

/*!
 * \reimp
 */
bool RejectQualificationRequestRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RejectQualificationRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RejectQualificationRequestResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectQualificationRequestRequest::response(QNetworkReply * const reply) const
{
    return new RejectQualificationRequestResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RejectQualificationRequestRequestPrivate
 *
 * @brief  Private implementation for RejectQualificationRequestRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RejectQualificationRequestRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public RejectQualificationRequestRequest instance.
 */
RejectQualificationRequestRequestPrivate::RejectQualificationRequestRequestPrivate(
    const MTurkRequest::Action action, RejectQualificationRequestRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RejectQualificationRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RejectQualificationRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RejectQualificationRequestRequest instance.
 */
RejectQualificationRequestRequestPrivate::RejectQualificationRequestRequestPrivate(
    const RejectQualificationRequestRequestPrivate &other, RejectQualificationRequestRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
