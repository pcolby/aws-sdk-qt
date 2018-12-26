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

#include "deletedomainnamerequest.h"
#include "deletedomainnamerequest_p.h"
#include "deletedomainnameresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteDomainNameRequest
 * \brief The DeleteDomainNameRequest class provides an interface for ApiGatewayV2 DeleteDomainName requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest(const DeleteDomainNameRequest &other)
    : ApiGatewayV2Request(new DeleteDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainNameRequest object.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest()
    : ApiGatewayV2Request(new DeleteDomainNameRequestPrivate(ApiGatewayV2Request::DeleteDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteDomainNameRequestPrivate
 * \brief The DeleteDomainNameRequestPrivate class provides private implementation for DeleteDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteDomainNameRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteDomainNameRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainNameRequest
 * class' copy constructor.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const DeleteDomainNameRequestPrivate &other, DeleteDomainNameRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
