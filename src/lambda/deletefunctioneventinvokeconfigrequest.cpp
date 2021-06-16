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

#include "deletefunctioneventinvokeconfigrequest.h"
#include "deletefunctioneventinvokeconfigrequest_p.h"
#include "deletefunctioneventinvokeconfigresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteFunctionEventInvokeConfigRequest
 * \brief The DeleteFunctionEventInvokeConfigRequest class provides an interface for Lambda DeleteFunctionEventInvokeConfig requests.
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
 * \sa LambdaClient::deleteFunctionEventInvokeConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFunctionEventInvokeConfigRequest::DeleteFunctionEventInvokeConfigRequest(const DeleteFunctionEventInvokeConfigRequest &other)
    : LambdaRequest(new DeleteFunctionEventInvokeConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFunctionEventInvokeConfigRequest object.
 */
DeleteFunctionEventInvokeConfigRequest::DeleteFunctionEventInvokeConfigRequest()
    : LambdaRequest(new DeleteFunctionEventInvokeConfigRequestPrivate(LambdaRequest::DeleteFunctionEventInvokeConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFunctionEventInvokeConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFunctionEventInvokeConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFunctionEventInvokeConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionEventInvokeConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::DeleteFunctionEventInvokeConfigRequestPrivate
 * \brief The DeleteFunctionEventInvokeConfigRequestPrivate class provides private implementation for DeleteFunctionEventInvokeConfigRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a DeleteFunctionEventInvokeConfigRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
DeleteFunctionEventInvokeConfigRequestPrivate::DeleteFunctionEventInvokeConfigRequestPrivate(
    const LambdaRequest::Action action, DeleteFunctionEventInvokeConfigRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionEventInvokeConfigRequest
 * class' copy constructor.
 */
DeleteFunctionEventInvokeConfigRequestPrivate::DeleteFunctionEventInvokeConfigRequestPrivate(
    const DeleteFunctionEventInvokeConfigRequestPrivate &other, DeleteFunctionEventInvokeConfigRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
