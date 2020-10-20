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

#include "createdocumentationversionrequest.h"
#include "createdocumentationversionrequest_p.h"
#include "createdocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateDocumentationVersionRequest
 * \brief The CreateDocumentationVersionRequest class provides an interface for APIGateway CreateDocumentationVersion requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createDocumentationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDocumentationVersionRequest::CreateDocumentationVersionRequest(const CreateDocumentationVersionRequest &other)
    : APIGatewayRequest(new CreateDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDocumentationVersionRequest object.
 */
CreateDocumentationVersionRequest::CreateDocumentationVersionRequest()
    : APIGatewayRequest(new CreateDocumentationVersionRequestPrivate(APIGatewayRequest::CreateDocumentationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDocumentationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDocumentationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::CreateDocumentationVersionRequestPrivate
 * \brief The CreateDocumentationVersionRequestPrivate class provides private implementation for CreateDocumentationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateDocumentationVersionRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
CreateDocumentationVersionRequestPrivate::CreateDocumentationVersionRequestPrivate(
    const APIGatewayRequest::Action action, CreateDocumentationVersionRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentationVersionRequest
 * class' copy constructor.
 */
CreateDocumentationVersionRequestPrivate::CreateDocumentationVersionRequestPrivate(
    const CreateDocumentationVersionRequestPrivate &other, CreateDocumentationVersionRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
