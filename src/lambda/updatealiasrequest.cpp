/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatealiasrequest.h"
#include "updatealiasrequest_p.h"
#include "updatealiasresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::UpdateAliasRequest
 * \brief The UpdateAliasRequest class provides an interface for Lambda UpdateAlias requests.
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
 * \sa LambdaClient::updateAlias
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAliasRequest::UpdateAliasRequest(const UpdateAliasRequest &other)
    : LambdaRequest(new UpdateAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAliasRequest object.
 */
UpdateAliasRequest::UpdateAliasRequest()
    : LambdaRequest(new UpdateAliasRequestPrivate(LambdaRequest::UpdateAliasAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAliasResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::UpdateAliasRequestPrivate
 * \brief The UpdateAliasRequestPrivate class provides private implementation for UpdateAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 *
 * Constructs a UpdateAliasRequestPrivate object for Lambda \a action with,
 * public implementation \a q.
 */
UpdateAliasRequestPrivate::UpdateAliasRequestPrivate(
    const LambdaRequest::Action action, UpdateAliasRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAliasRequest
 * class' copy constructor.
 */
UpdateAliasRequestPrivate::UpdateAliasRequestPrivate(
    const UpdateAliasRequestPrivate &other, UpdateAliasRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
