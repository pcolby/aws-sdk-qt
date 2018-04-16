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

#include "listexecutionsrequest.h"
#include "listexecutionsrequest_p.h"
#include "listexecutionsresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::ListExecutionsRequest
 *
 * \brief The ListExecutionsRequest class encapsulates SFN ListExecutions requests.
 *
 * \ingroup SFN
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="http://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SFNClient::listExecutions
 */

/*!
 * @brief  Constructs a new ListExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListExecutionsRequest::ListExecutionsRequest(const ListExecutionsRequest &other)
    : SFNRequest(new ListExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListExecutionsRequest object.
 */
ListExecutionsRequest::ListExecutionsRequest()
    : SFNRequest(new ListExecutionsRequestPrivate(SFNRequest::ListExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListExecutionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SFNClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExecutionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListExecutionsRequestPrivate
 *
 * @brief  Private implementation for ListExecutionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListExecutionsRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public ListExecutionsRequest instance.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const SFNRequest::Action action, ListExecutionsRequest * const q)
    : SFNRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListExecutionsRequest instance.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const ListExecutionsRequestPrivate &other, ListExecutionsRequest * const q)
    : SFNRequestPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
