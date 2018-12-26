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

#include "updateapimappingrequest.h"
#include "updateapimappingrequest_p.h"
#include "updateapimappingresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiMappingRequest
 * \brief The UpdateApiMappingRequest class provides an interface for ApiGatewayV2 UpdateApiMapping requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateApiMapping
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiMappingRequest::UpdateApiMappingRequest(const UpdateApiMappingRequest &other)
    : ApiGatewayV2Request(new UpdateApiMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiMappingRequest object.
 */
UpdateApiMappingRequest::UpdateApiMappingRequest()
    : ApiGatewayV2Request(new UpdateApiMappingRequestPrivate(ApiGatewayV2Request::UpdateApiMappingAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApiMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApiMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApiMappingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiMappingRequestPrivate
 * \brief The UpdateApiMappingRequestPrivate class provides private implementation for UpdateApiMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateApiMappingRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateApiMappingRequestPrivate::UpdateApiMappingRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiMappingRequest
 * class' copy constructor.
 */
UpdateApiMappingRequestPrivate::UpdateApiMappingRequestPrivate(
    const UpdateApiMappingRequestPrivate &other, UpdateApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
