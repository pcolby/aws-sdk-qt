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

#include "createintegrationresponserequest.h"
#include "createintegrationresponserequest_p.h"
#include "createintegrationresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationResponseRequest
 * \brief The CreateIntegrationResponseRequest class provides an interface for ApiGatewayV2 CreateIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntegrationResponseRequest::CreateIntegrationResponseRequest(const CreateIntegrationResponseRequest &other)
    : ApiGatewayV2Request(new CreateIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntegrationResponseRequest object.
 */
CreateIntegrationResponseRequest::CreateIntegrationResponseRequest()
    : ApiGatewayV2Request(new CreateIntegrationResponseRequestPrivate(ApiGatewayV2Request::CreateIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationResponseRequestPrivate
 * \brief The CreateIntegrationResponseRequestPrivate class provides private implementation for CreateIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateIntegrationResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateIntegrationResponseRequestPrivate::CreateIntegrationResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntegrationResponseRequest
 * class' copy constructor.
 */
CreateIntegrationResponseRequestPrivate::CreateIntegrationResponseRequestPrivate(
    const CreateIntegrationResponseRequestPrivate &other, CreateIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
