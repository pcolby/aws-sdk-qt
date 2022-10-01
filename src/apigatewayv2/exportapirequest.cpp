// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportapirequest.h"
#include "exportapirequest_p.h"
#include "exportapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ExportApiRequest
 * \brief The ExportApiRequest class provides an interface for ApiGatewayV2 ExportApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::exportApi
 */

/*!
 * Constructs a copy of \a other.
 */
ExportApiRequest::ExportApiRequest(const ExportApiRequest &other)
    : ApiGatewayV2Request(new ExportApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportApiRequest object.
 */
ExportApiRequest::ExportApiRequest()
    : ApiGatewayV2Request(new ExportApiRequestPrivate(ApiGatewayV2Request::ExportApiAction, this))
{

}

/*!
 * \reimp
 */
bool ExportApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportApiRequest::response(QNetworkReply * const reply) const
{
    return new ExportApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::ExportApiRequestPrivate
 * \brief The ExportApiRequestPrivate class provides private implementation for ExportApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ExportApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
ExportApiRequestPrivate::ExportApiRequestPrivate(
    const ApiGatewayV2Request::Action action, ExportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportApiRequest
 * class' copy constructor.
 */
ExportApiRequestPrivate::ExportApiRequestPrivate(
    const ExportApiRequestPrivate &other, ExportApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
