// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createintegrationrequest.h"
#include "createintegrationrequest_p.h"
#include "createintegrationresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationRequest
 * \brief The CreateIntegrationRequest class provides an interface for ApiGatewayV2 CreateIntegration requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntegrationRequest::CreateIntegrationRequest(const CreateIntegrationRequest &other)
    : ApiGatewayV2Request(new CreateIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntegrationRequest object.
 */
CreateIntegrationRequest::CreateIntegrationRequest()
    : ApiGatewayV2Request(new CreateIntegrationRequestPrivate(ApiGatewayV2Request::CreateIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateIntegrationRequestPrivate
 * \brief The CreateIntegrationRequestPrivate class provides private implementation for CreateIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateIntegrationRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateIntegrationRequestPrivate::CreateIntegrationRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntegrationRequest
 * class' copy constructor.
 */
CreateIntegrationRequestPrivate::CreateIntegrationRequestPrivate(
    const CreateIntegrationRequestPrivate &other, CreateIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
