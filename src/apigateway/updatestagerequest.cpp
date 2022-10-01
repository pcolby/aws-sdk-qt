// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestagerequest.h"
#include "updatestagerequest_p.h"
#include "updatestageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateStageRequest
 * \brief The UpdateStageRequest class provides an interface for ApiGateway UpdateStage requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateStage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStageRequest::UpdateStageRequest(const UpdateStageRequest &other)
    : ApiGatewayRequest(new UpdateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStageRequest object.
 */
UpdateStageRequest::UpdateStageRequest()
    : ApiGatewayRequest(new UpdateStageRequestPrivate(ApiGatewayRequest::UpdateStageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateStageRequestPrivate
 * \brief The UpdateStageRequestPrivate class provides private implementation for UpdateStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateStageRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateStageRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStageRequest
 * class' copy constructor.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const UpdateStageRequestPrivate &other, UpdateStageRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
