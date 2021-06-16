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

#include "addpermissionrequest.h"
#include "addpermissionrequest_p.h"
#include "addpermissionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::AddPermissionRequest
 * \brief The AddPermissionRequest class provides an interface for Lambda AddPermission requests.
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
 * \sa LambdaClient::addPermission
 */

/*!
 * Constructs a copy of \a other.
 */
AddPermissionRequest::AddPermissionRequest(const AddPermissionRequest &other)
    : LambdaRequest(new AddPermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddPermissionRequest object.
 */
AddPermissionRequest::AddPermissionRequest()
    : LambdaRequest(new AddPermissionRequestPrivate(LambdaRequest::AddPermissionAction, this))
{

}

/*!
 * \reimp
 */
bool AddPermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddPermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddPermissionRequest::response(QNetworkReply * const reply) const
{
    return new AddPermissionResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::AddPermissionRequestPrivate
 * \brief The AddPermissionRequestPrivate class provides private implementation for AddPermissionRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a AddPermissionRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const LambdaRequest::Action action, AddPermissionRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddPermissionRequest
 * class' copy constructor.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const AddPermissionRequestPrivate &other, AddPermissionRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
