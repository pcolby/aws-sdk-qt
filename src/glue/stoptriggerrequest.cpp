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

#include "stoptriggerrequest.h"
#include "stoptriggerrequest_p.h"
#include "stoptriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopTriggerRequest
 *
 * \brief The StopTriggerRequest class provides an interface for Glue StopTrigger requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::stopTrigger
 */

/*!
 * @brief  Constructs a new StopTriggerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopTriggerRequest::StopTriggerRequest(const StopTriggerRequest &other)
    : GlueRequest(new StopTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopTriggerRequest object.
 */
StopTriggerRequest::StopTriggerRequest()
    : GlueRequest(new StopTriggerRequestPrivate(GlueRequest::StopTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool StopTriggerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopTriggerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopTriggerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTriggerRequest::response(QNetworkReply * const reply) const
{
    return new StopTriggerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopTriggerRequestPrivate
 *
 * @brief  Private implementation for StopTriggerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopTriggerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public StopTriggerRequest instance.
 */
StopTriggerRequestPrivate::StopTriggerRequestPrivate(
    const GlueRequest::Action action, StopTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StopTriggerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopTriggerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopTriggerRequest instance.
 */
StopTriggerRequestPrivate::StopTriggerRequestPrivate(
    const StopTriggerRequestPrivate &other, StopTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
