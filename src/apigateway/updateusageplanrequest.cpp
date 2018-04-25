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

#include "updateusageplanrequest.h"
#include "updateusageplanrequest_p.h"
#include "updateusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateUsagePlanRequest
 * \brief The UpdateUsagePlanRequest class provides an interface for APIGateway UpdateUsagePlan requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateUsagePlan
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUsagePlanRequest::UpdateUsagePlanRequest(const UpdateUsagePlanRequest &other)
    : APIGatewayRequest(new UpdateUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUsagePlanRequest object.
 */
UpdateUsagePlanRequest::UpdateUsagePlanRequest()
    : APIGatewayRequest(new UpdateUsagePlanRequestPrivate(APIGatewayRequest::UpdateUsagePlanAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUsagePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUsagePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUsagePlanResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::UpdateUsagePlanRequestPrivate
 * \brief The UpdateUsagePlanRequestPrivate class provides private implementation for UpdateUsagePlanRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateUsagePlanRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateUsagePlanRequestPrivate::UpdateUsagePlanRequestPrivate(
    const APIGatewayRequest::Action action, UpdateUsagePlanRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUsagePlanRequest
 * class' copy constructor.
 */
UpdateUsagePlanRequestPrivate::UpdateUsagePlanRequestPrivate(
    const UpdateUsagePlanRequestPrivate &other, UpdateUsagePlanRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
