// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusagerequest.h"
#include "getusagerequest_p.h"
#include "getusageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsageRequest
 * \brief The GetUsageRequest class provides an interface for ApiGateway GetUsage requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsage
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsageRequest::GetUsageRequest(const GetUsageRequest &other)
    : ApiGatewayRequest(new GetUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsageRequest object.
 */
GetUsageRequest::GetUsageRequest()
    : ApiGatewayRequest(new GetUsageRequestPrivate(ApiGatewayRequest::GetUsageAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetUsageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetUsageRequestPrivate
 * \brief The GetUsageRequestPrivate class provides private implementation for GetUsageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsageRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetUsageRequestPrivate::GetUsageRequestPrivate(
    const ApiGatewayRequest::Action action, GetUsageRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsageRequest
 * class' copy constructor.
 */
GetUsageRequestPrivate::GetUsageRequestPrivate(
    const GetUsageRequestPrivate &other, GetUsageRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
