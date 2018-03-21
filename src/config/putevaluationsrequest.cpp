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

#include "putevaluationsrequest.h"
#include "putevaluationsrequest_p.h"
#include "putevaluationsresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  PutEvaluationsRequest
 *
 * @brief  Implements ConfigService PutEvaluations requests.
 *
 * @see    ConfigServiceClient::putEvaluations
 */

/**
 * @brief  Constructs a new PutEvaluationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEvaluationsResponse::PutEvaluationsResponse(

/**
 * @brief  Constructs a new PutEvaluationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutEvaluationsRequest::PutEvaluationsRequest(const PutEvaluationsRequest &other)
    : ConfigServiceRequest(new PutEvaluationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutEvaluationsRequest object.
 */
PutEvaluationsRequest::PutEvaluationsRequest()
    : ConfigServiceRequest(new PutEvaluationsRequestPrivate(ConfigServiceRequest::PutEvaluationsAction, this))
{

}

bool PutEvaluationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutEvaluationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutEvaluationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * PutEvaluationsRequest::response(QNetworkReply * const reply) const
{
    return new PutEvaluationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutEvaluationsRequestPrivate
 *
 * @brief  Private implementation for PutEvaluationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEvaluationsRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public PutEvaluationsRequest instance.
 */
PutEvaluationsRequestPrivate::PutEvaluationsRequestPrivate(
    const ConfigServiceRequest::Action action, PutEvaluationsRequest * const q)
    : PutEvaluationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutEvaluationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutEvaluationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutEvaluationsRequest instance.
 */
PutEvaluationsRequestPrivate::PutEvaluationsRequestPrivate(
    const PutEvaluationsRequestPrivate &other, PutEvaluationsRequest * const q)
    : PutEvaluationsPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
