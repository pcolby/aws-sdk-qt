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

#include "startapplicationrequest.h"
#include "startapplicationrequest_p.h"
#include "startapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::StartApplicationRequest
 * \brief The StartApplicationRequest class provides an interface for KinesisAnalytics StartApplication requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::startApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StartApplicationRequest::StartApplicationRequest(const StartApplicationRequest &other)
    : KinesisAnalyticsRequest(new StartApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartApplicationRequest object.
 */
StartApplicationRequest::StartApplicationRequest()
    : KinesisAnalyticsRequest(new StartApplicationRequestPrivate(KinesisAnalyticsRequest::StartApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StartApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::StartApplicationRequestPrivate
 * \brief The StartApplicationRequestPrivate class provides private implementation for StartApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a StartApplicationRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, StartApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartApplicationRequest
 * class' copy constructor.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const StartApplicationRequestPrivate &other, StartApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
