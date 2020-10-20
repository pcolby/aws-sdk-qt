/*
    Copyright 2013-2020 Paul Colby

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

#include "updatebasepathmappingrequest.h"
#include "updatebasepathmappingrequest_p.h"
#include "updatebasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateBasePathMappingRequest
 * \brief The UpdateBasePathMappingRequest class provides an interface for APIGateway UpdateBasePathMapping requests.
 *
 * \inmodule QtAwsAPIGateway
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
 * Constructs a copy of \a other.
 */
UpdateBasePathMappingRequest::UpdateBasePathMappingRequest(const UpdateBasePathMappingRequest &other)
    : APIGatewayRequest(new UpdateBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBasePathMappingRequest object.
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
 * Returns a UpdateBasePathMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBasePathMappingResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::UpdateBasePathMappingRequestPrivate
 * \brief The UpdateBasePathMappingRequestPrivate class provides private implementation for UpdateBasePathMappingRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateBasePathMappingRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateBasePathMappingRequestPrivate::UpdateBasePathMappingRequestPrivate(
    const APIGatewayRequest::Action action, UpdateBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBasePathMappingRequest
 * class' copy constructor.
 */
UpdateBasePathMappingRequestPrivate::UpdateBasePathMappingRequestPrivate(
    const UpdateBasePathMappingRequestPrivate &other, UpdateBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
