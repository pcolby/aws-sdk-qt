// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinksrequest.h"
#include "getvpclinksrequest_p.h"
#include "getvpclinksresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinksRequest
 * \brief The GetVpcLinksRequest class provides an interface for ApiGatewayV2 GetVpcLinks requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getVpcLinks
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcLinksRequest::GetVpcLinksRequest(const GetVpcLinksRequest &other)
    : ApiGatewayV2Request(new GetVpcLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcLinksRequest object.
 */
GetVpcLinksRequest::GetVpcLinksRequest()
    : ApiGatewayV2Request(new GetVpcLinksRequestPrivate(ApiGatewayV2Request::GetVpcLinksAction, this))
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
 * \class QtAws::ApiGatewayV2::GetVpcLinksRequestPrivate
 * \brief The GetVpcLinksRequestPrivate class provides private implementation for GetVpcLinksRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetVpcLinksRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const ApiGatewayV2Request::Action action, GetVpcLinksRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
