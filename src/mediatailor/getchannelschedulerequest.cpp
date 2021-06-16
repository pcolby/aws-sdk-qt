/*
    Copyright 2013-2021 Paul Colby

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

#include "getchannelschedulerequest.h"
#include "getchannelschedulerequest_p.h"
#include "getchannelscheduleresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::GetChannelScheduleRequest
 * \brief The GetChannelScheduleRequest class provides an interface for MediaTailor GetChannelSchedule requests.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::getChannelSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
GetChannelScheduleRequest::GetChannelScheduleRequest(const GetChannelScheduleRequest &other)
    : MediaTailorRequest(new GetChannelScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChannelScheduleRequest object.
 */
GetChannelScheduleRequest::GetChannelScheduleRequest()
    : MediaTailorRequest(new GetChannelScheduleRequestPrivate(MediaTailorRequest::GetChannelScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool GetChannelScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChannelScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChannelScheduleRequest::response(QNetworkReply * const reply) const
{
    return new GetChannelScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::GetChannelScheduleRequestPrivate
 * \brief The GetChannelScheduleRequestPrivate class provides private implementation for GetChannelScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a GetChannelScheduleRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
GetChannelScheduleRequestPrivate::GetChannelScheduleRequestPrivate(
    const MediaTailorRequest::Action action, GetChannelScheduleRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChannelScheduleRequest
 * class' copy constructor.
 */
GetChannelScheduleRequestPrivate::GetChannelScheduleRequestPrivate(
    const GetChannelScheduleRequestPrivate &other, GetChannelScheduleRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
