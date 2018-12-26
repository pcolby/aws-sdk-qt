/*
    Copyright 2013-2018 Paul Colby

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

#include "getlayerversionrequest.h"
#include "getlayerversionrequest_p.h"
#include "getlayerversionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetLayerVersionRequest
 * \brief The GetLayerVersionRequest class provides an interface for Lambda GetLayerVersion requests.
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
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::getLayerVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetLayerVersionRequest::GetLayerVersionRequest(const GetLayerVersionRequest &other)
    : LambdaRequest(new GetLayerVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLayerVersionRequest object.
 */
GetLayerVersionRequest::GetLayerVersionRequest()
    : LambdaRequest(new GetLayerVersionRequestPrivate(LambdaRequest::GetLayerVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetLayerVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLayerVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLayerVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetLayerVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::GetLayerVersionRequestPrivate
 * \brief The GetLayerVersionRequestPrivate class provides private implementation for GetLayerVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetLayerVersionRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
GetLayerVersionRequestPrivate::GetLayerVersionRequestPrivate(
    const LambdaRequest::Action action, GetLayerVersionRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLayerVersionRequest
 * class' copy constructor.
 */
GetLayerVersionRequestPrivate::GetLayerVersionRequestPrivate(
    const GetLayerVersionRequestPrivate &other, GetLayerVersionRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
