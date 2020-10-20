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

#include "deleteapimappingrequest.h"
#include "deleteapimappingrequest_p.h"
#include "deleteapimappingresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiMappingRequest
 * \brief The DeleteApiMappingRequest class provides an interface for ApiGatewayV2 DeleteApiMapping requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteApiMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiMappingRequest::DeleteApiMappingRequest(const DeleteApiMappingRequest &other)
    : ApiGatewayV2Request(new DeleteApiMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiMappingRequest object.
 */
DeleteApiMappingRequest::DeleteApiMappingRequest()
    : ApiGatewayV2Request(new DeleteApiMappingRequestPrivate(ApiGatewayV2Request::DeleteApiMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiMappingRequestPrivate
 * \brief The DeleteApiMappingRequestPrivate class provides private implementation for DeleteApiMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteApiMappingRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteApiMappingRequestPrivate::DeleteApiMappingRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiMappingRequest
 * class' copy constructor.
 */
DeleteApiMappingRequestPrivate::DeleteApiMappingRequestPrivate(
    const DeleteApiMappingRequestPrivate &other, DeleteApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
