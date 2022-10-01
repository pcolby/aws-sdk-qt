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

#include "describeimagegenerationconfigurationrequest.h"
#include "describeimagegenerationconfigurationrequest_p.h"
#include "describeimagegenerationconfigurationresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeImageGenerationConfigurationRequest
 * \brief The DescribeImageGenerationConfigurationRequest class provides an interface for KinesisVideo DescribeImageGenerationConfiguration requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeImageGenerationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImageGenerationConfigurationRequest::DescribeImageGenerationConfigurationRequest(const DescribeImageGenerationConfigurationRequest &other)
    : KinesisVideoRequest(new DescribeImageGenerationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImageGenerationConfigurationRequest object.
 */
DescribeImageGenerationConfigurationRequest::DescribeImageGenerationConfigurationRequest()
    : KinesisVideoRequest(new DescribeImageGenerationConfigurationRequestPrivate(KinesisVideoRequest::DescribeImageGenerationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImageGenerationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImageGenerationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImageGenerationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageGenerationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DescribeImageGenerationConfigurationRequestPrivate
 * \brief The DescribeImageGenerationConfigurationRequestPrivate class provides private implementation for DescribeImageGenerationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeImageGenerationConfigurationRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DescribeImageGenerationConfigurationRequestPrivate::DescribeImageGenerationConfigurationRequestPrivate(
    const KinesisVideoRequest::Action action, DescribeImageGenerationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageGenerationConfigurationRequest
 * class' copy constructor.
 */
DescribeImageGenerationConfigurationRequestPrivate::DescribeImageGenerationConfigurationRequestPrivate(
    const DescribeImageGenerationConfigurationRequestPrivate &other, DescribeImageGenerationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
