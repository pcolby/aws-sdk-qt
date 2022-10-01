// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsdktypesrequest.h"
#include "getsdktypesrequest_p.h"
#include "getsdktypesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetSdkTypesRequest
 * \brief The GetSdkTypesRequest class provides an interface for ApiGateway GetSdkTypes requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getSdkTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSdkTypesRequest::GetSdkTypesRequest(const GetSdkTypesRequest &other)
    : ApiGatewayRequest(new GetSdkTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSdkTypesRequest object.
 */
GetSdkTypesRequest::GetSdkTypesRequest()
    : ApiGatewayRequest(new GetSdkTypesRequestPrivate(ApiGatewayRequest::GetSdkTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSdkTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSdkTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSdkTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkTypesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetSdkTypesRequestPrivate
 * \brief The GetSdkTypesRequestPrivate class provides private implementation for GetSdkTypesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetSdkTypesRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetSdkTypesRequestPrivate::GetSdkTypesRequestPrivate(
    const ApiGatewayRequest::Action action, GetSdkTypesRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSdkTypesRequest
 * class' copy constructor.
 */
GetSdkTypesRequestPrivate::GetSdkTypesRequestPrivate(
    const GetSdkTypesRequestPrivate &other, GetSdkTypesRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
