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

#include "deleterouterequestparameterrequest.h"
#include "deleterouterequestparameterrequest_p.h"
#include "deleterouterequestparameterresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterRequest
 * \brief The DeleteRouteRequestParameterRequest class provides an interface for ApiGatewayV2 DeleteRouteRequestParameter requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteRequestParameter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteRequestParameterRequest::DeleteRouteRequestParameterRequest(const DeleteRouteRequestParameterRequest &other)
    : ApiGatewayV2Request(new DeleteRouteRequestParameterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteRequestParameterRequest object.
 */
DeleteRouteRequestParameterRequest::DeleteRouteRequestParameterRequest()
    : ApiGatewayV2Request(new DeleteRouteRequestParameterRequestPrivate(ApiGatewayV2Request::DeleteRouteRequestParameterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteRequestParameterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteRequestParameterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteRequestParameterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteRequestParameterResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterRequestPrivate
 * \brief The DeleteRouteRequestParameterRequestPrivate class provides private implementation for DeleteRouteRequestParameterRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteRequestParameterRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteRouteRequestParameterRequestPrivate::DeleteRouteRequestParameterRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteRouteRequestParameterRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteRequestParameterRequest
 * class' copy constructor.
 */
DeleteRouteRequestParameterRequestPrivate::DeleteRouteRequestParameterRequestPrivate(
    const DeleteRouteRequestParameterRequestPrivate &other, DeleteRouteRequestParameterRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
