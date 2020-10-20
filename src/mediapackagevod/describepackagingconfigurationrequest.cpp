/*
    Copyright 2013-2020 Paul Colby

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
