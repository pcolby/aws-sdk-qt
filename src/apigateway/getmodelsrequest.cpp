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

#include "getmodelsrequest.h"
#include "getmodelsrequest_p.h"
#include "getmodelsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetModelsRequest
 * \brief The GetModelsRequest class provides an interface for APIGateway GetModels requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getModels
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelsRequest::GetModelsRequest(const GetModelsRequest &other)
    : APIGatewayRequest(new GetModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelsRequest object.
 */
GetModelsRequest::GetModelsRequest()
    : APIGatewayRequest(new GetModelsRequestPrivate(APIGatewayRequest::GetModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetModelsResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetModelsRequestPrivate
 * \brief The GetModelsRequestPrivate class provides private implementation for GetModelsRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetModelsRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const APIGatewayRequest::Action action, GetModelsRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelsRequest
 * class' copy constructor.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const GetModelsRequestPrivate &other, GetModelsRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
