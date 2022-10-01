// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reimportapirequest.h"
#include "reimportapirequest_p.h"
#include "reimportapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiRequest
 * \brief The ReimportApiRequest class provides an interface for ApiGatewayV2 ReimportApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::reimportApi
 */

/*!
 * Constructs a copy of \a other.
 */
ReimportApiRequest::ReimportApiRequest(const ReimportApiRequest &other)
    : ApiGatewayV2Request(new ReimportApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReimportApiRequest object.
 */
ReimportApiRequest::ReimportApiRequest()
    : ApiGatewayV2Request(new ReimportApiRequestPrivate(ApiGatewayV2Request::ReimportApiAction, this))
{

}

/*!
 * \reimp
 */
bool ReimportApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReimportApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReimportApiRequest::response(QNetworkReply * const reply) const
{
    return new ReimportApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiRequestPrivate
 * \brief The ReimportApiRequestPrivate class provides private implementation for ReimportApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ReimportApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
ReimportApiRequestPrivate::ReimportApiRequestPrivate(
    const ApiGatewayV2Request::Action action, ReimportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReimportApiRequest
 * class' copy constructor.
 */
ReimportApiRequestPrivate::ReimportApiRequestPrivate(
    const ReimportApiRequestPrivate &other, ReimportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
