// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelrequest.h"
#include "deletemodelrequest_p.h"
#include "deletemodelresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteModelRequest
 * \brief The DeleteModelRequest class provides an interface for ApiGatewayV2 DeleteModel requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelRequest::DeleteModelRequest(const DeleteModelRequest &other)
    : ApiGatewayV2Request(new DeleteModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelRequest object.
 */
DeleteModelRequest::DeleteModelRequest()
    : ApiGatewayV2Request(new DeleteModelRequestPrivate(ApiGatewayV2Request::DeleteModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteModelRequestPrivate
 * \brief The DeleteModelRequestPrivate class provides private implementation for DeleteModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteModelRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteModelRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelRequest
 * class' copy constructor.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const DeleteModelRequestPrivate &other, DeleteModelRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
