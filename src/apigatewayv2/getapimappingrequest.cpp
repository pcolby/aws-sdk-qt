// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapimappingrequest.h"
#include "getapimappingrequest_p.h"
#include "getapimappingresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingRequest
 * \brief The GetApiMappingRequest class provides an interface for ApiGatewayV2 GetApiMapping requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApiMapping
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiMappingRequest::GetApiMappingRequest(const GetApiMappingRequest &other)
    : ApiGatewayV2Request(new GetApiMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiMappingRequest object.
 */
GetApiMappingRequest::GetApiMappingRequest()
    : ApiGatewayV2Request(new GetApiMappingRequestPrivate(ApiGatewayV2Request::GetApiMappingAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetApiMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingRequestPrivate
 * \brief The GetApiMappingRequestPrivate class provides private implementation for GetApiMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiMappingRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetApiMappingRequestPrivate::GetApiMappingRequestPrivate(
    const ApiGatewayV2Request::Action action, GetApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiMappingRequest
 * class' copy constructor.
 */
GetApiMappingRequestPrivate::GetApiMappingRequestPrivate(
    const GetApiMappingRequestPrivate &other, GetApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
