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

#include "updaterequestvalidatorrequest.h"
#include "updaterequestvalidatorrequest_p.h"
#include "updaterequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateRequestValidatorRequest
 * \brief The UpdateRequestValidatorRequest class provides an interface for APIGateway UpdateRequestValidator requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateRequestValidator
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRequestValidatorRequest::UpdateRequestValidatorRequest(const UpdateRequestValidatorRequest &other)
    : APIGatewayRequest(new UpdateRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRequestValidatorRequest object.
 */
UpdateRequestValidatorRequest::UpdateRequestValidatorRequest()
    : APIGatewayRequest(new UpdateRequestValidatorRequestPrivate(APIGatewayRequest::UpdateRequestValidatorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRequestValidatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRequestValidatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRequestValidatorResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::UpdateRequestValidatorRequestPrivate
 * \brief The UpdateRequestValidatorRequestPrivate class provides private implementation for UpdateRequestValidatorRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateRequestValidatorRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateRequestValidatorRequestPrivate::UpdateRequestValidatorRequestPrivate(
    const APIGatewayRequest::Action action, UpdateRequestValidatorRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRequestValidatorRequest
 * class' copy constructor.
 */
UpdateRequestValidatorRequestPrivate::UpdateRequestValidatorRequestPrivate(
    const UpdateRequestValidatorRequestPrivate &other, UpdateRequestValidatorRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
