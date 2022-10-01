// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
