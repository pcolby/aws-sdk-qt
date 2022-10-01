// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackagingconfigurationrequest.h"
#include "describepackagingconfigurationrequest_p.h"
#include "describepackagingconfigurationresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingConfigurationRequest
 * \brief The DescribePackagingConfigurationRequest class provides an interface for MediaPackageVod DescribePackagingConfiguration requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::describePackagingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackagingConfigurationRequest::DescribePackagingConfigurationRequest(const DescribePackagingConfigurationRequest &other)
    : MediaPackageVodRequest(new DescribePackagingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackagingConfigurationRequest object.
 */
DescribePackagingConfigurationRequest::DescribePackagingConfigurationRequest()
    : MediaPackageVodRequest(new DescribePackagingConfigurationRequestPrivate(MediaPackageVodRequest::DescribePackagingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePackagingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePackagingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePackagingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribePackagingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingConfigurationRequestPrivate
 * \brief The DescribePackagingConfigurationRequestPrivate class provides private implementation for DescribePackagingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DescribePackagingConfigurationRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
DescribePackagingConfigurationRequestPrivate::DescribePackagingConfigurationRequestPrivate(
    const MediaPackageVodRequest::Action action, DescribePackagingConfigurationRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePackagingConfigurationRequest
 * class' copy constructor.
 */
DescribePackagingConfigurationRequestPrivate::DescribePackagingConfigurationRequestPrivate(
    const DescribePackagingConfigurationRequestPrivate &other, DescribePackagingConfigurationRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
