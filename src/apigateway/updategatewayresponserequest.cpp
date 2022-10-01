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

#include "updategatewayresponserequest.h"
#include "updategatewayresponserequest_p.h"
#include "updategatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseRequest
 * \brief The UpdateGatewayResponseRequest class provides an interface for ApiGateway UpdateGatewayResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGatewayResponseRequest::UpdateGatewayResponseRequest(const UpdateGatewayResponseRequest &other)
    : ApiGatewayRequest(new UpdateGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGatewayResponseRequest object.
 */
UpdateGatewayResponseRequest::UpdateGatewayResponseRequest()
    : ApiGatewayRequest(new UpdateGatewayResponseRequestPrivate(ApiGatewayRequest::UpdateGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseRequestPrivate
 * \brief The UpdateGatewayResponseRequestPrivate class provides private implementation for UpdateGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateGatewayResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateGatewayResponseRequestPrivate::UpdateGatewayResponseRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewayResponseRequest
 * class' copy constructor.
 */
UpdateGatewayResponseRequestPrivate::UpdateGatewayResponseRequestPrivate(
    const UpdateGatewayResponseRequestPrivate &other, UpdateGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
