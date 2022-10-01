// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroutesettingsrequest.h"
#include "deleteroutesettingsrequest_p.h"
#include "deleteroutesettingsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsRequest
 * \brief The DeleteRouteSettingsRequest class provides an interface for ApiGatewayV2 DeleteRouteSettings requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteSettingsRequest::DeleteRouteSettingsRequest(const DeleteRouteSettingsRequest &other)
    : ApiGatewayV2Request(new DeleteRouteSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteSettingsRequest object.
 */
DeleteRouteSettingsRequest::DeleteRouteSettingsRequest()
    : ApiGatewayV2Request(new DeleteRouteSettingsRequestPrivate(ApiGatewayV2Request::DeleteRouteSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsRequestPrivate
 * \brief The DeleteRouteSettingsRequestPrivate class provides private implementation for DeleteRouteSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteSettingsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteRouteSettingsRequestPrivate::DeleteRouteSettingsRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteRouteSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteSettingsRequest
 * class' copy constructor.
 */
DeleteRouteSettingsRequestPrivate::DeleteRouteSettingsRequestPrivate(
    const DeleteRouteSettingsRequestPrivate &other, DeleteRouteSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
