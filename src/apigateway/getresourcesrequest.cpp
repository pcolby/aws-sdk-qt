// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcesrequest.h"
#include "getresourcesrequest_p.h"
#include "getresourcesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetResourcesRequest
 * \brief The GetResourcesRequest class provides an interface for ApiGateway GetResources requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getResources
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcesRequest::GetResourcesRequest(const GetResourcesRequest &other)
    : ApiGatewayRequest(new GetResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcesRequest object.
 */
GetResourcesRequest::GetResourcesRequest()
    : ApiGatewayRequest(new GetResourcesRequestPrivate(ApiGatewayRequest::GetResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetResourcesRequestPrivate
 * \brief The GetResourcesRequestPrivate class provides private implementation for GetResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetResourcesRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const ApiGatewayRequest::Action action, GetResourcesRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcesRequest
 * class' copy constructor.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const GetResourcesRequestPrivate &other, GetResourcesRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
