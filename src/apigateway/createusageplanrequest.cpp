// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createusageplanrequest.h"
#include "createusageplanrequest_p.h"
#include "createusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanRequest
 * \brief The CreateUsagePlanRequest class provides an interface for ApiGateway CreateUsagePlan requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createUsagePlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUsagePlanRequest::CreateUsagePlanRequest(const CreateUsagePlanRequest &other)
    : ApiGatewayRequest(new CreateUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUsagePlanRequest object.
 */
CreateUsagePlanRequest::CreateUsagePlanRequest()
    : ApiGatewayRequest(new CreateUsagePlanRequestPrivate(ApiGatewayRequest::CreateUsagePlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUsagePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUsagePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateUsagePlanResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanRequestPrivate
 * \brief The CreateUsagePlanRequestPrivate class provides private implementation for CreateUsagePlanRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateUsagePlanRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateUsagePlanRequestPrivate::CreateUsagePlanRequestPrivate(
    const ApiGatewayRequest::Action action, CreateUsagePlanRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUsagePlanRequest
 * class' copy constructor.
 */
CreateUsagePlanRequestPrivate::CreateUsagePlanRequestPrivate(
    const CreateUsagePlanRequestPrivate &other, CreateUsagePlanRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
