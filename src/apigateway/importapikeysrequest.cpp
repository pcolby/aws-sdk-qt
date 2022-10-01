// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importapikeysrequest.h"
#include "importapikeysrequest_p.h"
#include "importapikeysresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ImportApiKeysRequest
 * \brief The ImportApiKeysRequest class provides an interface for ApiGateway ImportApiKeys requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::importApiKeys
 */

/*!
 * Constructs a copy of \a other.
 */
ImportApiKeysRequest::ImportApiKeysRequest(const ImportApiKeysRequest &other)
    : ApiGatewayRequest(new ImportApiKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportApiKeysRequest object.
 */
ImportApiKeysRequest::ImportApiKeysRequest()
    : ApiGatewayRequest(new ImportApiKeysRequestPrivate(ApiGatewayRequest::ImportApiKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ImportApiKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportApiKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new ImportApiKeysResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::ImportApiKeysRequestPrivate
 * \brief The ImportApiKeysRequestPrivate class provides private implementation for ImportApiKeysRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ImportApiKeysRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
ImportApiKeysRequestPrivate::ImportApiKeysRequestPrivate(
    const ApiGatewayRequest::Action action, ImportApiKeysRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportApiKeysRequest
 * class' copy constructor.
 */
ImportApiKeysRequestPrivate::ImportApiKeysRequestPrivate(
    const ImportApiKeysRequestPrivate &other, ImportApiKeysRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
