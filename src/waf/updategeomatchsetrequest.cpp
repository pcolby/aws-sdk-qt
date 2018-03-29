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

#include "updategeomatchsetrequest.h"
#include "updategeomatchsetrequest_p.h"
#include "updategeomatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  UpdateGeoMatchSetRequest
 *
 * @brief  Implements WAF UpdateGeoMatchSet requests.
 *
 * @see    WAFClient::updateGeoMatchSet
 */

/**
 * @brief  Constructs a new UpdateGeoMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGeoMatchSetRequest::UpdateGeoMatchSetRequest(const UpdateGeoMatchSetRequest &other)
    : WAFRequest(new UpdateGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGeoMatchSetRequest object.
 */
UpdateGeoMatchSetRequest::UpdateGeoMatchSetRequest()
    : WAFRequest(new UpdateGeoMatchSetRequestPrivate(WAFRequest::UpdateGeoMatchSetAction, this))
{

}

bool UpdateGeoMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGeoMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGeoMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGeoMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGeoMatchSetRequestPrivate
 *
 * @brief  Private implementation for UpdateGeoMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGeoMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateGeoMatchSetRequest instance.
 */
UpdateGeoMatchSetRequestPrivate::UpdateGeoMatchSetRequestPrivate(
    const WAFRequest::Action action, UpdateGeoMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGeoMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGeoMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGeoMatchSetRequest instance.
 */
UpdateGeoMatchSetRequestPrivate::UpdateGeoMatchSetRequestPrivate(
    const UpdateGeoMatchSetRequestPrivate &other, UpdateGeoMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
