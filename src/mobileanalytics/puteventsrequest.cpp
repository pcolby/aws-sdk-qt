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

#include "puteventsrequest.h"
#include "puteventsrequest_p.h"
#include "puteventsresponse.h"
#include "mobileanalyticsrequest_p.h"

namespace QtAws {
namespace MobileAnalytics {

/*!
 * \class QtAws::MobileAnalytics::PutEventsRequest
 *
 * \brief The PutEventsRequest class encapsulates MobileAnalytics PutEvents requests.
 *
 * \ingroup MobileAnalytics
 *
 *  Amazon Mobile Analytics is a service for collecting, visualizing, and understanding app usage data at
 *
 * \sa MobileAnalyticsClient::putEvents
 */

/*!
 * @brief  Constructs a new PutEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutEventsRequest::PutEventsRequest(const PutEventsRequest &other)
    : MobileAnalyticsRequest(new PutEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutEventsRequest object.
 */
PutEventsRequest::PutEventsRequest()
    : MobileAnalyticsRequest(new PutEventsRequestPrivate(MobileAnalyticsRequest::PutEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutEventsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MobileAnalyticsClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutEventsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutEventsRequestPrivate
 *
 * @brief  Private implementation for PutEventsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutEventsRequestPrivate object.
 *
 * @param  action  MobileAnalytics action being performed.
 * @param  q       Pointer to this object's public PutEventsRequest instance.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const MobileAnalyticsRequest::Action action, PutEventsRequest * const q)
    : MobileAnalyticsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutEventsRequest instance.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PutEventsRequestPrivate &other, PutEventsRequest * const q)
    : MobileAnalyticsRequestPrivate(other, q)
{

}

} // namespace MobileAnalytics
} // namespace QtAws
