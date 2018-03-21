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

#include "getstatusrequest.h"
#include "getstatusrequest_p.h"
#include "getstatusresponse.h"
#include "importexportrequest_p.h"

namespace AWS {
namespace ImportExport {

/**
 * @class  GetStatusRequest
 *
 * @brief  Implements ImportExport GetStatus requests.
 *
 * @see    ImportExportClient::getStatus
 */

/**
 * @brief  Constructs a new GetStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStatusResponse::GetStatusResponse(

/**
 * @brief  Constructs a new GetStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStatusRequest::GetStatusRequest(const GetStatusRequest &other)
    : ImportExportRequest(new GetStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStatusRequest object.
 */
GetStatusRequest::GetStatusRequest()
    : ImportExportRequest(new GetStatusRequestPrivate(ImportExportRequest::GetStatusAction, this))
{

}

bool GetStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ImportExportClient::send
 */
AwsAbstractResponse * GetStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStatusRequestPrivate
 *
 * @brief  Private implementation for GetStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStatusRequestPrivate object.
 *
 * @param  action  ImportExport action being performed.
 * @param  q       Pointer to this object's public GetStatusRequest instance.
 */
GetStatusRequestPrivate::GetStatusRequestPrivate(
    const ImportExportRequest::Action action, GetStatusRequest * const q)
    : GetStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStatusRequest instance.
 */
GetStatusRequestPrivate::GetStatusRequestPrivate(
    const GetStatusRequestPrivate &other, GetStatusRequest * const q)
    : GetStatusPrivate(other, q)
{

}
