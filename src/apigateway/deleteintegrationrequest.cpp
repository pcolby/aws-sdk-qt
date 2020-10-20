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

#include "deleteintegrationrequest.h"
#include "deleteintegrationrequest_p.h"
#include "deleteintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteIntegrationRequest
 * \brief The DeleteIntegrationRequest class provides an interface for APIGateway DeleteIntegration requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest(const DeleteIntegrationRequest &other)
    : APIGatewayRequest(new DeleteIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntegrationRequest object.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest()
    : APIGatewayRequest(new DeleteIntegrationRequestPrivate(APIGatewayRequest::DeleteIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteIntegrationRequestPrivate
 * \brief The DeleteIntegrationRequestPrivate class provides private implementation for DeleteIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteIntegrationRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const APIGatewayRequest::Action action, DeleteIntegrationRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationRequest
 * class' copy constructor.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const DeleteIntegrationRequestPrivate &other, DeleteIntegrationRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
