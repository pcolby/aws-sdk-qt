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
