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

#include "deletedocumentationpartrequest.h"
#include "deletedocumentationpartrequest_p.h"
#include "deletedocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationPartRequest
 * \brief The DeleteDocumentationPartRequest class provides an interface for ApiGateway DeleteDocumentationPart requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDocumentationPartRequest::DeleteDocumentationPartRequest(const DeleteDocumentationPartRequest &other)
    : ApiGatewayRequest(new DeleteDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDocumentationPartRequest object.
 */
DeleteDocumentationPartRequest::DeleteDocumentationPartRequest()
    : ApiGatewayRequest(new DeleteDocumentationPartRequestPrivate(ApiGatewayRequest::DeleteDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationPartRequestPrivate
 * \brief The DeleteDocumentationPartRequestPrivate class provides private implementation for DeleteDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDocumentationPartRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteDocumentationPartRequestPrivate::DeleteDocumentationPartRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentationPartRequest
 * class' copy constructor.
 */
DeleteDocumentationPartRequestPrivate::DeleteDocumentationPartRequestPrivate(
    const DeleteDocumentationPartRequestPrivate &other, DeleteDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
