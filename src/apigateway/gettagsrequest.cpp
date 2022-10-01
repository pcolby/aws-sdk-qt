// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagsrequest.h"
#include "gettagsrequest_p.h"
#include "gettagsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetTagsRequest
 * \brief The GetTagsRequest class provides an interface for ApiGateway GetTags requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getTags
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagsRequest::GetTagsRequest(const GetTagsRequest &other)
    : ApiGatewayRequest(new GetTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagsRequest object.
 */
GetTagsRequest::GetTagsRequest()
    : ApiGatewayRequest(new GetTagsRequestPrivate(ApiGatewayRequest::GetTagsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagsRequest::response(QNetworkReply * const reply) const
{
    return new GetTagsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetTagsRequestPrivate
 * \brief The GetTagsRequestPrivate class provides private implementation for GetTagsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetTagsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const ApiGatewayRequest::Action action, GetTagsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTagsRequest
 * class' copy constructor.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const GetTagsRequestPrivate &other, GetTagsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
