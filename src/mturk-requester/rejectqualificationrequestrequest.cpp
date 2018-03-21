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

#include "rejectqualificationrequestrequest.h"
#include "rejectqualificationrequestrequest_p.h"
#include "rejectqualificationrequestresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  RejectQualificationRequestRequest
 *
 * @brief  Implements MTurk RejectQualificationRequest requests.
 *
 * @see    MTurkClient::rejectQualificationRequest
 */

/**
 * @brief  Constructs a new RejectQualificationRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectQualificationRequestResponse::RejectQualificationRequestResponse(

/**
 * @brief  Constructs a new RejectQualificationRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest(const RejectQualificationRequestRequest &other)
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RejectQualificationRequestRequest object.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest()
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(MTurkRequest::RejectQualificationRequestAction, this))
{

}

bool RejectQualificationRequestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RejectQualificationRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RejectQualificationRequestResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * RejectQualificationRequestRequest::response(QNetworkReply * const reply) const
{
    return new RejectQualificationRequestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RejectQualificationRequestRequestPrivate
 *
 * @brief  Private implementation for RejectQualificationRequestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectQualificationRequestRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public RejectQualificationRequestRequest instance.
 */
RejectQualificationRequestRequestPrivate::RejectQualificationRequestRequestPrivate(
    const MTurkRequest::Action action, RejectQualificationRequestRequest * const q)
    : RejectQualificationRequestPrivate(action, q)
{

}

/**
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
    : RejectQualificationRequestPrivate(other, q)
{

}
