// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccountrequest.h"
#include "updateaccountrequest_p.h"
#include "updateaccountresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateAccountRequest
 * \brief The UpdateAccountRequest class provides an interface for ApiGateway UpdateAccount requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateAccount
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccountRequest::UpdateAccountRequest(const UpdateAccountRequest &other)
    : ApiGatewayRequest(new UpdateAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccountRequest object.
 */
UpdateAccountRequest::UpdateAccountRequest()
    : ApiGatewayRequest(new UpdateAccountRequestPrivate(ApiGatewayRequest::UpdateAccountAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccountRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateAccountRequestPrivate
 * \brief The UpdateAccountRequestPrivate class provides private implementation for UpdateAccountRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateAccountRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateAccountRequestPrivate::UpdateAccountRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateAccountRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountRequest
 * class' copy constructor.
 */
UpdateAccountRequestPrivate::UpdateAccountRequestPrivate(
    const UpdateAccountRequestPrivate &other, UpdateAccountRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
