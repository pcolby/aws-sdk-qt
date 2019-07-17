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

#include "createdocumentationpartrequest.h"
#include "createdocumentationpartrequest_p.h"
#include "createdocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateDocumentationPartRequest
 * \brief The CreateDocumentationPartRequest class provides an interface for APIGateway CreateDocumentationPart requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDocumentationPartRequest::CreateDocumentationPartRequest(const CreateDocumentationPartRequest &other)
    : APIGatewayRequest(new CreateDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDocumentationPartRequest object.
 */
CreateDocumentationPartRequest::CreateDocumentationPartRequest()
    : APIGatewayRequest(new CreateDocumentationPartRequestPrivate(APIGatewayRequest::CreateDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::CreateDocumentationPartRequestPrivate
 * \brief The CreateDocumentationPartRequestPrivate class provides private implementation for CreateDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateDocumentationPartRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
CreateDocumentationPartRequestPrivate::CreateDocumentationPartRequestPrivate(
    const APIGatewayRequest::Action action, CreateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentationPartRequest
 * class' copy constructor.
 */
CreateDocumentationPartRequestPrivate::CreateDocumentationPartRequestPrivate(
    const CreateDocumentationPartRequestPrivate &other, CreateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
