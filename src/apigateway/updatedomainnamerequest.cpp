// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainnamerequest.h"
#include "updatedomainnamerequest_p.h"
#include "updatedomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDomainNameRequest
 * \brief The UpdateDomainNameRequest class provides an interface for ApiGateway UpdateDomainName requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest(const UpdateDomainNameRequest &other)
    : ApiGatewayRequest(new UpdateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainNameRequest object.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest()
    : ApiGatewayRequest(new UpdateDomainNameRequestPrivate(ApiGatewayRequest::UpdateDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateDomainNameRequestPrivate
 * \brief The UpdateDomainNameRequestPrivate class provides private implementation for UpdateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDomainNameRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainNameRequest
 * class' copy constructor.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const UpdateDomainNameRequestPrivate &other, UpdateDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
