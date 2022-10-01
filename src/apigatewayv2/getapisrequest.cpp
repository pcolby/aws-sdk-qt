// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapisrequest.h"
#include "getapisrequest_p.h"
#include "getapisresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApisRequest
 * \brief The GetApisRequest class provides an interface for ApiGatewayV2 GetApis requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApis
 */

/*!
 * Constructs a copy of \a other.
 */
GetApisRequest::GetApisRequest(const GetApisRequest &other)
    : ApiGatewayV2Request(new GetApisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApisRequest object.
 */
GetApisRequest::GetApisRequest()
    : ApiGatewayV2Request(new GetApisRequestPrivate(ApiGatewayV2Request::GetApisAction, this))
{

}

/*!
 * \reimp
 */
bool GetApisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApisRequest::response(QNetworkReply * const reply) const
{
    return new GetApisResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetApisRequestPrivate
 * \brief The GetApisRequestPrivate class provides private implementation for GetApisRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApisRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetApisRequestPrivate::GetApisRequestPrivate(
    const ApiGatewayV2Request::Action action, GetApisRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApisRequest
 * class' copy constructor.
 */
GetApisRequestPrivate::GetApisRequestPrivate(
    const GetApisRequestPrivate &other, GetApisRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
