// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestagerequest.h"
#include "deletestagerequest_p.h"
#include "deletestageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteStageRequest
 * \brief The DeleteStageRequest class provides an interface for ApiGateway DeleteStage requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteStage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStageRequest::DeleteStageRequest(const DeleteStageRequest &other)
    : ApiGatewayRequest(new DeleteStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStageRequest object.
 */
DeleteStageRequest::DeleteStageRequest()
    : ApiGatewayRequest(new DeleteStageRequestPrivate(ApiGatewayRequest::DeleteStageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteStageRequestPrivate
 * \brief The DeleteStageRequestPrivate class provides private implementation for DeleteStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteStageRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteStageRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStageRequest
 * class' copy constructor.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const DeleteStageRequestPrivate &other, DeleteStageRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
