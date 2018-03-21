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

#include "gethostnamesuggestionrequest.h"
#include "gethostnamesuggestionrequest_p.h"
#include "gethostnamesuggestionresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  GetHostnameSuggestionRequest
 *
 * @brief  Implements OpsWorks GetHostnameSuggestion requests.
 *
 * @see    OpsWorksClient::getHostnameSuggestion
 */

/**
 * @brief  Constructs a new GetHostnameSuggestionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHostnameSuggestionResponse::GetHostnameSuggestionResponse(

/**
 * @brief  Constructs a new GetHostnameSuggestionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHostnameSuggestionRequest::GetHostnameSuggestionRequest(const GetHostnameSuggestionRequest &other)
    : OpsWorksRequest(new GetHostnameSuggestionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHostnameSuggestionRequest object.
 */
GetHostnameSuggestionRequest::GetHostnameSuggestionRequest()
    : OpsWorksRequest(new GetHostnameSuggestionRequestPrivate(OpsWorksRequest::GetHostnameSuggestionAction, this))
{

}

bool GetHostnameSuggestionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHostnameSuggestionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHostnameSuggestionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * GetHostnameSuggestionRequest::response(QNetworkReply * const reply) const
{
    return new GetHostnameSuggestionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHostnameSuggestionRequestPrivate
 *
 * @brief  Private implementation for GetHostnameSuggestionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostnameSuggestionRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public GetHostnameSuggestionRequest instance.
 */
GetHostnameSuggestionRequestPrivate::GetHostnameSuggestionRequestPrivate(
    const OpsWorksRequest::Action action, GetHostnameSuggestionRequest * const q)
    : GetHostnameSuggestionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHostnameSuggestionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHostnameSuggestionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHostnameSuggestionRequest instance.
 */
GetHostnameSuggestionRequestPrivate::GetHostnameSuggestionRequestPrivate(
    const GetHostnameSuggestionRequestPrivate &other, GetHostnameSuggestionRequest * const q)
    : GetHostnameSuggestionPrivate(other, q)
{

}
