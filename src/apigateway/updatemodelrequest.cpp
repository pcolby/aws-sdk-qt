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

#include "updatemodelrequest.h"
#include "updatemodelrequest_p.h"
#include "updatemodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateModelRequest
 * \brief The UpdateModelRequest class provides an interface for ApiGateway UpdateModel requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelRequest::UpdateModelRequest(const UpdateModelRequest &other)
    : ApiGatewayRequest(new UpdateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelRequest object.
 */
UpdateModelRequest::UpdateModelRequest()
    : ApiGatewayRequest(new UpdateModelRequestPrivate(ApiGatewayRequest::UpdateModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateModelRequestPrivate
 * \brief The UpdateModelRequestPrivate class provides private implementation for UpdateModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateModelRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateModelRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelRequest
 * class' copy constructor.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const UpdateModelRequestPrivate &other, UpdateModelRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
