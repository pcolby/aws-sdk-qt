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

#include "createrestapirequest.h"
#include "createrestapirequest_p.h"
#include "createrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateRestApiRequest
 * \brief The CreateRestApiRequest class provides an interface for APIGateway CreateRestApi requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRestApiRequest::CreateRestApiRequest(const CreateRestApiRequest &other)
    : APIGatewayRequest(new CreateRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRestApiRequest object.
 */
CreateRestApiRequest::CreateRestApiRequest()
    : APIGatewayRequest(new CreateRestApiRequestPrivate(APIGatewayRequest::CreateRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRestApiRequest::response(QNetworkReply * const reply) const
{
    return new CreateRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::CreateRestApiRequestPrivate
 * \brief The CreateRestApiRequestPrivate class provides private implementation for CreateRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateRestApiRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
CreateRestApiRequestPrivate::CreateRestApiRequestPrivate(
    const APIGatewayRequest::Action action, CreateRestApiRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRestApiRequest
 * class' copy constructor.
 */
CreateRestApiRequestPrivate::CreateRestApiRequestPrivate(
    const CreateRestApiRequestPrivate &other, CreateRestApiRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
