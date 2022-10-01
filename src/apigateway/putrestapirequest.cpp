// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrestapirequest.h"
#include "putrestapirequest_p.h"
#include "putrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutRestApiRequest
 * \brief The PutRestApiRequest class provides an interface for ApiGateway PutRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
PutRestApiRequest::PutRestApiRequest(const PutRestApiRequest &other)
    : ApiGatewayRequest(new PutRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRestApiRequest object.
 */
PutRestApiRequest::PutRestApiRequest()
    : ApiGatewayRequest(new PutRestApiRequestPrivate(ApiGatewayRequest::PutRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool PutRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRestApiRequest::response(QNetworkReply * const reply) const
{
    return new PutRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutRestApiRequestPrivate
 * \brief The PutRestApiRequestPrivate class provides private implementation for PutRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutRestApiRequestPrivate::PutRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, PutRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRestApiRequest
 * class' copy constructor.
 */
PutRestApiRequestPrivate::PutRestApiRequestPrivate(
    const PutRestApiRequestPrivate &other, PutRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
