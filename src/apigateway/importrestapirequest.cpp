// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importrestapirequest.h"
#include "importrestapirequest_p.h"
#include "importrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ImportRestApiRequest
 * \brief The ImportRestApiRequest class provides an interface for ApiGateway ImportRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::importRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
ImportRestApiRequest::ImportRestApiRequest(const ImportRestApiRequest &other)
    : ApiGatewayRequest(new ImportRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportRestApiRequest object.
 */
ImportRestApiRequest::ImportRestApiRequest()
    : ApiGatewayRequest(new ImportRestApiRequestPrivate(ApiGatewayRequest::ImportRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool ImportRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportRestApiRequest::response(QNetworkReply * const reply) const
{
    return new ImportRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::ImportRestApiRequestPrivate
 * \brief The ImportRestApiRequestPrivate class provides private implementation for ImportRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ImportRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
ImportRestApiRequestPrivate::ImportRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, ImportRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportRestApiRequest
 * class' copy constructor.
 */
ImportRestApiRequestPrivate::ImportRestApiRequestPrivate(
    const ImportRestApiRequestPrivate &other, ImportRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
