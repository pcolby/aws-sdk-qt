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

#include "createaliasrequest.h"
#include "createaliasrequest_p.h"
#include "createaliasresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::CreateAliasRequest
 * \brief The CreateAliasRequest class provides an interface for Lambda CreateAlias requests.
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
 * \sa LambdaClient::createAlias
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAliasRequest::CreateAliasRequest(const CreateAliasRequest &other)
    : LambdaRequest(new CreateAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAliasRequest object.
 */
CreateAliasRequest::CreateAliasRequest()
    : LambdaRequest(new CreateAliasRequestPrivate(LambdaRequest::CreateAliasAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateAliasResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::CreateAliasRequestPrivate
 * \brief The CreateAliasRequestPrivate class provides private implementation for CreateAliasRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a CreateAliasRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
CreateAliasRequestPrivate::CreateAliasRequestPrivate(
    const LambdaRequest::Action action, CreateAliasRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAliasRequest
 * class' copy constructor.
 */
CreateAliasRequestPrivate::CreateAliasRequestPrivate(
    const CreateAliasRequestPrivate &other, CreateAliasRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
