// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapirequest.h"
#include "updateapirequest_p.h"
#include "updateapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiRequest
 * \brief The UpdateApiRequest class provides an interface for ApiGatewayV2 UpdateApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateApi
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiRequest::UpdateApiRequest(const UpdateApiRequest &other)
    : ApiGatewayV2Request(new UpdateApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiRequest object.
 */
UpdateApiRequest::UpdateApiRequest()
    : ApiGatewayV2Request(new UpdateApiRequestPrivate(ApiGatewayV2Request::UpdateApiAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApiRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiRequestPrivate
 * \brief The UpdateApiRequestPrivate class provides private implementation for UpdateApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateApiRequestPrivate::UpdateApiRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiRequest
 * class' copy constructor.
 */
UpdateApiRequestPrivate::UpdateApiRequestPrivate(
    const UpdateApiRequestPrivate &other, UpdateApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
