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

#include "deletegatewayresponserequest.h"
#include "deletegatewayresponserequest_p.h"
#include "deletegatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteGatewayResponseRequest
 * \brief The DeleteGatewayResponseRequest class provides an interface for ApiGateway DeleteGatewayResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGatewayResponseRequest::DeleteGatewayResponseRequest(const DeleteGatewayResponseRequest &other)
    : ApiGatewayRequest(new DeleteGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGatewayResponseRequest object.
 */
DeleteGatewayResponseRequest::DeleteGatewayResponseRequest()
    : ApiGatewayRequest(new DeleteGatewayResponseRequestPrivate(ApiGatewayRequest::DeleteGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteGatewayResponseRequestPrivate
 * \brief The DeleteGatewayResponseRequestPrivate class provides private implementation for DeleteGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteGatewayResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteGatewayResponseRequestPrivate::DeleteGatewayResponseRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGatewayResponseRequest
 * class' copy constructor.
 */
DeleteGatewayResponseRequestPrivate::DeleteGatewayResponseRequestPrivate(
    const DeleteGatewayResponseRequestPrivate &other, DeleteGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
