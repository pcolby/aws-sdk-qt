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

#include "getconnectionrequest.h"
#include "getconnectionrequest_p.h"
#include "getconnectionresponse.h"
#include "apigatewaymanagementrequest_p.h"

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::GetConnectionRequest
 * \brief The GetConnectionRequest class provides an interface for ApiGatewayManagement GetConnection requests.
 *
 * \inmodule QtAwsApiGatewayManagement
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 *
 * \sa ApiGatewayManagementClient::getConnection
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectionRequest::GetConnectionRequest(const GetConnectionRequest &other)
    : ApiGatewayManagementRequest(new GetConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectionRequest object.
 */
GetConnectionRequest::GetConnectionRequest()
    : ApiGatewayManagementRequest(new GetConnectionRequestPrivate(ApiGatewayManagementRequest::GetConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayManagement::GetConnectionRequestPrivate
 * \brief The GetConnectionRequestPrivate class provides private implementation for GetConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a GetConnectionRequestPrivate object for ApiGatewayManagement \a action,
 * with public implementation \a q.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const ApiGatewayManagementRequest::Action action, GetConnectionRequest * const q)
    : ApiGatewayManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionRequest
 * class' copy constructor.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const GetConnectionRequestPrivate &other, GetConnectionRequest * const q)
    : ApiGatewayManagementRequestPrivate(other, q)
{

}

} // namespace ApiGatewayManagement
} // namespace QtAws
