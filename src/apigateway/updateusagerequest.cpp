// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateusagerequest.h"
#include "updateusagerequest_p.h"
#include "updateusageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateUsageRequest
 * \brief The UpdateUsageRequest class provides an interface for ApiGateway UpdateUsage requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateUsage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUsageRequest::UpdateUsageRequest(const UpdateUsageRequest &other)
    : ApiGatewayRequest(new UpdateUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUsageRequest object.
 */
UpdateUsageRequest::UpdateUsageRequest()
    : ApiGatewayRequest(new UpdateUsageRequestPrivate(ApiGatewayRequest::UpdateUsageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUsageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUsageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateUsageRequestPrivate
 * \brief The UpdateUsageRequestPrivate class provides private implementation for UpdateUsageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateUsageRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateUsageRequestPrivate::UpdateUsageRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateUsageRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUsageRequest
 * class' copy constructor.
 */
UpdateUsageRequestPrivate::UpdateUsageRequestPrivate(
    const UpdateUsageRequestPrivate &other, UpdateUsageRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
