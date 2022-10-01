// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexportrequest.h"
#include "getexportrequest_p.h"
#include "getexportresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetExportRequest
 * \brief The GetExportRequest class provides an interface for ApiGateway GetExport requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getExport
 */

/*!
 * Constructs a copy of \a other.
 */
GetExportRequest::GetExportRequest(const GetExportRequest &other)
    : ApiGatewayRequest(new GetExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExportRequest object.
 */
GetExportRequest::GetExportRequest()
    : ApiGatewayRequest(new GetExportRequestPrivate(ApiGatewayRequest::GetExportAction, this))
{

}

/*!
 * \reimp
 */
bool GetExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportRequest::response(QNetworkReply * const reply) const
{
    return new GetExportResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetExportRequestPrivate
 * \brief The GetExportRequestPrivate class provides private implementation for GetExportRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetExportRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const ApiGatewayRequest::Action action, GetExportRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExportRequest
 * class' copy constructor.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const GetExportRequestPrivate &other, GetExportRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
