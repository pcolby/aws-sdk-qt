// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagerequest.h"
#include "getstagerequest_p.h"
#include "getstageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetStageRequest
 * \brief The GetStageRequest class provides an interface for ApiGateway GetStage requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getStage
 */

/*!
 * Constructs a copy of \a other.
 */
GetStageRequest::GetStageRequest(const GetStageRequest &other)
    : ApiGatewayRequest(new GetStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStageRequest object.
 */
GetStageRequest::GetStageRequest()
    : ApiGatewayRequest(new GetStageRequestPrivate(ApiGatewayRequest::GetStageAction, this))
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
 * \class QtAws::ApiGateway::GetStageRequestPrivate
 * \brief The GetStageRequestPrivate class provides private implementation for GetStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetStageRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const ApiGatewayRequest::Action action, GetStageRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
