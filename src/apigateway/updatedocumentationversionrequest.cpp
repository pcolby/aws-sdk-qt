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

#include "updatedocumentationversionrequest.h"
#include "updatedocumentationversionrequest_p.h"
#include "updatedocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationVersionRequest
 * \brief The UpdateDocumentationVersionRequest class provides an interface for ApiGateway UpdateDocumentationVersion requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDocumentationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDocumentationVersionRequest::UpdateDocumentationVersionRequest(const UpdateDocumentationVersionRequest &other)
    : ApiGatewayRequest(new UpdateDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDocumentationVersionRequest object.
 */
UpdateDocumentationVersionRequest::UpdateDocumentationVersionRequest()
    : ApiGatewayRequest(new UpdateDocumentationVersionRequestPrivate(ApiGatewayRequest::UpdateDocumentationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDocumentationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDocumentationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationVersionRequestPrivate
 * \brief The UpdateDocumentationVersionRequestPrivate class provides private implementation for UpdateDocumentationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDocumentationVersionRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateDocumentationVersionRequestPrivate::UpdateDocumentationVersionRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentationVersionRequest
 * class' copy constructor.
 */
UpdateDocumentationVersionRequestPrivate::UpdateDocumentationVersionRequestPrivate(
    const UpdateDocumentationVersionRequestPrivate &other, UpdateDocumentationVersionRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
