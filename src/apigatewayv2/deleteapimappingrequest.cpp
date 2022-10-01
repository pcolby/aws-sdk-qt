// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapimappingrequest.h"
#include "deleteapimappingrequest_p.h"
#include "deleteapimappingresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiMappingRequest
 * \brief The DeleteApiMappingRequest class provides an interface for ApiGatewayV2 DeleteApiMapping requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteApiMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiMappingRequest::DeleteApiMappingRequest(const DeleteApiMappingRequest &other)
    : ApiGatewayV2Request(new DeleteApiMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiMappingRequest object.
 */
DeleteApiMappingRequest::DeleteApiMappingRequest()
    : ApiGatewayV2Request(new DeleteApiMappingRequestPrivate(ApiGatewayV2Request::DeleteApiMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiMappingRequestPrivate
 * \brief The DeleteApiMappingRequestPrivate class provides private implementation for DeleteApiMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteApiMappingRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteApiMappingRequestPrivate::DeleteApiMappingRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiMappingRequest
 * class' copy constructor.
 */
DeleteApiMappingRequestPrivate::DeleteApiMappingRequestPrivate(
    const DeleteApiMappingRequestPrivate &other, DeleteApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
