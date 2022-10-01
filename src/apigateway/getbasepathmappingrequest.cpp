// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbasepathmappingrequest.h"
#include "getbasepathmappingrequest_p.h"
#include "getbasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingRequest
 * \brief The GetBasePathMappingRequest class provides an interface for ApiGateway GetBasePathMapping requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getBasePathMapping
 */

/*!
 * Constructs a copy of \a other.
 */
GetBasePathMappingRequest::GetBasePathMappingRequest(const GetBasePathMappingRequest &other)
    : ApiGatewayRequest(new GetBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBasePathMappingRequest object.
 */
GetBasePathMappingRequest::GetBasePathMappingRequest()
    : ApiGatewayRequest(new GetBasePathMappingRequestPrivate(ApiGatewayRequest::GetBasePathMappingAction, this))
{

}

/*!
 * \reimp
 */
bool GetBasePathMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBasePathMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetBasePathMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetBasePathMappingRequestPrivate
 * \brief The GetBasePathMappingRequestPrivate class provides private implementation for GetBasePathMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetBasePathMappingRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetBasePathMappingRequestPrivate::GetBasePathMappingRequestPrivate(
    const ApiGatewayRequest::Action action, GetBasePathMappingRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBasePathMappingRequest
 * class' copy constructor.
 */
GetBasePathMappingRequestPrivate::GetBasePathMappingRequestPrivate(
    const GetBasePathMappingRequestPrivate &other, GetBasePathMappingRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
