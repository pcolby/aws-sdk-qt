// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesslogsettingsrequest.h"
#include "deleteaccesslogsettingsrequest_p.h"
#include "deleteaccesslogsettingsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteAccessLogSettingsRequest
 * \brief The DeleteAccessLogSettingsRequest class provides an interface for ApiGatewayV2 DeleteAccessLogSettings requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteAccessLogSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessLogSettingsRequest::DeleteAccessLogSettingsRequest(const DeleteAccessLogSettingsRequest &other)
    : ApiGatewayV2Request(new DeleteAccessLogSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessLogSettingsRequest object.
 */
DeleteAccessLogSettingsRequest::DeleteAccessLogSettingsRequest()
    : ApiGatewayV2Request(new DeleteAccessLogSettingsRequestPrivate(ApiGatewayV2Request::DeleteAccessLogSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessLogSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessLogSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessLogSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessLogSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteAccessLogSettingsRequestPrivate
 * \brief The DeleteAccessLogSettingsRequestPrivate class provides private implementation for DeleteAccessLogSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteAccessLogSettingsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteAccessLogSettingsRequestPrivate::DeleteAccessLogSettingsRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteAccessLogSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessLogSettingsRequest
 * class' copy constructor.
 */
DeleteAccessLogSettingsRequestPrivate::DeleteAccessLogSettingsRequestPrivate(
    const DeleteAccessLogSettingsRequestPrivate &other, DeleteAccessLogSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
