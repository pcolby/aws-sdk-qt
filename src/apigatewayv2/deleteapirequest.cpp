// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapirequest.h"
#include "deleteapirequest_p.h"
#include "deleteapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiRequest
 * \brief The DeleteApiRequest class provides an interface for ApiGatewayV2 DeleteApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteApi
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiRequest::DeleteApiRequest(const DeleteApiRequest &other)
    : ApiGatewayV2Request(new DeleteApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiRequest object.
 */
DeleteApiRequest::DeleteApiRequest()
    : ApiGatewayV2Request(new DeleteApiRequestPrivate(ApiGatewayV2Request::DeleteApiAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiRequestPrivate
 * \brief The DeleteApiRequestPrivate class provides private implementation for DeleteApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteApiRequestPrivate::DeleteApiRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiRequest
 * class' copy constructor.
 */
DeleteApiRequestPrivate::DeleteApiRequestPrivate(
    const DeleteApiRequestPrivate &other, DeleteApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
