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

#include "deletedocumentationversionrequest.h"
#include "deletedocumentationversionrequest_p.h"
#include "deletedocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationVersionRequest
 * \brief The DeleteDocumentationVersionRequest class provides an interface for ApiGateway DeleteDocumentationVersion requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDocumentationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDocumentationVersionRequest::DeleteDocumentationVersionRequest(const DeleteDocumentationVersionRequest &other)
    : ApiGatewayRequest(new DeleteDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDocumentationVersionRequest object.
 */
DeleteDocumentationVersionRequest::DeleteDocumentationVersionRequest()
    : ApiGatewayRequest(new DeleteDocumentationVersionRequestPrivate(ApiGatewayRequest::DeleteDocumentationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDocumentationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDocumentationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationVersionRequestPrivate
 * \brief The DeleteDocumentationVersionRequestPrivate class provides private implementation for DeleteDocumentationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDocumentationVersionRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteDocumentationVersionRequestPrivate::DeleteDocumentationVersionRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentationVersionRequest
 * class' copy constructor.
 */
DeleteDocumentationVersionRequestPrivate::DeleteDocumentationVersionRequestPrivate(
    const DeleteDocumentationVersionRequestPrivate &other, DeleteDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
