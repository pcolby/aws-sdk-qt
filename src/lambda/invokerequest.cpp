/*
    Copyright 2013-2019 Paul Colby

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

#include "invokerequest.h"
#include "invokerequest_p.h"
#include "invokeresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::InvokeRequest
 * \brief The InvokeRequest class provides an interface for Lambda Invoke requests.
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
 * \sa LambdaClient::invoke
 */

/*!
 * Constructs a copy of \a other.
 */
InvokeRequest::InvokeRequest(const InvokeRequest &other)
    : LambdaRequest(new InvokeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvokeRequest object.
 */
InvokeRequest::InvokeRequest()
    : LambdaRequest(new InvokeRequestPrivate(LambdaRequest::InvokeAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InvokeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeRequest::response(QNetworkReply * const reply) const
{
    return new InvokeResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::InvokeRequestPrivate
 * \brief The InvokeRequestPrivate class provides private implementation for InvokeRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a InvokeRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
InvokeRequestPrivate::InvokeRequestPrivate(
    const LambdaRequest::Action action, InvokeRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InvokeRequest
 * class' copy constructor.
 */
InvokeRequestPrivate::InvokeRequestPrivate(
    const InvokeRequestPrivate &other, InvokeRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
