// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsdkrequest.h"
#include "getsdkrequest_p.h"
#include "getsdkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetSdkRequest
 * \brief The GetSdkRequest class provides an interface for ApiGateway GetSdk requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getSdk
 */

/*!
 * Constructs a copy of \a other.
 */
GetSdkRequest::GetSdkRequest(const GetSdkRequest &other)
    : ApiGatewayRequest(new GetSdkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSdkRequest object.
 */
GetSdkRequest::GetSdkRequest()
    : ApiGatewayRequest(new GetSdkRequestPrivate(ApiGatewayRequest::GetSdkAction, this))
{

}

/*!
 * \reimp
 */
bool GetSdkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSdkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSdkRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetSdkRequestPrivate
 * \brief The GetSdkRequestPrivate class provides private implementation for GetSdkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetSdkRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetSdkRequestPrivate::GetSdkRequestPrivate(
    const ApiGatewayRequest::Action action, GetSdkRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSdkRequest
 * class' copy constructor.
 */
GetSdkRequestPrivate::GetSdkRequestPrivate(
    const GetSdkRequestPrivate &other, GetSdkRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
