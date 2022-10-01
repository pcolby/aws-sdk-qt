/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletebasepathmappingrequest.h"
#include "deletebasepathmappingrequest_p.h"
#include "deletebasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteBasePathMappingRequest
 * \brief The DeleteBasePathMappingRequest class provides an interface for ApiGateway DeleteBasePathMapping requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteBasePathMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBasePathMappingRequest::DeleteBasePathMappingRequest(const DeleteBasePathMappingRequest &other)
    : ApiGatewayRequest(new DeleteBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBasePathMappingRequest object.
 */
DeleteBasePathMappingRequest::DeleteBasePathMappingRequest()
    : ApiGatewayRequest(new DeleteBasePathMappingRequestPrivate(ApiGatewayRequest::DeleteBasePathMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBasePathMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBasePathMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBasePathMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteBasePathMappingRequestPrivate
 * \brief The DeleteBasePathMappingRequestPrivate class provides private implementation for DeleteBasePathMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteBasePathMappingRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteBasePathMappingRequestPrivate::DeleteBasePathMappingRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteBasePathMappingRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBasePathMappingRequest
 * class' copy constructor.
 */
DeleteBasePathMappingRequestPrivate::DeleteBasePathMappingRequestPrivate(
    const DeleteBasePathMappingRequestPrivate &other, DeleteBasePathMappingRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
