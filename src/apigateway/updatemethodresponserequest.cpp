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

#include "updatemethodresponserequest.h"
#include "updatemethodresponserequest_p.h"
#include "updatemethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateMethodResponseRequest
 * \brief The UpdateMethodResponseRequest class provides an interface for APIGateway UpdateMethodResponse requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateMethodResponse
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMethodResponseRequest::UpdateMethodResponseRequest(const UpdateMethodResponseRequest &other)
    : APIGatewayRequest(new UpdateMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMethodResponseRequest object.
 */
UpdateMethodResponseRequest::UpdateMethodResponseRequest()
    : APIGatewayRequest(new UpdateMethodResponseRequestPrivate(APIGatewayRequest::UpdateMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMethodResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMethodResponseResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::UpdateMethodResponseRequestPrivate
 * \brief The UpdateMethodResponseRequestPrivate class provides private implementation for UpdateMethodResponseRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateMethodResponseRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateMethodResponseRequestPrivate::UpdateMethodResponseRequestPrivate(
    const APIGatewayRequest::Action action, UpdateMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMethodResponseRequest
 * class' copy constructor.
 */
UpdateMethodResponseRequestPrivate::UpdateMethodResponseRequestPrivate(
    const UpdateMethodResponseRequestPrivate &other, UpdateMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
