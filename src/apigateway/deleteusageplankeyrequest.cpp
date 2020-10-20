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

#include "deleteusageplankeyrequest.h"
#include "deleteusageplankeyrequest_p.h"
#include "deleteusageplankeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanKeyRequest
 * \brief The DeleteUsagePlanKeyRequest class provides an interface for APIGateway DeleteUsagePlanKey requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteUsagePlanKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUsagePlanKeyRequest::DeleteUsagePlanKeyRequest(const DeleteUsagePlanKeyRequest &other)
    : APIGatewayRequest(new DeleteUsagePlanKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUsagePlanKeyRequest object.
 */
DeleteUsagePlanKeyRequest::DeleteUsagePlanKeyRequest()
    : APIGatewayRequest(new DeleteUsagePlanKeyRequestPrivate(APIGatewayRequest::DeleteUsagePlanKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUsagePlanKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUsagePlanKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUsagePlanKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUsagePlanKeyResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanKeyRequestPrivate
 * \brief The DeleteUsagePlanKeyRequestPrivate class provides private implementation for DeleteUsagePlanKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteUsagePlanKeyRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteUsagePlanKeyRequestPrivate::DeleteUsagePlanKeyRequestPrivate(
    const APIGatewayRequest::Action action, DeleteUsagePlanKeyRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUsagePlanKeyRequest
 * class' copy constructor.
 */
DeleteUsagePlanKeyRequestPrivate::DeleteUsagePlanKeyRequestPrivate(
    const DeleteUsagePlanKeyRequestPrivate &other, DeleteUsagePlanKeyRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
