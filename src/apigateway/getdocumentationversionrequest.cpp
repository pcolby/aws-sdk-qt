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

#include "getdocumentationversionrequest.h"
#include "getdocumentationversionrequest_p.h"
#include "getdocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionRequest
 * \brief The GetDocumentationVersionRequest class provides an interface for APIGateway GetDocumentationVersion requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationVersionRequest::GetDocumentationVersionRequest(const GetDocumentationVersionRequest &other)
    : APIGatewayRequest(new GetDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationVersionRequest object.
 */
GetDocumentationVersionRequest::GetDocumentationVersionRequest()
    : APIGatewayRequest(new GetDocumentationVersionRequestPrivate(APIGatewayRequest::GetDocumentationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionRequestPrivate
 * \brief The GetDocumentationVersionRequestPrivate class provides private implementation for GetDocumentationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationVersionRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationVersionRequestPrivate::GetDocumentationVersionRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationVersionRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationVersionRequest
 * class' copy constructor.
 */
GetDocumentationVersionRequestPrivate::GetDocumentationVersionRequestPrivate(
    const GetDocumentationVersionRequestPrivate &other, GetDocumentationVersionRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
