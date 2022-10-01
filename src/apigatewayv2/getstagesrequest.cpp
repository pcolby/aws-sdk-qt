// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagesrequest.h"
#include "getstagesrequest_p.h"
#include "getstagesresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetStagesRequest
 * \brief The GetStagesRequest class provides an interface for ApiGatewayV2 GetStages requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getStages
 */

/*!
 * Constructs a copy of \a other.
 */
GetStagesRequest::GetStagesRequest(const GetStagesRequest &other)
    : ApiGatewayV2Request(new GetStagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStagesRequest object.
 */
GetStagesRequest::GetStagesRequest()
    : ApiGatewayV2Request(new GetStagesRequestPrivate(ApiGatewayV2Request::GetStagesAction, this))
{

}

/*!
 * \reimp
 */
bool GetStagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStagesRequest::response(QNetworkReply * const reply) const
{
    return new GetStagesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetStagesRequestPrivate
 * \brief The GetStagesRequestPrivate class provides private implementation for GetStagesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetStagesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetStagesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStagesRequest
 * class' copy constructor.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const GetStagesRequestPrivate &other, GetStagesRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
