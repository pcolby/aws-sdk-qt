// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterestapirequest.h"
#include "deleterestapirequest_p.h"
#include "deleterestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteRestApiRequest
 * \brief The DeleteRestApiRequest class provides an interface for ApiGateway DeleteRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRestApiRequest::DeleteRestApiRequest(const DeleteRestApiRequest &other)
    : ApiGatewayRequest(new DeleteRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRestApiRequest object.
 */
DeleteRestApiRequest::DeleteRestApiRequest()
    : ApiGatewayRequest(new DeleteRestApiRequestPrivate(ApiGatewayRequest::DeleteRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRestApiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteRestApiRequestPrivate
 * \brief The DeleteRestApiRequestPrivate class provides private implementation for DeleteRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteRestApiRequestPrivate::DeleteRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRestApiRequest
 * class' copy constructor.
 */
DeleteRestApiRequestPrivate::DeleteRestApiRequestPrivate(
    const DeleteRestApiRequestPrivate &other, DeleteRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
