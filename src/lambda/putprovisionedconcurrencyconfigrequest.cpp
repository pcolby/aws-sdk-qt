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

#include "putprovisionedconcurrencyconfigrequest.h"
#include "putprovisionedconcurrencyconfigrequest_p.h"
#include "putprovisionedconcurrencyconfigresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PutProvisionedConcurrencyConfigRequest
 * \brief The PutProvisionedConcurrencyConfigRequest class provides an interface for Lambda PutProvisionedConcurrencyConfig requests.
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
 * \sa LambdaClient::putProvisionedConcurrencyConfig
 */

/*!
 * Constructs a copy of \a other.
 */
PutProvisionedConcurrencyConfigRequest::PutProvisionedConcurrencyConfigRequest(const PutProvisionedConcurrencyConfigRequest &other)
    : LambdaRequest(new PutProvisionedConcurrencyConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutProvisionedConcurrencyConfigRequest object.
 */
PutProvisionedConcurrencyConfigRequest::PutProvisionedConcurrencyConfigRequest()
    : LambdaRequest(new PutProvisionedConcurrencyConfigRequestPrivate(LambdaRequest::PutProvisionedConcurrencyConfigAction, this))
{

}

/*!
 * \reimp
 */
bool PutProvisionedConcurrencyConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutProvisionedConcurrencyConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutProvisionedConcurrencyConfigRequest::response(QNetworkReply * const reply) const
{
    return new PutProvisionedConcurrencyConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::PutProvisionedConcurrencyConfigRequestPrivate
 * \brief The PutProvisionedConcurrencyConfigRequestPrivate class provides private implementation for PutProvisionedConcurrencyConfigRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PutProvisionedConcurrencyConfigRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
PutProvisionedConcurrencyConfigRequestPrivate::PutProvisionedConcurrencyConfigRequestPrivate(
    const LambdaRequest::Action action, PutProvisionedConcurrencyConfigRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutProvisionedConcurrencyConfigRequest
 * class' copy constructor.
 */
PutProvisionedConcurrencyConfigRequestPrivate::PutProvisionedConcurrencyConfigRequestPrivate(
    const PutProvisionedConcurrencyConfigRequestPrivate &other, PutProvisionedConcurrencyConfigRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
