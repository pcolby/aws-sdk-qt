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

#include "updateapirequest.h"
#include "updateapirequest_p.h"
#include "updateapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiRequest
 * \brief The UpdateApiRequest class provides an interface for ApiGatewayV2 UpdateApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateApi
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiRequest::UpdateApiRequest(const UpdateApiRequest &other)
    : ApiGatewayV2Request(new UpdateApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiRequest object.
 */
UpdateApiRequest::UpdateApiRequest()
    : ApiGatewayV2Request(new UpdateApiRequestPrivate(ApiGatewayV2Request::UpdateApiAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApiRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiRequestPrivate
 * \brief The UpdateApiRequestPrivate class provides private implementation for UpdateApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateApiRequestPrivate::UpdateApiRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiRequest
 * class' copy constructor.
 */
UpdateApiRequestPrivate::UpdateApiRequestPrivate(
    const UpdateApiRequestPrivate &other, UpdateApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
