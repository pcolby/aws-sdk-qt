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

#include "getdocumentationpartrequest.h"
#include "getdocumentationpartrequest_p.h"
#include "getdocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationPartRequest
 * \brief The GetDocumentationPartRequest class provides an interface for APIGateway GetDocumentationPart requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationPartRequest::GetDocumentationPartRequest(const GetDocumentationPartRequest &other)
    : APIGatewayRequest(new GetDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationPartRequest object.
 */
GetDocumentationPartRequest::GetDocumentationPartRequest()
    : APIGatewayRequest(new GetDocumentationPartRequestPrivate(APIGatewayRequest::GetDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetDocumentationPartRequestPrivate
 * \brief The GetDocumentationPartRequestPrivate class provides private implementation for GetDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationPartRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationPartRequestPrivate::GetDocumentationPartRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationPartRequest
 * class' copy constructor.
 */
GetDocumentationPartRequestPrivate::GetDocumentationPartRequestPrivate(
    const GetDocumentationPartRequestPrivate &other, GetDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
