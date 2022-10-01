// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
