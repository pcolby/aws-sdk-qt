// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapimappingsrequest.h"
#include "getapimappingsrequest_p.h"
#include "getapimappingsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsRequest
 * \brief The GetApiMappingsRequest class provides an interface for ApiGatewayV2 GetApiMappings requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApiMappings
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiMappingsRequest::GetApiMappingsRequest(const GetApiMappingsRequest &other)
    : ApiGatewayV2Request(new GetApiMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiMappingsRequest object.
 */
GetApiMappingsRequest::GetApiMappingsRequest()
    : ApiGatewayV2Request(new GetApiMappingsRequestPrivate(ApiGatewayV2Request::GetApiMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiMappingsRequest::response(QNetworkReply * const reply) const
{
    return new GetApiMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsRequestPrivate
 * \brief The GetApiMappingsRequestPrivate class provides private implementation for GetApiMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiMappingsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetApiMappingsRequestPrivate::GetApiMappingsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetApiMappingsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiMappingsRequest
 * class' copy constructor.
 */
GetApiMappingsRequestPrivate::GetApiMappingsRequestPrivate(
    const GetApiMappingsRequestPrivate &other, GetApiMappingsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
