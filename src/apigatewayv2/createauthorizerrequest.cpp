// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createauthorizerrequest.h"
#include "createauthorizerrequest_p.h"
#include "createauthorizerresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateAuthorizerRequest
 * \brief The CreateAuthorizerRequest class provides an interface for ApiGatewayV2 CreateAuthorizer requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest(const CreateAuthorizerRequest &other)
    : ApiGatewayV2Request(new CreateAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAuthorizerRequest object.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest()
    : ApiGatewayV2Request(new CreateAuthorizerRequestPrivate(ApiGatewayV2Request::CreateAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new CreateAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateAuthorizerRequestPrivate
 * \brief The CreateAuthorizerRequestPrivate class provides private implementation for CreateAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateAuthorizerRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateAuthorizerRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAuthorizerRequest
 * class' copy constructor.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const CreateAuthorizerRequestPrivate &other, CreateAuthorizerRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
