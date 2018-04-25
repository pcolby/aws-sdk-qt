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

#include "getmodelrequest.h"
#include "getmodelrequest_p.h"
#include "getmodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetModelRequest
 * \brief The GetModelRequest class provides an interface for APIGateway GetModel requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getModel
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelRequest::GetModelRequest(const GetModelRequest &other)
    : APIGatewayRequest(new GetModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelRequest object.
 */
GetModelRequest::GetModelRequest()
    : APIGatewayRequest(new GetModelRequestPrivate(APIGatewayRequest::GetModelAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelRequest::response(QNetworkReply * const reply) const
{
    return new GetModelResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetModelRequestPrivate
 * \brief The GetModelRequestPrivate class provides private implementation for GetModelRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetModelRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const APIGatewayRequest::Action action, GetModelRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelRequest
 * class' copy constructor.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const GetModelRequestPrivate &other, GetModelRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
