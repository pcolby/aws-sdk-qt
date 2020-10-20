/*
    Copyright 2013-2020 Paul Colby

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

#include "updateauthorizerrequest.h"
#include "updateauthorizerrequest_p.h"
#include "updateauthorizerresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateAuthorizerRequest
 * \brief The UpdateAuthorizerRequest class provides an interface for ApiGatewayV2 UpdateAuthorizer requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAuthorizerRequest::UpdateAuthorizerRequest(const UpdateAuthorizerRequest &other)
    : ApiGatewayV2Request(new UpdateAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAuthorizerRequest object.
 */
UpdateAuthorizerRequest::UpdateAuthorizerRequest()
    : ApiGatewayV2Request(new UpdateAuthorizerRequestPrivate(ApiGatewayV2Request::UpdateAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateAuthorizerRequestPrivate
 * \brief The UpdateAuthorizerRequestPrivate class provides private implementation for UpdateAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateAuthorizerRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateAuthorizerRequestPrivate::UpdateAuthorizerRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateAuthorizerRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAuthorizerRequest
 * class' copy constructor.
 */
UpdateAuthorizerRequestPrivate::UpdateAuthorizerRequestPrivate(
    const UpdateAuthorizerRequestPrivate &other, UpdateAuthorizerRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
