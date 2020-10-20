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

#include "updateintegrationrequest.h"
#include "updateintegrationrequest_p.h"
#include "updateintegrationresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationRequest
 * \brief The UpdateIntegrationRequest class provides an interface for ApiGatewayV2 UpdateIntegration requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest(const UpdateIntegrationRequest &other)
    : ApiGatewayV2Request(new UpdateIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntegrationRequest object.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest()
    : ApiGatewayV2Request(new UpdateIntegrationRequestPrivate(ApiGatewayV2Request::UpdateIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationRequestPrivate
 * \brief The UpdateIntegrationRequestPrivate class provides private implementation for UpdateIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateIntegrationRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntegrationRequest
 * class' copy constructor.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const UpdateIntegrationRequestPrivate &other, UpdateIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
