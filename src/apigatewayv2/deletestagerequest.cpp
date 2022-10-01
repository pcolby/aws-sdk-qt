// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestagerequest.h"
#include "deletestagerequest_p.h"
#include "deletestageresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteStageRequest
 * \brief The DeleteStageRequest class provides an interface for ApiGatewayV2 DeleteStage requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteStage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStageRequest::DeleteStageRequest(const DeleteStageRequest &other)
    : ApiGatewayV2Request(new DeleteStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStageRequest object.
 */
DeleteStageRequest::DeleteStageRequest()
    : ApiGatewayV2Request(new DeleteStageRequestPrivate(ApiGatewayV2Request::DeleteStageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteStageRequestPrivate
 * \brief The DeleteStageRequestPrivate class provides private implementation for DeleteStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteStageRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteStageRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStageRequest
 * class' copy constructor.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const DeleteStageRequestPrivate &other, DeleteStageRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
