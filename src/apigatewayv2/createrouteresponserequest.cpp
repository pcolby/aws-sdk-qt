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

#include "createrouteresponserequest.h"
#include "createrouteresponserequest_p.h"
#include "createrouteresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseRequest
 * \brief The CreateRouteResponseRequest class provides an interface for ApiGatewayV2 CreateRouteResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createRouteResponse
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRouteResponseRequest::CreateRouteResponseRequest(const CreateRouteResponseRequest &other)
    : ApiGatewayV2Request(new CreateRouteResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRouteResponseRequest object.
 */
CreateRouteResponseRequest::CreateRouteResponseRequest()
    : ApiGatewayV2Request(new CreateRouteResponseRequestPrivate(ApiGatewayV2Request::CreateRouteResponseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRouteResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRouteResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRouteResponseRequest::response(QNetworkReply * const reply) const
{
    return new CreateRouteResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseRequestPrivate
 * \brief The CreateRouteResponseRequestPrivate class provides private implementation for CreateRouteResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateRouteResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateRouteResponseRequestPrivate::CreateRouteResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRouteResponseRequest
 * class' copy constructor.
 */
CreateRouteResponseRequestPrivate::CreateRouteResponseRequestPrivate(
    const CreateRouteResponseRequestPrivate &other, CreateRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
