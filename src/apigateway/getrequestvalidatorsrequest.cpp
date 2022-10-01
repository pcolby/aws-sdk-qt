// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrequestvalidatorsrequest.h"
#include "getrequestvalidatorsrequest_p.h"
#include "getrequestvalidatorsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsRequest
 * \brief The GetRequestValidatorsRequest class provides an interface for ApiGateway GetRequestValidators requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRequestValidators
 */

/*!
 * Constructs a copy of \a other.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest(const GetRequestValidatorsRequest &other)
    : ApiGatewayRequest(new GetRequestValidatorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRequestValidatorsRequest object.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest()
    : ApiGatewayRequest(new GetRequestValidatorsRequestPrivate(ApiGatewayRequest::GetRequestValidatorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRequestValidatorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRequestValidatorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRequestValidatorsRequest::response(QNetworkReply * const reply) const
{
    return new GetRequestValidatorsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsRequestPrivate
 * \brief The GetRequestValidatorsRequestPrivate class provides private implementation for GetRequestValidatorsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRequestValidatorsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetRequestValidatorsRequestPrivate::GetRequestValidatorsRequestPrivate(
    const ApiGatewayRequest::Action action, GetRequestValidatorsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRequestValidatorsRequest
 * class' copy constructor.
 */
GetRequestValidatorsRequestPrivate::GetRequestValidatorsRequestPrivate(
    const GetRequestValidatorsRequestPrivate &other, GetRequestValidatorsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
