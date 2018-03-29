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

#include "getimportrequest.h"
#include "getimportrequest_p.h"
#include "getimportresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetImportRequest
 *
 * @brief  Implements LexModelBuildingService GetImport requests.
 *
 * @see    LexModelBuildingServiceClient::getImport
 */

/**
 * @brief  Constructs a new GetImportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetImportRequest::GetImportRequest(const GetImportRequest &other)
    : LexModelBuildingServiceRequest(new GetImportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetImportRequest object.
 */
GetImportRequest::GetImportRequest()
    : LexModelBuildingServiceRequest(new GetImportRequestPrivate(LexModelBuildingServiceRequest::GetImportAction, this))
{

}

bool GetImportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetImportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetImportResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetImportRequest::response(QNetworkReply * const reply) const
{
    return new GetImportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetImportRequestPrivate
 *
 * @brief  Private implementation for GetImportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetImportRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetImportRequest instance.
 */
GetImportRequestPrivate::GetImportRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetImportRequest * const q)
    : GetImportPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetImportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetImportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetImportRequest instance.
 */
GetImportRequestPrivate::GetImportRequestPrivate(
    const GetImportRequestPrivate &other, GetImportRequest * const q)
    : GetImportPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
