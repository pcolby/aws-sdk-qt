// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestagerequest.h"
#include "updatestagerequest_p.h"
#include "updatestageresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateStageRequest
 * \brief The UpdateStageRequest class provides an interface for ApiGatewayV2 UpdateStage requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateStage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStageRequest::UpdateStageRequest(const UpdateStageRequest &other)
    : ApiGatewayV2Request(new UpdateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStageRequest object.
 */
UpdateStageRequest::UpdateStageRequest()
    : ApiGatewayV2Request(new UpdateStageRequestPrivate(ApiGatewayV2Request::UpdateStageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateStageRequestPrivate
 * \brief The UpdateStageRequestPrivate class provides private implementation for UpdateStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateStageRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateStageRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStageRequest
 * class' copy constructor.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const UpdateStageRequestPrivate &other, UpdateStageRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
