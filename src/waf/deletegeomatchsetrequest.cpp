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

#include "deletegeomatchsetrequest.h"
#include "deletegeomatchsetrequest_p.h"
#include "deletegeomatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  DeleteGeoMatchSetRequest
 *
 * @brief  Implements WAF DeleteGeoMatchSet requests.
 *
 * @see    WAFClient::deleteGeoMatchSet
 */

/**
 * @brief  Constructs a new DeleteGeoMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGeoMatchSetRequest::DeleteGeoMatchSetRequest(const DeleteGeoMatchSetRequest &other)
    : WAFRequest(new DeleteGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGeoMatchSetRequest object.
 */
DeleteGeoMatchSetRequest::DeleteGeoMatchSetRequest()
    : WAFRequest(new DeleteGeoMatchSetRequestPrivate(WAFRequest::DeleteGeoMatchSetAction, this))
{

}

bool DeleteGeoMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGeoMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGeoMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGeoMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGeoMatchSetRequestPrivate
 *
 * @brief  Private implementation for DeleteGeoMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGeoMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteGeoMatchSetRequest instance.
 */
DeleteGeoMatchSetRequestPrivate::DeleteGeoMatchSetRequestPrivate(
    const WAFRequest::Action action, DeleteGeoMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGeoMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGeoMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGeoMatchSetRequest instance.
 */
DeleteGeoMatchSetRequestPrivate::DeleteGeoMatchSetRequestPrivate(
    const DeleteGeoMatchSetRequestPrivate &other, DeleteGeoMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
