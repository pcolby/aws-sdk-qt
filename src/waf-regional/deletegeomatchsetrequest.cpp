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

#include "deletegeomatchsetrequest.h"
#include "deletegeomatchsetrequest_p.h"
#include "deletegeomatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteGeoMatchSetRequest
 *
 * @brief  Implements WAFRegional DeleteGeoMatchSet requests.
 *
 * @see    WAFRegionalClient::deleteGeoMatchSet
 */

/**
 * @brief  Constructs a new DeleteGeoMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGeoMatchSetResponse::DeleteGeoMatchSetResponse(

/**
 * @brief  Constructs a new DeleteGeoMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGeoMatchSetRequest::DeleteGeoMatchSetRequest(const DeleteGeoMatchSetRequest &other)
    : WAFRegionalRequest(new DeleteGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGeoMatchSetRequest object.
 */
DeleteGeoMatchSetRequest::DeleteGeoMatchSetRequest()
    : WAFRegionalRequest(new DeleteGeoMatchSetRequestPrivate(WAFRegionalRequest::DeleteGeoMatchSetAction, this))
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
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DeleteGeoMatchSetRequest::response(QNetworkReply * const reply) const
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteGeoMatchSetRequest instance.
 */
DeleteGeoMatchSetRequestPrivate::DeleteGeoMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteGeoMatchSetRequest * const q)
    : DeleteGeoMatchSetPrivate(action, q)
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
    : DeleteGeoMatchSetPrivate(other, q)
{

}
