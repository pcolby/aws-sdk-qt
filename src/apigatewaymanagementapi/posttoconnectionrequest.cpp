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

#include "posttoconnectionrequest.h"
#include "posttoconnectionrequest_p.h"
#include "posttoconnectionresponse.h"
#include "apigatewaymanagementrequest_p.h"

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::PostToConnectionRequest
 * \brief The PostToConnectionRequest class provides an interface for ApiGatewayManagement PostToConnection requests.
 *
 * \inmodule QtAwsApiGatewayManagement
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 *
 * \sa ApiGatewayManagementClient::postToConnection
 */

/*!
 * Constructs a copy of \a other.
 */
PostToConnectionRequest::PostToConnectionRequest(const PostToConnectionRequest &other)
    : ApiGatewayManagementRequest(new PostToConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PostToConnectionRequest object.
 */
PostToConnectionRequest::PostToConnectionRequest()
    : ApiGatewayManagementRequest(new PostToConnectionRequestPrivate(ApiGatewayManagementRequest::PostToConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool PostToConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PostToConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PostToConnectionRequest::response(QNetworkReply * const reply) const
{
    return new PostToConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayManagement::PostToConnectionRequestPrivate
 * \brief The PostToConnectionRequestPrivate class provides private implementation for PostToConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a PostToConnectionRequestPrivate object for ApiGatewayManagement \a action,
 * with public implementation \a q.
 */
PostToConnectionRequestPrivate::PostToConnectionRequestPrivate(
    const ApiGatewayManagementRequest::Action action, PostToConnectionRequest * const q)
    : ApiGatewayManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PostToConnectionRequest
 * class' copy constructor.
 */
PostToConnectionRequestPrivate::PostToConnectionRequestPrivate(
    const PostToConnectionRequestPrivate &other, PostToConnectionRequest * const q)
    : ApiGatewayManagementRequestPrivate(other, q)
{

}

} // namespace ApiGatewayManagement
} // namespace QtAws
