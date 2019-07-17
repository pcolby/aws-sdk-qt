/*
    Copyright 2013-2019 Paul Colby

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
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateIntegrationRequest
 * \brief The UpdateIntegrationRequest class provides an interface for APIGateway UpdateIntegration requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest(const UpdateIntegrationRequest &other)
    : APIGatewayRequest(new UpdateIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntegrationRequest object.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest()
    : APIGatewayRequest(new UpdateIntegrationRequestPrivate(APIGatewayRequest::UpdateIntegrationAction, this))
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
 * \class QtAws::APIGateway::UpdateIntegrationRequestPrivate
 * \brief The UpdateIntegrationRequestPrivate class provides private implementation for UpdateIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateIntegrationRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const APIGatewayRequest::Action action, UpdateIntegrationRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
