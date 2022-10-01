// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelrequest.h"
#include "deletemodelrequest_p.h"
#include "deletemodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteModelRequest
 * \brief The DeleteModelRequest class provides an interface for ApiGateway DeleteModel requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelRequest::DeleteModelRequest(const DeleteModelRequest &other)
    : ApiGatewayRequest(new DeleteModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelRequest object.
 */
DeleteModelRequest::DeleteModelRequest()
    : ApiGatewayRequest(new DeleteModelRequestPrivate(ApiGatewayRequest::DeleteModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteModelRequestPrivate
 * \brief The DeleteModelRequestPrivate class provides private implementation for DeleteModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteModelRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteModelRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelRequest
 * class' copy constructor.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const DeleteModelRequestPrivate &other, DeleteModelRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
