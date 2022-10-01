// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevpclinkrequest.h"
#include "updatevpclinkrequest_p.h"
#include "updatevpclinkresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateVpcLinkRequest
 * \brief The UpdateVpcLinkRequest class provides an interface for ApiGatewayV2 UpdateVpcLink requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVpcLinkRequest::UpdateVpcLinkRequest(const UpdateVpcLinkRequest &other)
    : ApiGatewayV2Request(new UpdateVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVpcLinkRequest object.
 */
UpdateVpcLinkRequest::UpdateVpcLinkRequest()
    : ApiGatewayV2Request(new UpdateVpcLinkRequestPrivate(ApiGatewayV2Request::UpdateVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateVpcLinkRequestPrivate
 * \brief The UpdateVpcLinkRequestPrivate class provides private implementation for UpdateVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateVpcLinkRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateVpcLinkRequestPrivate::UpdateVpcLinkRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVpcLinkRequest
 * class' copy constructor.
 */
UpdateVpcLinkRequestPrivate::UpdateVpcLinkRequestPrivate(
    const UpdateVpcLinkRequestPrivate &other, UpdateVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
