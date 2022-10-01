// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagesrequest.h"
#include "getstagesrequest_p.h"
#include "getstagesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetStagesRequest
 * \brief The GetStagesRequest class provides an interface for ApiGateway GetStages requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getStages
 */

/*!
 * Constructs a copy of \a other.
 */
GetStagesRequest::GetStagesRequest(const GetStagesRequest &other)
    : ApiGatewayRequest(new GetStagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStagesRequest object.
 */
GetStagesRequest::GetStagesRequest()
    : ApiGatewayRequest(new GetStagesRequestPrivate(ApiGatewayRequest::GetStagesAction, this))
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
 * \class QtAws::ApiGateway::GetStagesRequestPrivate
 * \brief The GetStagesRequestPrivate class provides private implementation for GetStagesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetStagesRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const ApiGatewayRequest::Action action, GetStagesRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
