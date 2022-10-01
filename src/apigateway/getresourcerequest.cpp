// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcerequest.h"
#include "getresourcerequest_p.h"
#include "getresourceresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetResourceRequest
 * \brief The GetResourceRequest class provides an interface for ApiGateway GetResource requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getResource
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceRequest::GetResourceRequest(const GetResourceRequest &other)
    : ApiGatewayRequest(new GetResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceRequest object.
 */
GetResourceRequest::GetResourceRequest()
    : ApiGatewayRequest(new GetResourceRequestPrivate(ApiGatewayRequest::GetResourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetResourceRequestPrivate
 * \brief The GetResourceRequestPrivate class provides private implementation for GetResourceRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetResourceRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetResourceRequestPrivate::GetResourceRequestPrivate(
    const ApiGatewayRequest::Action action, GetResourceRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceRequest
 * class' copy constructor.
 */
GetResourceRequestPrivate::GetResourceRequestPrivate(
    const GetResourceRequestPrivate &other, GetResourceRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
