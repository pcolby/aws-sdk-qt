// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelrequest.h"
#include "getmodelrequest_p.h"
#include "getmodelresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelRequest
 * \brief The GetModelRequest class provides an interface for ApiGatewayV2 GetModel requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModel
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelRequest::GetModelRequest(const GetModelRequest &other)
    : ApiGatewayV2Request(new GetModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelRequest object.
 */
GetModelRequest::GetModelRequest()
    : ApiGatewayV2Request(new GetModelRequestPrivate(ApiGatewayV2Request::GetModelAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelRequest::response(QNetworkReply * const reply) const
{
    return new GetModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetModelRequestPrivate
 * \brief The GetModelRequestPrivate class provides private implementation for GetModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const ApiGatewayV2Request::Action action, GetModelRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelRequest
 * class' copy constructor.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const GetModelRequestPrivate &other, GetModelRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
