// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
