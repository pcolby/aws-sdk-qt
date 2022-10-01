// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodeltemplaterequest.h"
#include "getmodeltemplaterequest_p.h"
#include "getmodeltemplateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetModelTemplateRequest
 * \brief The GetModelTemplateRequest class provides an interface for ApiGateway GetModelTemplate requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getModelTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelTemplateRequest::GetModelTemplateRequest(const GetModelTemplateRequest &other)
    : ApiGatewayRequest(new GetModelTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelTemplateRequest object.
 */
GetModelTemplateRequest::GetModelTemplateRequest()
    : ApiGatewayRequest(new GetModelTemplateRequestPrivate(ApiGatewayRequest::GetModelTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetModelTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetModelTemplateRequestPrivate
 * \brief The GetModelTemplateRequestPrivate class provides private implementation for GetModelTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetModelTemplateRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetModelTemplateRequestPrivate::GetModelTemplateRequestPrivate(
    const ApiGatewayRequest::Action action, GetModelTemplateRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelTemplateRequest
 * class' copy constructor.
 */
GetModelTemplateRequestPrivate::GetModelTemplateRequestPrivate(
    const GetModelTemplateRequestPrivate &other, GetModelTemplateRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
