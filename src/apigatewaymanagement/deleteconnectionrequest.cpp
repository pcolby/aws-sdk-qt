// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectionrequest.h"
#include "deleteconnectionrequest_p.h"
#include "deleteconnectionresponse.h"
#include "apigatewaymanagementrequest_p.h"

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::DeleteConnectionRequest
 * \brief The DeleteConnectionRequest class provides an interface for ApiGatewayManagement DeleteConnection requests.
 *
 * \inmodule QtAwsApiGatewayManagement
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 *
 * \sa ApiGatewayManagementClient::deleteConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectionRequest::DeleteConnectionRequest(const DeleteConnectionRequest &other)
    : ApiGatewayManagementRequest(new DeleteConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectionRequest object.
 */
DeleteConnectionRequest::DeleteConnectionRequest()
    : ApiGatewayManagementRequest(new DeleteConnectionRequestPrivate(ApiGatewayManagementRequest::DeleteConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayManagement::DeleteConnectionRequestPrivate
 * \brief The DeleteConnectionRequestPrivate class provides private implementation for DeleteConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a DeleteConnectionRequestPrivate object for ApiGatewayManagement \a action,
 * with public implementation \a q.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const ApiGatewayManagementRequest::Action action, DeleteConnectionRequest * const q)
    : ApiGatewayManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectionRequest
 * class' copy constructor.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const DeleteConnectionRequestPrivate &other, DeleteConnectionRequest * const q)
    : ApiGatewayManagementRequestPrivate(other, q)
{

}

} // namespace ApiGatewayManagement
} // namespace QtAws
