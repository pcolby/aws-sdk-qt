// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelrequest.h"
#include "createmodelrequest_p.h"
#include "createmodelresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateModelRequest
 * \brief The CreateModelRequest class provides an interface for ApiGatewayV2 CreateModel requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelRequest::CreateModelRequest(const CreateModelRequest &other)
    : ApiGatewayV2Request(new CreateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelRequest object.
 */
CreateModelRequest::CreateModelRequest()
    : ApiGatewayV2Request(new CreateModelRequestPrivate(ApiGatewayV2Request::CreateModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateModelRequestPrivate
 * \brief The CreateModelRequestPrivate class provides private implementation for CreateModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateModelRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateModelRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelRequest
 * class' copy constructor.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const CreateModelRequestPrivate &other, CreateModelRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
