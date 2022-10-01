// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevpclinkrequest.h"
#include "updatevpclinkrequest_p.h"
#include "updatevpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateVpcLinkRequest
 * \brief The UpdateVpcLinkRequest class provides an interface for ApiGateway UpdateVpcLink requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVpcLinkRequest::UpdateVpcLinkRequest(const UpdateVpcLinkRequest &other)
    : ApiGatewayRequest(new UpdateVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVpcLinkRequest object.
 */
UpdateVpcLinkRequest::UpdateVpcLinkRequest()
    : ApiGatewayRequest(new UpdateVpcLinkRequestPrivate(ApiGatewayRequest::UpdateVpcLinkAction, this))
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
 * \class QtAws::ApiGateway::UpdateVpcLinkRequestPrivate
 * \brief The UpdateVpcLinkRequestPrivate class provides private implementation for UpdateVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateVpcLinkRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateVpcLinkRequestPrivate::UpdateVpcLinkRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
