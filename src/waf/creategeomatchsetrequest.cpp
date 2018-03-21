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

#include "creategeomatchsetrequest.h"
#include "creategeomatchsetrequest_p.h"
#include "creategeomatchsetresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  CreateGeoMatchSetRequest
 *
 * @brief  Implements WAF CreateGeoMatchSet requests.
 *
 * @see    WAFClient::createGeoMatchSet
 */

/**
 * @brief  Constructs a new CreateGeoMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGeoMatchSetResponse::CreateGeoMatchSetResponse(

/**
 * @brief  Constructs a new CreateGeoMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGeoMatchSetRequest::CreateGeoMatchSetRequest(const CreateGeoMatchSetRequest &other)
    : WAFRequest(new CreateGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGeoMatchSetRequest object.
 */
CreateGeoMatchSetRequest::CreateGeoMatchSetRequest()
    : WAFRequest(new CreateGeoMatchSetRequestPrivate(WAFRequest::CreateGeoMatchSetAction, this))
{

}

bool CreateGeoMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGeoMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGeoMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * CreateGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateGeoMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGeoMatchSetRequestPrivate
 *
 * @brief  Private implementation for CreateGeoMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGeoMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public CreateGeoMatchSetRequest instance.
 */
CreateGeoMatchSetRequestPrivate::CreateGeoMatchSetRequestPrivate(
    const WAFRequest::Action action, CreateGeoMatchSetRequest * const q)
    : CreateGeoMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGeoMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGeoMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGeoMatchSetRequest instance.
 */
CreateGeoMatchSetRequestPrivate::CreateGeoMatchSetRequestPrivate(
    const CreateGeoMatchSetRequestPrivate &other, CreateGeoMatchSetRequest * const q)
    : CreateGeoMatchSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
