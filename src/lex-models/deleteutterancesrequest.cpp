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

#include "deleteutterancesrequest.h"
#include "deleteutterancesrequest_p.h"
#include "deleteutterancesresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  DeleteUtterancesRequest
 *
 * @brief  Implements LexModelBuildingService DeleteUtterances requests.
 *
 * @see    LexModelBuildingServiceClient::deleteUtterances
 */

/**
 * @brief  Constructs a new DeleteUtterancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest(const DeleteUtterancesRequest &other)
    : LexModelBuildingServiceRequest(new DeleteUtterancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUtterancesRequest object.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest()
    : LexModelBuildingServiceRequest(new DeleteUtterancesRequestPrivate(LexModelBuildingServiceRequest::DeleteUtterancesAction, this))
{

}

bool DeleteUtterancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUtterancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUtterancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUtterancesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUtterancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUtterancesRequestPrivate
 *
 * @brief  Private implementation for DeleteUtterancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUtterancesRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteUtterancesRequest instance.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteUtterancesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUtterancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUtterancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUtterancesRequest instance.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const DeleteUtterancesRequestPrivate &other, DeleteUtterancesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
