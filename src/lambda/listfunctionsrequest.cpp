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

#include "listfunctionsrequest.h"
#include "listfunctionsrequest_p.h"
#include "listfunctionsresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListFunctionsRequest
 *
 * \brief The ListFunctionsRequest class provides an interface for Lambda ListFunctions requests.
 *
 * \ingroup Lambda
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
 * \sa LambdaClient::listFunctions
 */

/*!
 * @brief  Constructs a new ListFunctionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFunctionsRequest::ListFunctionsRequest(const ListFunctionsRequest &other)
    : LambdaRequest(new ListFunctionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListFunctionsRequest object.
 */
ListFunctionsRequest::ListFunctionsRequest()
    : LambdaRequest(new ListFunctionsRequestPrivate(LambdaRequest::ListFunctionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFunctionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListFunctionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFunctionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFunctionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListFunctionsRequestPrivate
 *
 * @brief  Private implementation for ListFunctionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFunctionsRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public ListFunctionsRequest instance.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const LambdaRequest::Action action, ListFunctionsRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListFunctionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFunctionsRequest instance.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const ListFunctionsRequestPrivate &other, ListFunctionsRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
