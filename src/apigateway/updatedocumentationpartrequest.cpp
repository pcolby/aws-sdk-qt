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

#include "updatedocumentationpartrequest.h"
#include "updatedocumentationpartrequest_p.h"
#include "updatedocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationPartRequest
 * \brief The UpdateDocumentationPartRequest class provides an interface for ApiGateway UpdateDocumentationPart requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest(const UpdateDocumentationPartRequest &other)
    : ApiGatewayRequest(new UpdateDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDocumentationPartRequest object.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest()
    : ApiGatewayRequest(new UpdateDocumentationPartRequestPrivate(ApiGatewayRequest::UpdateDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationPartRequestPrivate
 * \brief The UpdateDocumentationPartRequestPrivate class provides private implementation for UpdateDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDocumentationPartRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentationPartRequest
 * class' copy constructor.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const UpdateDocumentationPartRequestPrivate &other, UpdateDocumentationPartRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
