// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageplansrequest.h"
#include "getusageplansrequest_p.h"
#include "getusageplansresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlansRequest
 * \brief The GetUsagePlansRequest class provides an interface for ApiGateway GetUsagePlans requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlans
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlansRequest::GetUsagePlansRequest(const GetUsagePlansRequest &other)
    : ApiGatewayRequest(new GetUsagePlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlansRequest object.
 */
GetUsagePlansRequest::GetUsagePlansRequest()
    : ApiGatewayRequest(new GetUsagePlansRequestPrivate(ApiGatewayRequest::GetUsagePlansAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsagePlansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsagePlansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsagePlansRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlansResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlansRequestPrivate
 * \brief The GetUsagePlansRequestPrivate class provides private implementation for GetUsagePlansRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlansRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlansRequestPrivate::GetUsagePlansRequestPrivate(
    const ApiGatewayRequest::Action action, GetUsagePlansRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlansRequest
 * class' copy constructor.
 */
GetUsagePlansRequestPrivate::GetUsagePlansRequestPrivate(
    const GetUsagePlansRequestPrivate &other, GetUsagePlansRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
