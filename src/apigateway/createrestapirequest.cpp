// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrestapirequest.h"
#include "createrestapirequest_p.h"
#include "createrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateRestApiRequest
 * \brief The CreateRestApiRequest class provides an interface for ApiGateway CreateRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRestApiRequest::CreateRestApiRequest(const CreateRestApiRequest &other)
    : ApiGatewayRequest(new CreateRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRestApiRequest object.
 */
CreateRestApiRequest::CreateRestApiRequest()
    : ApiGatewayRequest(new CreateRestApiRequestPrivate(ApiGatewayRequest::CreateRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRestApiRequest::response(QNetworkReply * const reply) const
{
    return new CreateRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateRestApiRequestPrivate
 * \brief The CreateRestApiRequestPrivate class provides private implementation for CreateRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateRestApiRequestPrivate::CreateRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, CreateRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRestApiRequest
 * class' copy constructor.
 */
CreateRestApiRequestPrivate::CreateRestApiRequestPrivate(
    const CreateRestApiRequestPrivate &other, CreateRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
