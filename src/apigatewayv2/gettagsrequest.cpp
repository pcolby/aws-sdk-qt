// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagsrequest.h"
#include "gettagsrequest_p.h"
#include "gettagsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetTagsRequest
 * \brief The GetTagsRequest class provides an interface for ApiGatewayV2 GetTags requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getTags
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagsRequest::GetTagsRequest(const GetTagsRequest &other)
    : ApiGatewayV2Request(new GetTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagsRequest object.
 */
GetTagsRequest::GetTagsRequest()
    : ApiGatewayV2Request(new GetTagsRequestPrivate(ApiGatewayV2Request::GetTagsAction, this))
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
 * \class QtAws::ApiGatewayV2::GetTagsRequestPrivate
 * \brief The GetTagsRequestPrivate class provides private implementation for GetTagsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetTagsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetTagsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
