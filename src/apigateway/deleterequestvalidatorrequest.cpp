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

#include "deleterequestvalidatorrequest.h"
#include "deleterequestvalidatorrequest_p.h"
#include "deleterequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteRequestValidatorRequest
 * \brief The DeleteRequestValidatorRequest class provides an interface for APIGateway DeleteRequestValidator requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteRequestValidator
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRequestValidatorRequest::DeleteRequestValidatorRequest(const DeleteRequestValidatorRequest &other)
    : APIGatewayRequest(new DeleteRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRequestValidatorRequest object.
 */
DeleteRequestValidatorRequest::DeleteRequestValidatorRequest()
    : APIGatewayRequest(new DeleteRequestValidatorRequestPrivate(APIGatewayRequest::DeleteRequestValidatorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRequestValidatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRequestValidatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRequestValidatorResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteRequestValidatorRequestPrivate
 * \brief The DeleteRequestValidatorRequestPrivate class provides private implementation for DeleteRequestValidatorRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteRequestValidatorRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteRequestValidatorRequestPrivate::DeleteRequestValidatorRequestPrivate(
    const APIGatewayRequest::Action action, DeleteRequestValidatorRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRequestValidatorRequest
 * class' copy constructor.
 */
DeleteRequestValidatorRequestPrivate::DeleteRequestValidatorRequestPrivate(
    const DeleteRequestValidatorRequestPrivate &other, DeleteRequestValidatorRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
