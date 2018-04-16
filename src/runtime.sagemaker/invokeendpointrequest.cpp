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

#include "invokeendpointrequest.h"
#include "invokeendpointrequest_p.h"
#include "invokeendpointresponse.h"
#include "sagemakerruntimerequest_p.h"

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointRequest
 *
 * \brief The InvokeEndpointRequest class provides an interface for SageMakerRuntime InvokeEndpoint requests.
 *
 * \ingroup SageMakerRuntime
 *
 *  Amazon SageMaker runtime API.
 *
 * \sa SageMakerRuntimeClient::invokeEndpoint
 */

/*!
 * @brief  Constructs a new InvokeEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InvokeEndpointRequest::InvokeEndpointRequest(const InvokeEndpointRequest &other)
    : SageMakerRuntimeRequest(new InvokeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new InvokeEndpointRequest object.
 */
InvokeEndpointRequest::InvokeEndpointRequest()
    : SageMakerRuntimeRequest(new InvokeEndpointRequestPrivate(SageMakerRuntimeRequest::InvokeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an InvokeEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InvokeEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerRuntimeClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new InvokeEndpointResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  InvokeEndpointRequestPrivate
 *
 * @brief  Private implementation for InvokeEndpointRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new InvokeEndpointRequestPrivate object.
 *
 * @param  action  SageMakerRuntime action being performed.
 * @param  q       Pointer to this object's public InvokeEndpointRequest instance.
 */
InvokeEndpointRequestPrivate::InvokeEndpointRequestPrivate(
    const SageMakerRuntimeRequest::Action action, InvokeEndpointRequest * const q)
    : SageMakerRuntimeRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new InvokeEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InvokeEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InvokeEndpointRequest instance.
 */
InvokeEndpointRequestPrivate::InvokeEndpointRequestPrivate(
    const InvokeEndpointRequestPrivate &other, InvokeEndpointRequest * const q)
    : SageMakerRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerRuntime
} // namespace QtAws
