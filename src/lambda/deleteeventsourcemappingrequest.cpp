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

#include "deleteeventsourcemappingrequest.h"
#include "deleteeventsourcemappingrequest_p.h"
#include "deleteeventsourcemappingresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteEventSourceMappingRequest
 * \brief The DeleteEventSourceMappingRequest class provides an interface for Lambda DeleteEventSourceMapping requests.
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
 * \sa LambdaClient::deleteEventSourceMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventSourceMappingRequest::DeleteEventSourceMappingRequest(const DeleteEventSourceMappingRequest &other)
    : LambdaRequest(new DeleteEventSourceMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventSourceMappingRequest object.
 */
DeleteEventSourceMappingRequest::DeleteEventSourceMappingRequest()
    : LambdaRequest(new DeleteEventSourceMappingRequestPrivate(LambdaRequest::DeleteEventSourceMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventSourceMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventSourceMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventSourceMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventSourceMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::DeleteEventSourceMappingRequestPrivate
 * \brief The DeleteEventSourceMappingRequestPrivate class provides private implementation for DeleteEventSourceMappingRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a DeleteEventSourceMappingRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
DeleteEventSourceMappingRequestPrivate::DeleteEventSourceMappingRequestPrivate(
    const LambdaRequest::Action action, DeleteEventSourceMappingRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventSourceMappingRequest
 * class' copy constructor.
 */
DeleteEventSourceMappingRequestPrivate::DeleteEventSourceMappingRequestPrivate(
    const DeleteEventSourceMappingRequestPrivate &other, DeleteEventSourceMappingRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
