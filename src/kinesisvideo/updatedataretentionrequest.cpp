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

#include "updatedataretentionrequest.h"
#include "updatedataretentionrequest_p.h"
#include "updatedataretentionresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateDataRetentionRequest
 * \brief The UpdateDataRetentionRequest class provides an interface for KinesisVideo UpdateDataRetention requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateDataRetention
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataRetentionRequest::UpdateDataRetentionRequest(const UpdateDataRetentionRequest &other)
    : KinesisVideoRequest(new UpdateDataRetentionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataRetentionRequest object.
 */
UpdateDataRetentionRequest::UpdateDataRetentionRequest()
    : KinesisVideoRequest(new UpdateDataRetentionRequestPrivate(KinesisVideoRequest::UpdateDataRetentionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataRetentionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataRetentionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataRetentionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataRetentionResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::UpdateDataRetentionRequestPrivate
 * \brief The UpdateDataRetentionRequestPrivate class provides private implementation for UpdateDataRetentionRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateDataRetentionRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
UpdateDataRetentionRequestPrivate::UpdateDataRetentionRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateDataRetentionRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataRetentionRequest
 * class' copy constructor.
 */
UpdateDataRetentionRequestPrivate::UpdateDataRetentionRequestPrivate(
    const UpdateDataRetentionRequestPrivate &other, UpdateDataRetentionRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
