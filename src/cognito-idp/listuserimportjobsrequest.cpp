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

#include "listuserimportjobsrequest.h"
#include "listuserimportjobsrequest_p.h"
#include "listuserimportjobsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ListUserImportJobsRequest
 *
 * @brief  Implements CognitoIdentityProvider ListUserImportJobs requests.
 *
 * @see    CognitoIdentityProviderClient::listUserImportJobs
 */

/**
 * @brief  Constructs a new ListUserImportJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUserImportJobsResponse::ListUserImportJobsResponse(

/**
 * @brief  Constructs a new ListUserImportJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUserImportJobsRequest::ListUserImportJobsRequest(const ListUserImportJobsRequest &other)
    : CognitoIdentityProviderRequest(new ListUserImportJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUserImportJobsRequest object.
 */
ListUserImportJobsRequest::ListUserImportJobsRequest()
    : CognitoIdentityProviderRequest(new ListUserImportJobsRequestPrivate(CognitoIdentityProviderRequest::ListUserImportJobsAction, this))
{

}

bool ListUserImportJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUserImportJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUserImportJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * ListUserImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserImportJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUserImportJobsRequestPrivate
 *
 * @brief  Private implementation for ListUserImportJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserImportJobsRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ListUserImportJobsRequest instance.
 */
ListUserImportJobsRequestPrivate::ListUserImportJobsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUserImportJobsRequest * const q)
    : ListUserImportJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUserImportJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUserImportJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUserImportJobsRequest instance.
 */
ListUserImportJobsRequestPrivate::ListUserImportJobsRequestPrivate(
    const ListUserImportJobsRequestPrivate &other, ListUserImportJobsRequest * const q)
    : ListUserImportJobsPrivate(other, q)
{

}
