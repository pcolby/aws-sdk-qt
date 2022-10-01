// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainnamerequest.h"
#include "updatedomainnamerequest_p.h"
#include "updatedomainnameresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateDomainNameRequest
 * \brief The UpdateDomainNameRequest class provides an interface for ApiGatewayV2 UpdateDomainName requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest(const UpdateDomainNameRequest &other)
    : ApiGatewayV2Request(new UpdateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainNameRequest object.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest()
    : ApiGatewayV2Request(new UpdateDomainNameRequestPrivate(ApiGatewayV2Request::UpdateDomainNameAction, this))
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
 * \class QtAws::ApiGatewayV2::UpdateDomainNameRequestPrivate
 * \brief The UpdateDomainNameRequestPrivate class provides private implementation for UpdateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateDomainNameRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateDomainNameRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
