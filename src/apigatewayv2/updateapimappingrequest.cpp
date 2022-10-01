// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapimappingrequest.h"
#include "updateapimappingrequest_p.h"
#include "updateapimappingresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiMappingRequest
 * \brief The UpdateApiMappingRequest class provides an interface for ApiGatewayV2 UpdateApiMapping requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateApiMapping
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiMappingRequest::UpdateApiMappingRequest(const UpdateApiMappingRequest &other)
    : ApiGatewayV2Request(new UpdateApiMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiMappingRequest object.
 */
UpdateApiMappingRequest::UpdateApiMappingRequest()
    : ApiGatewayV2Request(new UpdateApiMappingRequestPrivate(ApiGatewayV2Request::UpdateApiMappingAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApiMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApiMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApiMappingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiMappingRequestPrivate
 * \brief The UpdateApiMappingRequestPrivate class provides private implementation for UpdateApiMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateApiMappingRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateApiMappingRequestPrivate::UpdateApiMappingRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiMappingRequest
 * class' copy constructor.
 */
UpdateApiMappingRequestPrivate::UpdateApiMappingRequestPrivate(
    const UpdateApiMappingRequestPrivate &other, UpdateApiMappingRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
