// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagerequest.h"
#include "getstagerequest_p.h"
#include "getstageresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetStageRequest
 * \brief The GetStageRequest class provides an interface for ApiGatewayV2 GetStage requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getStage
 */

/*!
 * Constructs a copy of \a other.
 */
GetStageRequest::GetStageRequest(const GetStageRequest &other)
    : ApiGatewayV2Request(new GetStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStageRequest object.
 */
GetStageRequest::GetStageRequest()
    : ApiGatewayV2Request(new GetStageRequestPrivate(ApiGatewayV2Request::GetStageAction, this))
{

}

/*!
 * \reimp
 */
bool GetStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStageRequest::response(QNetworkReply * const reply) const
{
    return new GetStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetStageRequestPrivate
 * \brief The GetStageRequestPrivate class provides private implementation for GetStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetStageRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const ApiGatewayV2Request::Action action, GetStageRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStageRequest
 * class' copy constructor.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const GetStageRequestPrivate &other, GetStageRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
