/*
    Copyright 2013-2018 Paul Colby

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

#include "putintegrationrequest.h"
#include "putintegrationrequest_p.h"
#include "putintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutIntegrationRequest
 * \brief The PutIntegrationRequest class provides an interface for APIGateway PutIntegration requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntegrationRequest::PutIntegrationRequest(const PutIntegrationRequest &other)
    : APIGatewayRequest(new PutIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntegrationRequest object.
 */
PutIntegrationRequest::PutIntegrationRequest()
    : APIGatewayRequest(new PutIntegrationRequestPrivate(APIGatewayRequest::PutIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::PutIntegrationRequestPrivate
 * \brief The PutIntegrationRequestPrivate class provides private implementation for PutIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutIntegrationRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const APIGatewayRequest::Action action, PutIntegrationRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationRequest
 * class' copy constructor.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const PutIntegrationRequestPrivate &other, PutIntegrationRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
