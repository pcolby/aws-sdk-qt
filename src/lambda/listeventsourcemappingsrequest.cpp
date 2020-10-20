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

#include "listeventsourcemappingsrequest.h"
#include "listeventsourcemappingsrequest_p.h"
#include "listeventsourcemappingsresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListEventSourceMappingsRequest
 * \brief The ListEventSourceMappingsRequest class provides an interface for Lambda ListEventSourceMappings requests.
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
 * \sa LambdaClient::listEventSourceMappings
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventSourceMappingsRequest::ListEventSourceMappingsRequest(const ListEventSourceMappingsRequest &other)
    : LambdaRequest(new ListEventSourceMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventSourceMappingsRequest object.
 */
ListEventSourceMappingsRequest::ListEventSourceMappingsRequest()
    : LambdaRequest(new ListEventSourceMappingsRequestPrivate(LambdaRequest::ListEventSourceMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventSourceMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventSourceMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventSourceMappingsRequest::response(QNetworkReply * const reply) const
{
    return new ListEventSourceMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::ListEventSourceMappingsRequestPrivate
 * \brief The ListEventSourceMappingsRequestPrivate class provides private implementation for ListEventSourceMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListEventSourceMappingsRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
ListEventSourceMappingsRequestPrivate::ListEventSourceMappingsRequestPrivate(
    const LambdaRequest::Action action, ListEventSourceMappingsRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventSourceMappingsRequest
 * class' copy constructor.
 */
ListEventSourceMappingsRequestPrivate::ListEventSourceMappingsRequestPrivate(
    const ListEventSourceMappingsRequestPrivate &other, ListEventSourceMappingsRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
