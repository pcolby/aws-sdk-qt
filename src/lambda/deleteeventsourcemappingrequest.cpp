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

#include "deleteeventsourcemappingrequest.h"
#include "deleteeventsourcemappingrequest_p.h"
#include "deleteeventsourcemappingresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteEventSourceMappingRequest
 *
 * \brief The DeleteEventSourceMappingRequest class provides an interface for Lambda DeleteEventSourceMapping requests.
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
 * \sa LambdaClient::deleteEventSourceMapping
 */

/*!
 * @brief  Constructs a new DeleteEventSourceMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEventSourceMappingRequest::DeleteEventSourceMappingRequest(const DeleteEventSourceMappingRequest &other)
    : LambdaRequest(new DeleteEventSourceMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteEventSourceMappingRequest object.
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
 * @brief  Construct an DeleteEventSourceMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEventSourceMappingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventSourceMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventSourceMappingResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteEventSourceMappingRequestPrivate
 *
 * @brief  Private implementation for DeleteEventSourceMappingRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEventSourceMappingRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public DeleteEventSourceMappingRequest instance.
 */
DeleteEventSourceMappingRequestPrivate::DeleteEventSourceMappingRequestPrivate(
    const LambdaRequest::Action action, DeleteEventSourceMappingRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEventSourceMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventSourceMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEventSourceMappingRequest instance.
 */
DeleteEventSourceMappingRequestPrivate::DeleteEventSourceMappingRequestPrivate(
    const DeleteEventSourceMappingRequestPrivate &other, DeleteEventSourceMappingRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
