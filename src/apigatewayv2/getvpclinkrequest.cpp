// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinkrequest.h"
#include "getvpclinkrequest_p.h"
#include "getvpclinkresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinkRequest
 * \brief The GetVpcLinkRequest class provides an interface for ApiGatewayV2 GetVpcLink requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcLinkRequest::GetVpcLinkRequest(const GetVpcLinkRequest &other)
    : ApiGatewayV2Request(new GetVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcLinkRequest object.
 */
GetVpcLinkRequest::GetVpcLinkRequest()
    : ApiGatewayV2Request(new GetVpcLinkRequestPrivate(ApiGatewayV2Request::GetVpcLinkAction, this))
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
 * \class QtAws::ApiGatewayV2::GetVpcLinkRequestPrivate
 * \brief The GetVpcLinkRequestPrivate class provides private implementation for GetVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetVpcLinkRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetVpcLinkRequestPrivate::GetVpcLinkRequestPrivate(
    const ApiGatewayV2Request::Action action, GetVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
