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

#include "deleteusageplanrequest.h"
#include "deleteusageplanrequest_p.h"
#include "deleteusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanRequest
 * \brief The DeleteUsagePlanRequest class provides an interface for APIGateway DeleteUsagePlan requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteUsagePlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUsagePlanRequest::DeleteUsagePlanRequest(const DeleteUsagePlanRequest &other)
    : APIGatewayRequest(new DeleteUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUsagePlanRequest object.
 */
DeleteUsagePlanRequest::DeleteUsagePlanRequest()
    : APIGatewayRequest(new DeleteUsagePlanRequestPrivate(APIGatewayRequest::DeleteUsagePlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUsagePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUsagePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUsagePlanResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanRequestPrivate
 * \brief The DeleteUsagePlanRequestPrivate class provides private implementation for DeleteUsagePlanRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteUsagePlanRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteUsagePlanRequestPrivate::DeleteUsagePlanRequestPrivate(
    const APIGatewayRequest::Action action, DeleteUsagePlanRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUsagePlanRequest
 * class' copy constructor.
 */
DeleteUsagePlanRequestPrivate::DeleteUsagePlanRequestPrivate(
    const DeleteUsagePlanRequestPrivate &other, DeleteUsagePlanRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
