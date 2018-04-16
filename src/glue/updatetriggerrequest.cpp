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

#include "updatetriggerrequest.h"
#include "updatetriggerrequest_p.h"
#include "updatetriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateTriggerRequest
 *
 * \brief The UpdateTriggerRequest class provides an interface for Glue UpdateTrigger requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateTrigger
 */

/*!
 * @brief  Constructs a new UpdateTriggerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTriggerRequest::UpdateTriggerRequest(const UpdateTriggerRequest &other)
    : GlueRequest(new UpdateTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateTriggerRequest object.
 */
UpdateTriggerRequest::UpdateTriggerRequest()
    : GlueRequest(new UpdateTriggerRequestPrivate(GlueRequest::UpdateTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTriggerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateTriggerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTriggerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTriggerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTriggerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateTriggerRequestPrivate
 *
 * @brief  Private implementation for UpdateTriggerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateTriggerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateTriggerRequest instance.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const GlueRequest::Action action, UpdateTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateTriggerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTriggerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTriggerRequest instance.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const UpdateTriggerRequestPrivate &other, UpdateTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
