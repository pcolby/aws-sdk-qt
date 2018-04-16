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

#include "recordactivitytaskheartbeatrequest.h"
#include "recordactivitytaskheartbeatrequest_p.h"
#include "recordactivitytaskheartbeatresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::RecordActivityTaskHeartbeatRequest
 *
 * \brief The RecordActivityTaskHeartbeatRequest class encapsulates SWF RecordActivityTaskHeartbeat requests.
 *
 * \ingroup SWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::recordActivityTaskHeartbeat
 */

/*!
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RecordActivityTaskHeartbeatRequest::RecordActivityTaskHeartbeatRequest(const RecordActivityTaskHeartbeatRequest &other)
    : SWFRequest(new RecordActivityTaskHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequest object.
 */
RecordActivityTaskHeartbeatRequest::RecordActivityTaskHeartbeatRequest()
    : SWFRequest(new RecordActivityTaskHeartbeatRequestPrivate(SWFRequest::RecordActivityTaskHeartbeatAction, this))
{

}

/*!
 * \reimp
 */
bool RecordActivityTaskHeartbeatRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RecordActivityTaskHeartbeatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RecordActivityTaskHeartbeatResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * RecordActivityTaskHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new RecordActivityTaskHeartbeatResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RecordActivityTaskHeartbeatRequestPrivate
 *
 * @brief  Private implementation for RecordActivityTaskHeartbeatRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RecordActivityTaskHeartbeatRequest instance.
 */
RecordActivityTaskHeartbeatRequestPrivate::RecordActivityTaskHeartbeatRequestPrivate(
    const SWFRequest::Action action, RecordActivityTaskHeartbeatRequest * const q)
    : SWFRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RecordActivityTaskHeartbeatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RecordActivityTaskHeartbeatRequest instance.
 */
RecordActivityTaskHeartbeatRequestPrivate::RecordActivityTaskHeartbeatRequestPrivate(
    const RecordActivityTaskHeartbeatRequestPrivate &other, RecordActivityTaskHeartbeatRequest * const q)
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
