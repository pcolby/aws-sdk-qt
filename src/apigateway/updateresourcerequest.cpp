// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcerequest.h"
#include "updateresourcerequest_p.h"
#include "updateresourceresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateResourceRequest
 * \brief The UpdateResourceRequest class provides an interface for ApiGateway UpdateResource requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateResource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourceRequest::UpdateResourceRequest(const UpdateResourceRequest &other)
    : ApiGatewayRequest(new UpdateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourceRequest object.
 */
UpdateResourceRequest::UpdateResourceRequest()
    : ApiGatewayRequest(new UpdateResourceRequestPrivate(ApiGatewayRequest::UpdateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateResourceRequestPrivate
 * \brief The UpdateResourceRequestPrivate class provides private implementation for UpdateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateResourceRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateResourceRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceRequest
 * class' copy constructor.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const UpdateResourceRequestPrivate &other, UpdateResourceRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
