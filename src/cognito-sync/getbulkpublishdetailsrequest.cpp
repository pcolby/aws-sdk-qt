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

#include "getbulkpublishdetailsrequest.h"
#include "getbulkpublishdetailsrequest_p.h"
#include "getbulkpublishdetailsresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  GetBulkPublishDetailsRequest
 *
 * @brief  Implements CognitoSync GetBulkPublishDetails requests.
 *
 * @see    CognitoSyncClient::getBulkPublishDetails
 */

/**
 * @brief  Constructs a new GetBulkPublishDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBulkPublishDetailsRequest::GetBulkPublishDetailsRequest(const GetBulkPublishDetailsRequest &other)
    : CognitoSyncRequest(new GetBulkPublishDetailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBulkPublishDetailsRequest object.
 */
GetBulkPublishDetailsRequest::GetBulkPublishDetailsRequest()
    : CognitoSyncRequest(new GetBulkPublishDetailsRequestPrivate(CognitoSyncRequest::GetBulkPublishDetailsAction, this))
{

}

bool GetBulkPublishDetailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBulkPublishDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBulkPublishDetailsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * GetBulkPublishDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetBulkPublishDetailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBulkPublishDetailsRequestPrivate
 *
 * @brief  Private implementation for GetBulkPublishDetailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBulkPublishDetailsRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public GetBulkPublishDetailsRequest instance.
 */
GetBulkPublishDetailsRequestPrivate::GetBulkPublishDetailsRequestPrivate(
    const CognitoSyncRequest::Action action, GetBulkPublishDetailsRequest * const q)
    : GetBulkPublishDetailsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBulkPublishDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBulkPublishDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBulkPublishDetailsRequest instance.
 */
GetBulkPublishDetailsRequestPrivate::GetBulkPublishDetailsRequestPrivate(
    const GetBulkPublishDetailsRequestPrivate &other, GetBulkPublishDetailsRequest * const q)
    : GetBulkPublishDetailsPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
