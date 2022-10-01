// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinksrequest.h"
#include "getvpclinksrequest_p.h"
#include "getvpclinksresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetVpcLinksRequest
 * \brief The GetVpcLinksRequest class provides an interface for ApiGateway GetVpcLinks requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getVpcLinks
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcLinksRequest::GetVpcLinksRequest(const GetVpcLinksRequest &other)
    : ApiGatewayRequest(new GetVpcLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcLinksRequest object.
 */
GetVpcLinksRequest::GetVpcLinksRequest()
    : ApiGatewayRequest(new GetVpcLinksRequestPrivate(ApiGatewayRequest::GetVpcLinksAction, this))
{

}

/*!
 * \reimp
 */
bool GetVpcLinksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVpcLinksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcLinksRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcLinksResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetVpcLinksRequestPrivate
 * \brief The GetVpcLinksRequestPrivate class provides private implementation for GetVpcLinksRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetVpcLinksRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const ApiGatewayRequest::Action action, GetVpcLinksRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVpcLinksRequest
 * class' copy constructor.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const GetVpcLinksRequestPrivate &other, GetVpcLinksRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
