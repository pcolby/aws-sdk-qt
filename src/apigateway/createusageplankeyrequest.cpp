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

#include "createusageplankeyrequest.h"
#include "createusageplankeyrequest_p.h"
#include "createusageplankeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanKeyRequest
 * \brief The CreateUsagePlanKeyRequest class provides an interface for ApiGateway CreateUsagePlanKey requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createUsagePlanKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUsagePlanKeyRequest::CreateUsagePlanKeyRequest(const CreateUsagePlanKeyRequest &other)
    : ApiGatewayRequest(new CreateUsagePlanKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUsagePlanKeyRequest object.
 */
CreateUsagePlanKeyRequest::CreateUsagePlanKeyRequest()
    : ApiGatewayRequest(new CreateUsagePlanKeyRequestPrivate(ApiGatewayRequest::CreateUsagePlanKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUsagePlanKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUsagePlanKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUsagePlanKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateUsagePlanKeyResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanKeyRequestPrivate
 * \brief The CreateUsagePlanKeyRequestPrivate class provides private implementation for CreateUsagePlanKeyRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateUsagePlanKeyRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateUsagePlanKeyRequestPrivate::CreateUsagePlanKeyRequestPrivate(
    const ApiGatewayRequest::Action action, CreateUsagePlanKeyRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUsagePlanKeyRequest
 * class' copy constructor.
 */
CreateUsagePlanKeyRequestPrivate::CreateUsagePlanKeyRequestPrivate(
    const CreateUsagePlanKeyRequestPrivate &other, CreateUsagePlanKeyRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
