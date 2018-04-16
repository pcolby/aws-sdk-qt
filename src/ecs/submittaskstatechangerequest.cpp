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

#include "submittaskstatechangerequest.h"
#include "submittaskstatechangerequest_p.h"
#include "submittaskstatechangeresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::SubmitTaskStateChangeRequest
 *
 * \brief The SubmitTaskStateChangeRequest class encapsulates ECS SubmitTaskStateChange requests.
 *
 * \ingroup ECS
 *
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks using the Fargate launch type. For more control, you
 *  can host your tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you manage by using the EC2
 *  launch type. For more information about launch types, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon ECS Launch
 * 
 *  Types</a>>
 * 
 *  Amazon ECS lets you launch and stop container-based applications with simple API calls, allows you to get the state of
 *  your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa ECSClient::submitTaskStateChange
 */

/*!
 * @brief  Constructs a new SubmitTaskStateChangeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SubmitTaskStateChangeRequest::SubmitTaskStateChangeRequest(const SubmitTaskStateChangeRequest &other)
    : ECSRequest(new SubmitTaskStateChangeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SubmitTaskStateChangeRequest object.
 */
SubmitTaskStateChangeRequest::SubmitTaskStateChangeRequest()
    : ECSRequest(new SubmitTaskStateChangeRequestPrivate(ECSRequest::SubmitTaskStateChangeAction, this))
{

}

/*!
 * \reimp
 */
bool SubmitTaskStateChangeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SubmitTaskStateChangeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SubmitTaskStateChangeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * SubmitTaskStateChangeRequest::response(QNetworkReply * const reply) const
{
    return new SubmitTaskStateChangeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SubmitTaskStateChangeRequestPrivate
 *
 * @brief  Private implementation for SubmitTaskStateChangeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SubmitTaskStateChangeRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public SubmitTaskStateChangeRequest instance.
 */
SubmitTaskStateChangeRequestPrivate::SubmitTaskStateChangeRequestPrivate(
    const ECSRequest::Action action, SubmitTaskStateChangeRequest * const q)
    : ECSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SubmitTaskStateChangeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SubmitTaskStateChangeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SubmitTaskStateChangeRequest instance.
 */
SubmitTaskStateChangeRequestPrivate::SubmitTaskStateChangeRequestPrivate(
    const SubmitTaskStateChangeRequestPrivate &other, SubmitTaskStateChangeRequest * const q)
    : ECSRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
