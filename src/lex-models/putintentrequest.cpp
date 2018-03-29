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

#include "putintentrequest.h"
#include "putintentrequest_p.h"
#include "putintentresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  PutIntentRequest
 *
 * @brief  Implements LexModelBuildingService PutIntent requests.
 *
 * @see    LexModelBuildingServiceClient::putIntent
 */

/**
 * @brief  Constructs a new PutIntentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutIntentRequest::PutIntentRequest(const PutIntentRequest &other)
    : LexModelBuildingServiceRequest(new PutIntentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutIntentRequest object.
 */
PutIntentRequest::PutIntentRequest()
    : LexModelBuildingServiceRequest(new PutIntentRequestPrivate(LexModelBuildingServiceRequest::PutIntentAction, this))
{

}

bool PutIntentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutIntentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutIntentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntentRequest::response(QNetworkReply * const reply) const
{
    return new PutIntentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutIntentRequestPrivate
 *
 * @brief  Private implementation for PutIntentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutIntentRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public PutIntentRequest instance.
 */
PutIntentRequestPrivate::PutIntentRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, PutIntentRequest * const q)
    : PutIntentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutIntentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutIntentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutIntentRequest instance.
 */
PutIntentRequestPrivate::PutIntentRequestPrivate(
    const PutIntentRequestPrivate &other, PutIntentRequest * const q)
    : PutIntentPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
