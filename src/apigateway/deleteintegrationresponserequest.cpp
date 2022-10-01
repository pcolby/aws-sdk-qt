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

#include "deleteintegrationresponserequest.h"
#include "deleteintegrationresponserequest_p.h"
#include "deleteintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponseRequest
 * \brief The DeleteIntegrationResponseRequest class provides an interface for ApiGateway DeleteIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest(const DeleteIntegrationResponseRequest &other)
    : ApiGatewayRequest(new DeleteIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntegrationResponseRequest object.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest()
    : ApiGatewayRequest(new DeleteIntegrationResponseRequestPrivate(ApiGatewayRequest::DeleteIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponseRequestPrivate
 * \brief The DeleteIntegrationResponseRequestPrivate class provides private implementation for DeleteIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteIntegrationResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationResponseRequest
 * class' copy constructor.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const DeleteIntegrationResponseRequestPrivate &other, DeleteIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
