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

#include "createstagerequest.h"
#include "createstagerequest_p.h"
#include "createstageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateStageRequest
 * \brief The CreateStageRequest class provides an interface for ApiGateway CreateStage requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createStage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStageRequest::CreateStageRequest(const CreateStageRequest &other)
    : ApiGatewayRequest(new CreateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStageRequest object.
 */
CreateStageRequest::CreateStageRequest()
    : ApiGatewayRequest(new CreateStageRequestPrivate(ApiGatewayRequest::CreateStageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStageRequest::response(QNetworkReply * const reply) const
{
    return new CreateStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateStageRequestPrivate
 * \brief The CreateStageRequestPrivate class provides private implementation for CreateStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateStageRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const ApiGatewayRequest::Action action, CreateStageRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStageRequest
 * class' copy constructor.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const CreateStageRequestPrivate &other, CreateStageRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
