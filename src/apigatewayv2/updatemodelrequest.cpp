// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemodelrequest.h"
#include "updatemodelrequest_p.h"
#include "updatemodelresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelRequest
 * \brief The UpdateModelRequest class provides an interface for ApiGatewayV2 UpdateModel requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelRequest::UpdateModelRequest(const UpdateModelRequest &other)
    : ApiGatewayV2Request(new UpdateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelRequest object.
 */
UpdateModelRequest::UpdateModelRequest()
    : ApiGatewayV2Request(new UpdateModelRequestPrivate(ApiGatewayV2Request::UpdateModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelRequestPrivate
 * \brief The UpdateModelRequestPrivate class provides private implementation for UpdateModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateModelRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateModelRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelRequest
 * class' copy constructor.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const UpdateModelRequestPrivate &other, UpdateModelRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
