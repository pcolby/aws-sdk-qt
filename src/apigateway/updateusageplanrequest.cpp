// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateusageplanrequest.h"
#include "updateusageplanrequest_p.h"
#include "updateusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateUsagePlanRequest
 * \brief The UpdateUsagePlanRequest class provides an interface for ApiGateway UpdateUsagePlan requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateUsagePlan
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUsagePlanRequest::UpdateUsagePlanRequest(const UpdateUsagePlanRequest &other)
    : ApiGatewayRequest(new UpdateUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUsagePlanRequest object.
 */
UpdateUsagePlanRequest::UpdateUsagePlanRequest()
    : ApiGatewayRequest(new UpdateUsagePlanRequestPrivate(ApiGatewayRequest::UpdateUsagePlanAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUsagePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUsagePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUsagePlanResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateUsagePlanRequestPrivate
 * \brief The UpdateUsagePlanRequestPrivate class provides private implementation for UpdateUsagePlanRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateUsagePlanRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateUsagePlanRequestPrivate::UpdateUsagePlanRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateUsagePlanRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUsagePlanRequest
 * class' copy constructor.
 */
UpdateUsagePlanRequestPrivate::UpdateUsagePlanRequestPrivate(
    const UpdateUsagePlanRequestPrivate &other, UpdateUsagePlanRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
