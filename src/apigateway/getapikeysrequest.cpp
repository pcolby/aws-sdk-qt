// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapikeysrequest.h"
#include "getapikeysrequest_p.h"
#include "getapikeysresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetApiKeysRequest
 * \brief The GetApiKeysRequest class provides an interface for ApiGateway GetApiKeys requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getApiKeys
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiKeysRequest::GetApiKeysRequest(const GetApiKeysRequest &other)
    : ApiGatewayRequest(new GetApiKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiKeysRequest object.
 */
GetApiKeysRequest::GetApiKeysRequest()
    : ApiGatewayRequest(new GetApiKeysRequestPrivate(ApiGatewayRequest::GetApiKeysAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetApiKeysResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetApiKeysRequestPrivate
 * \brief The GetApiKeysRequestPrivate class provides private implementation for GetApiKeysRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetApiKeysRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetApiKeysRequestPrivate::GetApiKeysRequestPrivate(
    const ApiGatewayRequest::Action action, GetApiKeysRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiKeysRequest
 * class' copy constructor.
 */
GetApiKeysRequestPrivate::GetApiKeysRequestPrivate(
    const GetApiKeysRequestPrivate &other, GetApiKeysRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
