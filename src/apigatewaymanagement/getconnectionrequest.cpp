// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
