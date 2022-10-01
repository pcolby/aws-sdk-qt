// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvpclinkrequest.h"
#include "createvpclinkrequest_p.h"
#include "createvpclinkresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateVpcLinkRequest
 * \brief The CreateVpcLinkRequest class provides an interface for ApiGatewayV2 CreateVpcLink requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest(const CreateVpcLinkRequest &other)
    : ApiGatewayV2Request(new CreateVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVpcLinkRequest object.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest()
    : ApiGatewayV2Request(new CreateVpcLinkRequestPrivate(ApiGatewayV2Request::CreateVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateVpcLinkRequestPrivate
 * \brief The CreateVpcLinkRequestPrivate class provides private implementation for CreateVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateVpcLinkRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateVpcLinkRequestPrivate::CreateVpcLinkRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcLinkRequest
 * class' copy constructor.
 */
CreateVpcLinkRequestPrivate::CreateVpcLinkRequestPrivate(
    const CreateVpcLinkRequestPrivate &other, CreateVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
