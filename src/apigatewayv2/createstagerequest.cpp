// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstagerequest.h"
#include "createstagerequest_p.h"
#include "createstageresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateStageRequest
 * \brief The CreateStageRequest class provides an interface for ApiGatewayV2 CreateStage requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createStage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStageRequest::CreateStageRequest(const CreateStageRequest &other)
    : ApiGatewayV2Request(new CreateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStageRequest object.
 */
CreateStageRequest::CreateStageRequest()
    : ApiGatewayV2Request(new CreateStageRequestPrivate(ApiGatewayV2Request::CreateStageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStageRequest::response(QNetworkReply * const reply) const
{
    return new CreateStageResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateStageRequestPrivate
 * \brief The CreateStageRequestPrivate class provides private implementation for CreateStageRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateStageRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateStageRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStageRequest
 * class' copy constructor.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const CreateStageRequestPrivate &other, CreateStageRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
