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

#include "signalresourcerequest.h"
#include "signalresourcerequest_p.h"
#include "signalresourceresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  SignalResourceRequest
 *
 * @brief  Implements CloudFormation SignalResource requests.
 *
 * @see    CloudFormationClient::signalResource
 */

/**
 * @brief  Constructs a new SignalResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SignalResourceRequest::SignalResourceRequest(const SignalResourceRequest &other)
    : CloudFormationRequest(new SignalResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SignalResourceRequest object.
 */
SignalResourceRequest::SignalResourceRequest()
    : CloudFormationRequest(new SignalResourceRequestPrivate(CloudFormationRequest::SignalResourceAction, this))
{

}

bool SignalResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SignalResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SignalResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * SignalResourceRequest::response(QNetworkReply * const reply) const
{
    return new SignalResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SignalResourceRequestPrivate
 *
 * @brief  Private implementation for SignalResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SignalResourceRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public SignalResourceRequest instance.
 */
SignalResourceRequestPrivate::SignalResourceRequestPrivate(
    const CloudFormationRequest::Action action, SignalResourceRequest * const q)
    : SignalResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SignalResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SignalResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SignalResourceRequest instance.
 */
SignalResourceRequestPrivate::SignalResourceRequestPrivate(
    const SignalResourceRequestPrivate &other, SignalResourceRequest * const q)
    : SignalResourcePrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
