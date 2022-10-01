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

#include "getdocumentationpartsrequest.h"
#include "getdocumentationpartsrequest_p.h"
#include "getdocumentationpartsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationPartsRequest
 * \brief The GetDocumentationPartsRequest class provides an interface for ApiGateway GetDocumentationParts requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationParts
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest(const GetDocumentationPartsRequest &other)
    : ApiGatewayRequest(new GetDocumentationPartsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationPartsRequest object.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest()
    : ApiGatewayRequest(new GetDocumentationPartsRequestPrivate(ApiGatewayRequest::GetDocumentationPartsAction, this))
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
 * \class QtAws::ApiGateway::GetDocumentationPartsRequestPrivate
 * \brief The GetDocumentationPartsRequestPrivate class provides private implementation for GetDocumentationPartsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationPartsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationPartsRequestPrivate::GetDocumentationPartsRequestPrivate(
    const ApiGatewayRequest::Action action, GetDocumentationPartsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
