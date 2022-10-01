// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapirequest.h"
#include "createapirequest_p.h"
#include "createapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateApiRequest
 * \brief The CreateApiRequest class provides an interface for ApiGatewayV2 CreateApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createApi
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApiRequest::CreateApiRequest(const CreateApiRequest &other)
    : ApiGatewayV2Request(new CreateApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApiRequest object.
 */
CreateApiRequest::CreateApiRequest()
    : ApiGatewayV2Request(new CreateApiRequestPrivate(ApiGatewayV2Request::CreateApiAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApiRequest::response(QNetworkReply * const reply) const
{
    return new CreateApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateApiRequestPrivate
 * \brief The CreateApiRequestPrivate class provides private implementation for CreateApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateApiRequestPrivate::CreateApiRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApiRequest
 * class' copy constructor.
 */
CreateApiRequestPrivate::CreateApiRequestPrivate(
    const CreateApiRequestPrivate &other, CreateApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
