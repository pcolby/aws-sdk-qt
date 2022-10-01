// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelsrequest.h"
#include "getmodelsrequest_p.h"
#include "getmodelsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelsRequest
 * \brief The GetModelsRequest class provides an interface for ApiGatewayV2 GetModels requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModels
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelsRequest::GetModelsRequest(const GetModelsRequest &other)
    : ApiGatewayV2Request(new GetModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelsRequest object.
 */
GetModelsRequest::GetModelsRequest()
    : ApiGatewayV2Request(new GetModelsRequestPrivate(ApiGatewayV2Request::GetModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetModelsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetModelsRequestPrivate
 * \brief The GetModelsRequestPrivate class provides private implementation for GetModelsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetModelsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelsRequest
 * class' copy constructor.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const GetModelsRequestPrivate &other, GetModelsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
