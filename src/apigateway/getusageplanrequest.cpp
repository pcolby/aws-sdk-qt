// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageplanrequest.h"
#include "getusageplanrequest_p.h"
#include "getusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanRequest
 * \brief The GetUsagePlanRequest class provides an interface for ApiGateway GetUsagePlan requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlan
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlanRequest::GetUsagePlanRequest(const GetUsagePlanRequest &other)
    : ApiGatewayRequest(new GetUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlanRequest object.
 */
GetUsagePlanRequest::GetUsagePlanRequest()
    : ApiGatewayRequest(new GetUsagePlanRequestPrivate(ApiGatewayRequest::GetUsagePlanAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsagePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsagePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanRequestPrivate
 * \brief The GetUsagePlanRequestPrivate class provides private implementation for GetUsagePlanRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlanRequestPrivate::GetUsagePlanRequestPrivate(
    const ApiGatewayRequest::Action action, GetUsagePlanRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanRequest
 * class' copy constructor.
 */
GetUsagePlanRequestPrivate::GetUsagePlanRequestPrivate(
    const GetUsagePlanRequestPrivate &other, GetUsagePlanRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
