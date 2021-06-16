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

#include "deleteroutesettingsrequest.h"
#include "deleteroutesettingsrequest_p.h"
#include "deleteroutesettingsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsRequest
 * \brief The DeleteRouteSettingsRequest class provides an interface for ApiGatewayV2 DeleteRouteSettings requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteSettingsRequest::DeleteRouteSettingsRequest(const DeleteRouteSettingsRequest &other)
    : ApiGatewayV2Request(new DeleteRouteSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteSettingsRequest object.
 */
DeleteRouteSettingsRequest::DeleteRouteSettingsRequest()
    : ApiGatewayV2Request(new DeleteRouteSettingsRequestPrivate(ApiGatewayV2Request::DeleteRouteSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsRequestPrivate
 * \brief The DeleteRouteSettingsRequestPrivate class provides private implementation for DeleteRouteSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteSettingsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteRouteSettingsRequestPrivate::DeleteRouteSettingsRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteRouteSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteSettingsRequest
 * class' copy constructor.
 */
DeleteRouteSettingsRequestPrivate::DeleteRouteSettingsRequestPrivate(
    const DeleteRouteSettingsRequestPrivate &other, DeleteRouteSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
