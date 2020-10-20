/*
    Copyright 2013-2020 Paul Colby

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

#include "getlayerversionpolicyrequest.h"
#include "getlayerversionpolicyrequest_p.h"
#include "getlayerversionpolicyresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetLayerVersionPolicyRequest
 * \brief The GetLayerVersionPolicyRequest class provides an interface for Lambda GetLayerVersionPolicy requests.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::getLayerVersionPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetLayerVersionPolicyRequest::GetLayerVersionPolicyRequest(const GetLayerVersionPolicyRequest &other)
    : LambdaRequest(new GetLayerVersionPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLayerVersionPolicyRequest object.
 */
GetLayerVersionPolicyRequest::GetLayerVersionPolicyRequest()
    : LambdaRequest(new GetLayerVersionPolicyRequestPrivate(LambdaRequest::GetLayerVersionPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetLayerVersionPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLayerVersionPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLayerVersionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetLayerVersionPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::GetLayerVersionPolicyRequestPrivate
 * \brief The GetLayerVersionPolicyRequestPrivate class provides private implementation for GetLayerVersionPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetLayerVersionPolicyRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
GetLayerVersionPolicyRequestPrivate::GetLayerVersionPolicyRequestPrivate(
    const LambdaRequest::Action action, GetLayerVersionPolicyRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLayerVersionPolicyRequest
 * class' copy constructor.
 */
GetLayerVersionPolicyRequestPrivate::GetLayerVersionPolicyRequestPrivate(
    const GetLayerVersionPolicyRequestPrivate &other, GetLayerVersionPolicyRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
