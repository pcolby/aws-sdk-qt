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

#include "listcreateaccountstatusrequest.h"
#include "listcreateaccountstatusrequest_p.h"
#include "listcreateaccountstatusresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  ListCreateAccountStatusRequest
 *
 * @brief  Implements Organizations ListCreateAccountStatus requests.
 *
 * @see    OrganizationsClient::listCreateAccountStatus
 */

/**
 * @brief  Constructs a new ListCreateAccountStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCreateAccountStatusResponse::ListCreateAccountStatusResponse(

/**
 * @brief  Constructs a new ListCreateAccountStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCreateAccountStatusRequest::ListCreateAccountStatusRequest(const ListCreateAccountStatusRequest &other)
    : OrganizationsRequest(new ListCreateAccountStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCreateAccountStatusRequest object.
 */
ListCreateAccountStatusRequest::ListCreateAccountStatusRequest()
    : OrganizationsRequest(new ListCreateAccountStatusRequestPrivate(OrganizationsRequest::ListCreateAccountStatusAction, this))
{

}

bool ListCreateAccountStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCreateAccountStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCreateAccountStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListCreateAccountStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListCreateAccountStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCreateAccountStatusRequestPrivate
 *
 * @brief  Private implementation for ListCreateAccountStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCreateAccountStatusRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListCreateAccountStatusRequest instance.
 */
ListCreateAccountStatusRequestPrivate::ListCreateAccountStatusRequestPrivate(
    const OrganizationsRequest::Action action, ListCreateAccountStatusRequest * const q)
    : ListCreateAccountStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCreateAccountStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCreateAccountStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCreateAccountStatusRequest instance.
 */
ListCreateAccountStatusRequestPrivate::ListCreateAccountStatusRequestPrivate(
    const ListCreateAccountStatusRequestPrivate &other, ListCreateAccountStatusRequest * const q)
    : ListCreateAccountStatusPrivate(other, q)
{

}
