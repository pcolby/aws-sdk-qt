// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusageplankeyrequest.h"
#include "deleteusageplankeyrequest_p.h"
#include "deleteusageplankeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteUsagePlanKeyRequest
 * \brief The DeleteUsagePlanKeyRequest class provides an interface for ApiGateway DeleteUsagePlanKey requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteUsagePlanKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUsagePlanKeyRequest::DeleteUsagePlanKeyRequest(const DeleteUsagePlanKeyRequest &other)
    : ApiGatewayRequest(new DeleteUsagePlanKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUsagePlanKeyRequest object.
 */
DeleteUsagePlanKeyRequest::DeleteUsagePlanKeyRequest()
    : ApiGatewayRequest(new DeleteUsagePlanKeyRequestPrivate(ApiGatewayRequest::DeleteUsagePlanKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUsagePlanKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUsagePlanKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUsagePlanKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUsagePlanKeyResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteUsagePlanKeyRequestPrivate
 * \brief The DeleteUsagePlanKeyRequestPrivate class provides private implementation for DeleteUsagePlanKeyRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteUsagePlanKeyRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteUsagePlanKeyRequestPrivate::DeleteUsagePlanKeyRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteUsagePlanKeyRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUsagePlanKeyRequest
 * class' copy constructor.
 */
DeleteUsagePlanKeyRequestPrivate::DeleteUsagePlanKeyRequestPrivate(
    const DeleteUsagePlanKeyRequestPrivate &other, DeleteUsagePlanKeyRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
