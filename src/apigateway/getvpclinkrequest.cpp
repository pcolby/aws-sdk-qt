// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinkrequest.h"
#include "getvpclinkrequest_p.h"
#include "getvpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetVpcLinkRequest
 * \brief The GetVpcLinkRequest class provides an interface for ApiGateway GetVpcLink requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcLinkRequest::GetVpcLinkRequest(const GetVpcLinkRequest &other)
    : ApiGatewayRequest(new GetVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcLinkRequest object.
 */
GetVpcLinkRequest::GetVpcLinkRequest()
    : ApiGatewayRequest(new GetVpcLinkRequestPrivate(ApiGatewayRequest::GetVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool GetVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetVpcLinkRequestPrivate
 * \brief The GetVpcLinkRequestPrivate class provides private implementation for GetVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetVpcLinkRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetVpcLinkRequestPrivate::GetVpcLinkRequestPrivate(
    const ApiGatewayRequest::Action action, GetVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVpcLinkRequest
 * class' copy constructor.
 */
GetVpcLinkRequestPrivate::GetVpcLinkRequestPrivate(
    const GetVpcLinkRequestPrivate &other, GetVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
