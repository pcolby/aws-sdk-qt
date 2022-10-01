// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
