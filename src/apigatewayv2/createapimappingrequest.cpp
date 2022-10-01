// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
