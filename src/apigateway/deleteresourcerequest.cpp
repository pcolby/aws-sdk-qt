// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcerequest.h"
#include "deleteresourcerequest_p.h"
#include "deleteresourceresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteResourceRequest
 * \brief The DeleteResourceRequest class provides an interface for ApiGateway DeleteResource requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteResource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceRequest::DeleteResourceRequest(const DeleteResourceRequest &other)
    : ApiGatewayRequest(new DeleteResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceRequest object.
 */
DeleteResourceRequest::DeleteResourceRequest()
    : ApiGatewayRequest(new DeleteResourceRequestPrivate(ApiGatewayRequest::DeleteResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteResourceRequestPrivate
 * \brief The DeleteResourceRequestPrivate class provides private implementation for DeleteResourceRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteResourceRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteResourceRequestPrivate::DeleteResourceRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteResourceRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceRequest
 * class' copy constructor.
 */
DeleteResourceRequestPrivate::DeleteResourceRequestPrivate(
    const DeleteResourceRequestPrivate &other, DeleteResourceRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
