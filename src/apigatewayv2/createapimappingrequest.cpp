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

#include "createapimappingrequest.h"
#include "createapimappingrequest_p.h"
#include "createapimappingresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateApiMappingRequest
 * \brief The CreateApiMappingRequest class provides an interface for ApiGatewayV2 CreateApiMapping requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createApiMapping
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApiMappingRequest::CreateApiMappingRequest(const CreateApiMappingRequest &other)
    : ApiGatewayV2Request(new CreateApiMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApiMappingRequest object.
 */
CreateApiMappingRequest::CreateApiMappingRequest()
    : ApiGatewayV2Request(new CreateApiMappingRequestPrivate(ApiGatewayV2Request::CreateApiMappingAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApiMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApiMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApiMappingRequest::response(QNetworkReply * const reply) const
{
    return new CreateApiMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateApiMappingRequestPrivate
 * \brief The CreateApiMappingRequestPrivate class provides private implementation for CreateApiMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateApiMappingRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateApiMappingRequestPrivate::CreateApiMappingRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApiMappingRequest
 * class' copy constructor.
 */
CreateApiMappingRequestPrivate::CreateApiMappingRequestPrivate(
    const CreateApiMappingRequestPrivate &other, CreateApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
