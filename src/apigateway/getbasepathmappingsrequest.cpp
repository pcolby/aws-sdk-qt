// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbasepathmappingsrequest.h"
#include "getbasepathmappingsrequest_p.h"
#include "getbasepathmappingsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingsRequest
 * \brief The GetBasePathMappingsRequest class provides an interface for ApiGateway GetBasePathMappings requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getBasePathMappings
 */

/*!
 * Constructs a copy of \a other.
 */
GetBasePathMappingsRequest::GetBasePathMappingsRequest(const GetBasePathMappingsRequest &other)
    : ApiGatewayRequest(new GetBasePathMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBasePathMappingsRequest object.
 */
GetBasePathMappingsRequest::GetBasePathMappingsRequest()
    : ApiGatewayRequest(new GetBasePathMappingsRequestPrivate(ApiGatewayRequest::GetBasePathMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBasePathMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBasePathMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBasePathMappingsRequest::response(QNetworkReply * const reply) const
{
    return new GetBasePathMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingsRequestPrivate
 * \brief The GetBasePathMappingsRequestPrivate class provides private implementation for GetBasePathMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetBasePathMappingsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetBasePathMappingsRequestPrivate::GetBasePathMappingsRequestPrivate(
    const ApiGatewayRequest::Action action, GetBasePathMappingsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBasePathMappingsRequest
 * class' copy constructor.
 */
GetBasePathMappingsRequestPrivate::GetBasePathMappingsRequestPrivate(
    const GetBasePathMappingsRequestPrivate &other, GetBasePathMappingsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
