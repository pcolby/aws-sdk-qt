/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getmodeltemplaterequest.h"
#include "getmodeltemplaterequest_p.h"
#include "getmodeltemplateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetModelTemplateRequest
 * \brief The GetModelTemplateRequest class provides an interface for APIGateway GetModelTemplate requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getModelTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelTemplateRequest::GetModelTemplateRequest(const GetModelTemplateRequest &other)
    : APIGatewayRequest(new GetModelTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelTemplateRequest object.
 */
GetModelTemplateRequest::GetModelTemplateRequest()
    : APIGatewayRequest(new GetModelTemplateRequestPrivate(APIGatewayRequest::GetModelTemplateAction, this))
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
 * \class QtAws::APIGateway::GetModelTemplateRequestPrivate
 * \brief The GetModelTemplateRequestPrivate class provides private implementation for GetModelTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetModelTemplateRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetModelTemplateRequestPrivate::GetModelTemplateRequestPrivate(
    const APIGatewayRequest::Action action, GetModelTemplateRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
