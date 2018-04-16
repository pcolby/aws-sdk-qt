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

#include "starttriggerrequest.h"
#include "starttriggerrequest_p.h"
#include "starttriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartTriggerRequest
 *
 * \brief The StartTriggerRequest class encapsulates Glue StartTrigger requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startTrigger
 */

/*!
 * @brief  Constructs a new StartTriggerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartTriggerRequest::StartTriggerRequest(const StartTriggerRequest &other)
    : GlueRequest(new StartTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartTriggerRequest object.
 */
StartTriggerRequest::StartTriggerRequest()
    : GlueRequest(new StartTriggerRequestPrivate(GlueRequest::StartTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool StartTriggerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartTriggerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartTriggerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTriggerRequest::response(QNetworkReply * const reply) const
{
    return new StartTriggerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartTriggerRequestPrivate
 *
 * @brief  Private implementation for StartTriggerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartTriggerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public StartTriggerRequest instance.
 */
StartTriggerRequestPrivate::StartTriggerRequestPrivate(
    const GlueRequest::Action action, StartTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StartTriggerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartTriggerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartTriggerRequest instance.
 */
StartTriggerRequestPrivate::StartTriggerRequestPrivate(
    const StartTriggerRequestPrivate &other, StartTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
