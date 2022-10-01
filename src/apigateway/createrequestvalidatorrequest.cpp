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

#include "createrequestvalidatorrequest.h"
#include "createrequestvalidatorrequest_p.h"
#include "createrequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateRequestValidatorRequest
 * \brief The CreateRequestValidatorRequest class provides an interface for ApiGateway CreateRequestValidator requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createRequestValidator
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRequestValidatorRequest::CreateRequestValidatorRequest(const CreateRequestValidatorRequest &other)
    : ApiGatewayRequest(new CreateRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRequestValidatorRequest object.
 */
CreateRequestValidatorRequest::CreateRequestValidatorRequest()
    : ApiGatewayRequest(new CreateRequestValidatorRequestPrivate(ApiGatewayRequest::CreateRequestValidatorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRequestValidatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRequestValidatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new CreateRequestValidatorResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateRequestValidatorRequestPrivate
 * \brief The CreateRequestValidatorRequestPrivate class provides private implementation for CreateRequestValidatorRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateRequestValidatorRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateRequestValidatorRequestPrivate::CreateRequestValidatorRequestPrivate(
    const ApiGatewayRequest::Action action, CreateRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRequestValidatorRequest
 * class' copy constructor.
 */
CreateRequestValidatorRequestPrivate::CreateRequestValidatorRequestPrivate(
    const CreateRequestValidatorRequestPrivate &other, CreateRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
