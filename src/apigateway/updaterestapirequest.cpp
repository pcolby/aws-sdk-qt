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

#include "updaterestapirequest.h"
#include "updaterestapirequest_p.h"
#include "updaterestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateRestApiRequest
 * \brief The UpdateRestApiRequest class provides an interface for ApiGateway UpdateRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRestApiRequest::UpdateRestApiRequest(const UpdateRestApiRequest &other)
    : ApiGatewayRequest(new UpdateRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRestApiRequest object.
 */
UpdateRestApiRequest::UpdateRestApiRequest()
    : ApiGatewayRequest(new UpdateRestApiRequestPrivate(ApiGatewayRequest::UpdateRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRestApiRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateRestApiRequestPrivate
 * \brief The UpdateRestApiRequestPrivate class provides private implementation for UpdateRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateRestApiRequestPrivate::UpdateRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRestApiRequest
 * class' copy constructor.
 */
UpdateRestApiRequestPrivate::UpdateRestApiRequestPrivate(
    const UpdateRestApiRequestPrivate &other, UpdateRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
