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

#include "publishlayerversionrequest.h"
#include "publishlayerversionrequest_p.h"
#include "publishlayerversionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PublishLayerVersionRequest
 * \brief The PublishLayerVersionRequest class provides an interface for Lambda PublishLayerVersion requests.
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
 * \sa LambdaClient::publishLayerVersion
 */

/*!
 * Constructs a copy of \a other.
 */
PublishLayerVersionRequest::PublishLayerVersionRequest(const PublishLayerVersionRequest &other)
    : LambdaRequest(new PublishLayerVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishLayerVersionRequest object.
 */
PublishLayerVersionRequest::PublishLayerVersionRequest()
    : LambdaRequest(new PublishLayerVersionRequestPrivate(LambdaRequest::PublishLayerVersionAction, this))
{

}

/*!
 * \reimp
 */
bool PublishLayerVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishLayerVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishLayerVersionRequest::response(QNetworkReply * const reply) const
{
    return new PublishLayerVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::PublishLayerVersionRequestPrivate
 * \brief The PublishLayerVersionRequestPrivate class provides private implementation for PublishLayerVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PublishLayerVersionRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
PublishLayerVersionRequestPrivate::PublishLayerVersionRequestPrivate(
    const LambdaRequest::Action action, PublishLayerVersionRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishLayerVersionRequest
 * class' copy constructor.
 */
PublishLayerVersionRequestPrivate::PublishLayerVersionRequestPrivate(
    const PublishLayerVersionRequestPrivate &other, PublishLayerVersionRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
