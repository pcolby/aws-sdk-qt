/*
    Copyright 2013-2018 Paul Colby

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

#include "getdocumentationversionsrequest.h"
#include "getdocumentationversionsrequest_p.h"
#include "getdocumentationversionsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionsRequest
 * \brief The GetDocumentationVersionsRequest class provides an interface for APIGateway GetDocumentationVersions requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest(const GetDocumentationVersionsRequest &other)
    : APIGatewayRequest(new GetDocumentationVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationVersionsRequest object.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest()
    : APIGatewayRequest(new GetDocumentationVersionsRequestPrivate(APIGatewayRequest::GetDocumentationVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionsRequestPrivate
 * \brief The GetDocumentationVersionsRequestPrivate class provides private implementation for GetDocumentationVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationVersionsRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationVersionsRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationVersionsRequest
 * class' copy constructor.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const GetDocumentationVersionsRequestPrivate &other, GetDocumentationVersionsRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
