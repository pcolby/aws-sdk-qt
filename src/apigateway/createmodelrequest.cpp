// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelrequest.h"
#include "createmodelrequest_p.h"
#include "createmodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateModelRequest
 * \brief The CreateModelRequest class provides an interface for ApiGateway CreateModel requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelRequest::CreateModelRequest(const CreateModelRequest &other)
    : ApiGatewayRequest(new CreateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelRequest object.
 */
CreateModelRequest::CreateModelRequest()
    : ApiGatewayRequest(new CreateModelRequestPrivate(ApiGatewayRequest::CreateModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateModelRequestPrivate
 * \brief The CreateModelRequestPrivate class provides private implementation for CreateModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateModelRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const ApiGatewayRequest::Action action, CreateModelRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelRequest
 * class' copy constructor.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const CreateModelRequestPrivate &other, CreateModelRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
