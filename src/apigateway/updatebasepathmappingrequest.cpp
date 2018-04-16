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

#include "updatebasepathmappingrequest.h"
#include "updatebasepathmappingrequest_p.h"
#include "updatebasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateBasePathMappingRequest
 *
 * \brief The UpdateBasePathMappingRequest class provides an interface for APIGateway UpdateBasePathMapping requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateBasePathMapping
 */

/*!
 * @brief  Constructs a new UpdateBasePathMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateBasePathMappingRequest::UpdateBasePathMappingRequest(const UpdateBasePathMappingRequest &other)
    : APIGatewayRequest(new UpdateBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateBasePathMappingRequest object.
 */
UpdateBasePathMappingRequest::UpdateBasePathMappingRequest()
    : APIGatewayRequest(new UpdateBasePathMappingRequestPrivate(APIGatewayRequest::UpdateBasePathMappingAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBasePathMappingRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateBasePathMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateBasePathMappingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBasePathMappingResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateBasePathMappingRequestPrivate
 *
 * @brief  Private implementation for UpdateBasePathMappingRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateBasePathMappingRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateBasePathMappingRequest instance.
 */
UpdateBasePathMappingRequestPrivate::UpdateBasePathMappingRequestPrivate(
    const APIGatewayRequest::Action action, UpdateBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateBasePathMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateBasePathMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateBasePathMappingRequest instance.
 */
UpdateBasePathMappingRequestPrivate::UpdateBasePathMappingRequestPrivate(
    const UpdateBasePathMappingRequestPrivate &other, UpdateBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
