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

#include "getdocumentationpartsrequest.h"
#include "getdocumentationpartsrequest_p.h"
#include "getdocumentationpartsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationPartsRequest
 * \brief The GetDocumentationPartsRequest class provides an interface for APIGateway GetDocumentationParts requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationParts
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest(const GetDocumentationPartsRequest &other)
    : APIGatewayRequest(new GetDocumentationPartsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationPartsRequest object.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest()
    : APIGatewayRequest(new GetDocumentationPartsRequestPrivate(APIGatewayRequest::GetDocumentationPartsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationPartsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationPartsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationPartsRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationPartsResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetDocumentationPartsRequestPrivate
 * \brief The GetDocumentationPartsRequestPrivate class provides private implementation for GetDocumentationPartsRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationPartsRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationPartsRequestPrivate::GetDocumentationPartsRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationPartsRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationPartsRequest
 * class' copy constructor.
 */
GetDocumentationPartsRequestPrivate::GetDocumentationPartsRequestPrivate(
    const GetDocumentationPartsRequestPrivate &other, GetDocumentationPartsRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
