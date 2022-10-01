// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodeltemplaterequest.h"
#include "getmodeltemplaterequest_p.h"
#include "getmodeltemplateresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelTemplateRequest
 * \brief The GetModelTemplateRequest class provides an interface for ApiGatewayV2 GetModelTemplate requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModelTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelTemplateRequest::GetModelTemplateRequest(const GetModelTemplateRequest &other)
    : ApiGatewayV2Request(new GetModelTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelTemplateRequest object.
 */
GetModelTemplateRequest::GetModelTemplateRequest()
    : ApiGatewayV2Request(new GetModelTemplateRequestPrivate(ApiGatewayV2Request::GetModelTemplateAction, this))
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
 * \class QtAws::ApiGatewayV2::GetModelTemplateRequestPrivate
 * \brief The GetModelTemplateRequestPrivate class provides private implementation for GetModelTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelTemplateRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetModelTemplateRequestPrivate::GetModelTemplateRequestPrivate(
    const ApiGatewayV2Request::Action action, GetModelTemplateRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
