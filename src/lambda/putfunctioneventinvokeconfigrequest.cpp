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

#include "putfunctioneventinvokeconfigrequest.h"
#include "putfunctioneventinvokeconfigrequest_p.h"
#include "putfunctioneventinvokeconfigresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PutFunctionEventInvokeConfigRequest
 * \brief The PutFunctionEventInvokeConfigRequest class provides an interface for Lambda PutFunctionEventInvokeConfig requests.
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
 * \sa LambdaClient::putFunctionEventInvokeConfig
 */

/*!
 * Constructs a copy of \a other.
 */
PutFunctionEventInvokeConfigRequest::PutFunctionEventInvokeConfigRequest(const PutFunctionEventInvokeConfigRequest &other)
    : LambdaRequest(new PutFunctionEventInvokeConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutFunctionEventInvokeConfigRequest object.
 */
PutFunctionEventInvokeConfigRequest::PutFunctionEventInvokeConfigRequest()
    : LambdaRequest(new PutFunctionEventInvokeConfigRequestPrivate(LambdaRequest::PutFunctionEventInvokeConfigAction, this))
{

}

/*!
 * \reimp
 */
bool PutFunctionEventInvokeConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutFunctionEventInvokeConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutFunctionEventInvokeConfigRequest::response(QNetworkReply * const reply) const
{
    return new PutFunctionEventInvokeConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::PutFunctionEventInvokeConfigRequestPrivate
 * \brief The PutFunctionEventInvokeConfigRequestPrivate class provides private implementation for PutFunctionEventInvokeConfigRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PutFunctionEventInvokeConfigRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
PutFunctionEventInvokeConfigRequestPrivate::PutFunctionEventInvokeConfigRequestPrivate(
    const LambdaRequest::Action action, PutFunctionEventInvokeConfigRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutFunctionEventInvokeConfigRequest
 * class' copy constructor.
 */
PutFunctionEventInvokeConfigRequestPrivate::PutFunctionEventInvokeConfigRequestPrivate(
    const PutFunctionEventInvokeConfigRequestPrivate &other, PutFunctionEventInvokeConfigRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
