/*
    Copyright 2013-2019 Paul Colby

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

#include "createapplicationsnapshotrequest.h"
#include "createapplicationsnapshotrequest_p.h"
#include "createapplicationsnapshotresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationSnapshotRequest
 * \brief The CreateApplicationSnapshotRequest class provides an interface for KinesisAnalyticsV2 CreateApplicationSnapshot requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Documentation for Kinesis Data Analytics API
 *
 * \sa KinesisAnalyticsV2Client::createApplicationSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationSnapshotRequest::CreateApplicationSnapshotRequest(const CreateApplicationSnapshotRequest &other)
    : KinesisAnalyticsV2Request(new CreateApplicationSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationSnapshotRequest object.
 */
CreateApplicationSnapshotRequest::CreateApplicationSnapshotRequest()
    : KinesisAnalyticsV2Request(new CreateApplicationSnapshotRequestPrivate(KinesisAnalyticsV2Request::CreateApplicationSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationSnapshotRequestPrivate
 * \brief The CreateApplicationSnapshotRequestPrivate class provides private implementation for CreateApplicationSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a CreateApplicationSnapshotRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
CreateApplicationSnapshotRequestPrivate::CreateApplicationSnapshotRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, CreateApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationSnapshotRequest
 * class' copy constructor.
 */
CreateApplicationSnapshotRequestPrivate::CreateApplicationSnapshotRequestPrivate(
    const CreateApplicationSnapshotRequestPrivate &other, CreateApplicationSnapshotRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
