// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteauthorizerrequest.h"
#include "deleteauthorizerrequest_p.h"
#include "deleteauthorizerresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteAuthorizerRequest
 * \brief The DeleteAuthorizerRequest class provides an interface for ApiGatewayV2 DeleteAuthorizer requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest(const DeleteAuthorizerRequest &other)
    : ApiGatewayV2Request(new DeleteAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAuthorizerRequest object.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest()
    : ApiGatewayV2Request(new DeleteAuthorizerRequestPrivate(ApiGatewayV2Request::DeleteAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteAuthorizerRequestPrivate
 * \brief The DeleteAuthorizerRequestPrivate class provides private implementation for DeleteAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteAuthorizerRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteAuthorizerRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAuthorizerRequest
 * class' copy constructor.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const DeleteAuthorizerRequestPrivate &other, DeleteAuthorizerRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
