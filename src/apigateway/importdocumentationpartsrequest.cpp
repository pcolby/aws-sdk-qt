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

#include "importdocumentationpartsrequest.h"
#include "importdocumentationpartsrequest_p.h"
#include "importdocumentationpartsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::ImportDocumentationPartsRequest
 * \brief The ImportDocumentationPartsRequest class provides an interface for APIGateway ImportDocumentationParts requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::importDocumentationParts
 */

/*!
 * Constructs a copy of \a other.
 */
ImportDocumentationPartsRequest::ImportDocumentationPartsRequest(const ImportDocumentationPartsRequest &other)
    : APIGatewayRequest(new ImportDocumentationPartsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportDocumentationPartsRequest object.
 */
ImportDocumentationPartsRequest::ImportDocumentationPartsRequest()
    : APIGatewayRequest(new ImportDocumentationPartsRequestPrivate(APIGatewayRequest::ImportDocumentationPartsAction, this))
{

}

/*!
 * \reimp
 */
bool ImportDocumentationPartsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportDocumentationPartsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportDocumentationPartsRequest::response(QNetworkReply * const reply) const
{
    return new ImportDocumentationPartsResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::ImportDocumentationPartsRequestPrivate
 * \brief The ImportDocumentationPartsRequestPrivate class provides private implementation for ImportDocumentationPartsRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a ImportDocumentationPartsRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
ImportDocumentationPartsRequestPrivate::ImportDocumentationPartsRequestPrivate(
    const APIGatewayRequest::Action action, ImportDocumentationPartsRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportDocumentationPartsRequest
 * class' copy constructor.
 */
ImportDocumentationPartsRequestPrivate::ImportDocumentationPartsRequestPrivate(
    const ImportDocumentationPartsRequestPrivate &other, ImportDocumentationPartsRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
