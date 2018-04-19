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

#include "addapplicationoutputrequest.h"
#include "addapplicationoutputrequest_p.h"
#include "addapplicationoutputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputRequest
 * \brief The AddApplicationOutputRequest class provides an interface for KinesisAnalytics AddApplicationOutput requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest(const AddApplicationOutputRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationOutputRequest object.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest()
    : KinesisAnalyticsRequest(new AddApplicationOutputRequestPrivate(KinesisAnalyticsRequest::AddApplicationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputRequestPrivate
 * \brief The AddApplicationOutputRequestPrivate class provides private implementation for AddApplicationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationOutputRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationOutputRequest
 * class' copy constructor.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const AddApplicationOutputRequestPrivate &other, AddApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
