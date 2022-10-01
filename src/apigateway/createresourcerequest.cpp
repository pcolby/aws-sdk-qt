// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcerequest.h"
#include "createresourcerequest_p.h"
#include "createresourceresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateResourceRequest
 * \brief The CreateResourceRequest class provides an interface for ApiGateway CreateResource requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createResource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceRequest::CreateResourceRequest(const CreateResourceRequest &other)
    : ApiGatewayRequest(new CreateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceRequest object.
 */
CreateResourceRequest::CreateResourceRequest()
    : ApiGatewayRequest(new CreateResourceRequestPrivate(ApiGatewayRequest::CreateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateResourceRequestPrivate
 * \brief The CreateResourceRequestPrivate class provides private implementation for CreateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateResourceRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const ApiGatewayRequest::Action action, CreateResourceRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceRequest
 * class' copy constructor.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const CreateResourceRequestPrivate &other, CreateResourceRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
