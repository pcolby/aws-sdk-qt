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

#include "updatemethodrequest.h"
#include "updatemethodrequest_p.h"
#include "updatemethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateMethodRequest
 * \brief The UpdateMethodRequest class provides an interface for APIGateway UpdateMethod requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateMethod
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMethodRequest::UpdateMethodRequest(const UpdateMethodRequest &other)
    : APIGatewayRequest(new UpdateMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMethodRequest object.
 */
UpdateMethodRequest::UpdateMethodRequest()
    : APIGatewayRequest(new UpdateMethodRequestPrivate(APIGatewayRequest::UpdateMethodAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMethodRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMethodResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::UpdateMethodRequestPrivate
 * \brief The UpdateMethodRequestPrivate class provides private implementation for UpdateMethodRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateMethodRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateMethodRequestPrivate::UpdateMethodRequestPrivate(
    const APIGatewayRequest::Action action, UpdateMethodRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMethodRequest
 * class' copy constructor.
 */
UpdateMethodRequestPrivate::UpdateMethodRequestPrivate(
    const UpdateMethodRequestPrivate &other, UpdateMethodRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
