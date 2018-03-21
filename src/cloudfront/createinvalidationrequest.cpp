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

#include "createinvalidationrequest.h"
#include "createinvalidationrequest_p.h"
#include "createinvalidationresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateInvalidationRequest
 *
 * @brief  Implements CloudFront CreateInvalidation requests.
 *
 * @see    CloudFrontClient::createInvalidation
 */

/**
 * @brief  Constructs a new CreateInvalidationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInvalidationResponse::CreateInvalidationResponse(

/**
 * @brief  Constructs a new CreateInvalidationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInvalidationRequest::CreateInvalidationRequest(const CreateInvalidationRequest &other)
    : CloudFrontRequest(new CreateInvalidationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateInvalidationRequest object.
 */
CreateInvalidationRequest::CreateInvalidationRequest()
    : CloudFrontRequest(new CreateInvalidationRequestPrivate(CloudFrontRequest::CreateInvalidationAction, this))
{

}

bool CreateInvalidationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateInvalidationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInvalidationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * CreateInvalidationRequest::response(QNetworkReply * const reply) const
{
    return new CreateInvalidationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateInvalidationRequestPrivate
 *
 * @brief  Private implementation for CreateInvalidationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInvalidationRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateInvalidationRequest instance.
 */
CreateInvalidationRequestPrivate::CreateInvalidationRequestPrivate(
    const CloudFrontRequest::Action action, CreateInvalidationRequest * const q)
    : CreateInvalidationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateInvalidationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInvalidationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInvalidationRequest instance.
 */
CreateInvalidationRequestPrivate::CreateInvalidationRequestPrivate(
    const CreateInvalidationRequestPrivate &other, CreateInvalidationRequest * const q)
    : CreateInvalidationPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
