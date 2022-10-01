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

#include "importrestapirequest.h"
#include "importrestapirequest_p.h"
#include "importrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ImportRestApiRequest
 * \brief The ImportRestApiRequest class provides an interface for ApiGateway ImportRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::importRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
ImportRestApiRequest::ImportRestApiRequest(const ImportRestApiRequest &other)
    : ApiGatewayRequest(new ImportRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportRestApiRequest object.
 */
ImportRestApiRequest::ImportRestApiRequest()
    : ApiGatewayRequest(new ImportRestApiRequestPrivate(ApiGatewayRequest::ImportRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool ImportRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportRestApiRequest::response(QNetworkReply * const reply) const
{
    return new ImportRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::ImportRestApiRequestPrivate
 * \brief The ImportRestApiRequestPrivate class provides private implementation for ImportRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ImportRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
ImportRestApiRequestPrivate::ImportRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, ImportRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportRestApiRequest
 * class' copy constructor.
 */
ImportRestApiRequestPrivate::ImportRestApiRequestPrivate(
    const ImportRestApiRequestPrivate &other, ImportRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
