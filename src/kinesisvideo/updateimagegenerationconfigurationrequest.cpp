// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateimagegenerationconfigurationrequest.h"
#include "updateimagegenerationconfigurationrequest_p.h"
#include "updateimagegenerationconfigurationresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateImageGenerationConfigurationRequest
 * \brief The UpdateImageGenerationConfigurationRequest class provides an interface for KinesisVideo UpdateImageGenerationConfiguration requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateImageGenerationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateImageGenerationConfigurationRequest::UpdateImageGenerationConfigurationRequest(const UpdateImageGenerationConfigurationRequest &other)
    : KinesisVideoRequest(new UpdateImageGenerationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateImageGenerationConfigurationRequest object.
 */
UpdateImageGenerationConfigurationRequest::UpdateImageGenerationConfigurationRequest()
    : KinesisVideoRequest(new UpdateImageGenerationConfigurationRequestPrivate(KinesisVideoRequest::UpdateImageGenerationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateImageGenerationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateImageGenerationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateImageGenerationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateImageGenerationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::UpdateImageGenerationConfigurationRequestPrivate
 * \brief The UpdateImageGenerationConfigurationRequestPrivate class provides private implementation for UpdateImageGenerationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateImageGenerationConfigurationRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
UpdateImageGenerationConfigurationRequestPrivate::UpdateImageGenerationConfigurationRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateImageGenerationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateImageGenerationConfigurationRequest
 * class' copy constructor.
 */
UpdateImageGenerationConfigurationRequestPrivate::UpdateImageGenerationConfigurationRequestPrivate(
    const UpdateImageGenerationConfigurationRequestPrivate &other, UpdateImageGenerationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
