/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
