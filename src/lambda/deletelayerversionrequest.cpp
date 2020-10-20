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

#include "deletelayerversionrequest.h"
#include "deletelayerversionrequest_p.h"
#include "deletelayerversionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteLayerVersionRequest
 * \brief The DeleteLayerVersionRequest class provides an interface for Lambda DeleteLayerVersion requests.
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
 * \sa LambdaClient::deleteLayerVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLayerVersionRequest::DeleteLayerVersionRequest(const DeleteLayerVersionRequest &other)
    : LambdaRequest(new DeleteLayerVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLayerVersionRequest object.
 */
DeleteLayerVersionRequest::DeleteLayerVersionRequest()
    : LambdaRequest(new DeleteLayerVersionRequestPrivate(LambdaRequest::DeleteLayerVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLayerVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLayerVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLayerVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLayerVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::DeleteLayerVersionRequestPrivate
 * \brief The DeleteLayerVersionRequestPrivate class provides private implementation for DeleteLayerVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a DeleteLayerVersionRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
DeleteLayerVersionRequestPrivate::DeleteLayerVersionRequestPrivate(
    const LambdaRequest::Action action, DeleteLayerVersionRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLayerVersionRequest
 * class' copy constructor.
 */
DeleteLayerVersionRequestPrivate::DeleteLayerVersionRequestPrivate(
    const DeleteLayerVersionRequestPrivate &other, DeleteLayerVersionRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
