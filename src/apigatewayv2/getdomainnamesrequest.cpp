// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainnamesrequest.h"
#include "getdomainnamesrequest_p.h"
#include "getdomainnamesresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesRequest
 * \brief The GetDomainNamesRequest class provides an interface for ApiGatewayV2 GetDomainNames requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDomainNames
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainNamesRequest::GetDomainNamesRequest(const GetDomainNamesRequest &other)
    : ApiGatewayV2Request(new GetDomainNamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainNamesRequest object.
 */
GetDomainNamesRequest::GetDomainNamesRequest()
    : ApiGatewayV2Request(new GetDomainNamesRequestPrivate(ApiGatewayV2Request::GetDomainNamesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainNamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainNamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainNamesRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainNamesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesRequestPrivate
 * \brief The GetDomainNamesRequestPrivate class provides private implementation for GetDomainNamesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDomainNamesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetDomainNamesRequestPrivate::GetDomainNamesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetDomainNamesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainNamesRequest
 * class' copy constructor.
 */
GetDomainNamesRequestPrivate::GetDomainNamesRequestPrivate(
    const GetDomainNamesRequestPrivate &other, GetDomainNamesRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
