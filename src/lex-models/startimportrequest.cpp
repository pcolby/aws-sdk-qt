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

#include "startimportrequest.h"
#include "startimportrequest_p.h"
#include "startimportresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  StartImportRequest
 *
 * @brief  Implements LexModelBuildingService StartImport requests.
 *
 * @see    LexModelBuildingServiceClient::startImport
 */

/**
 * @brief  Constructs a new StartImportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartImportResponse::StartImportResponse(

/**
 * @brief  Constructs a new StartImportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartImportRequest::StartImportRequest(const StartImportRequest &other)
    : LexModelBuildingServiceRequest(new StartImportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartImportRequest object.
 */
StartImportRequest::StartImportRequest()
    : LexModelBuildingServiceRequest(new StartImportRequestPrivate(LexModelBuildingServiceRequest::StartImportAction, this))
{

}

bool StartImportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartImportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartImportResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * StartImportRequest::response(QNetworkReply * const reply) const
{
    return new StartImportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartImportRequestPrivate
 *
 * @brief  Private implementation for StartImportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartImportRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public StartImportRequest instance.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, StartImportRequest * const q)
    : StartImportPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartImportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartImportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartImportRequest instance.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const StartImportRequestPrivate &other, StartImportRequest * const q)
    : StartImportPrivate(other, q)
{

}
