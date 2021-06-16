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

#include "listpackagingconfigurationsrequest.h"
#include "listpackagingconfigurationsrequest_p.h"
#include "listpackagingconfigurationsresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ListPackagingConfigurationsRequest
 * \brief The ListPackagingConfigurationsRequest class provides an interface for MediaPackageVod ListPackagingConfigurations requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::listPackagingConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListPackagingConfigurationsRequest::ListPackagingConfigurationsRequest(const ListPackagingConfigurationsRequest &other)
    : MediaPackageVodRequest(new ListPackagingConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPackagingConfigurationsRequest object.
 */
ListPackagingConfigurationsRequest::ListPackagingConfigurationsRequest()
    : MediaPackageVodRequest(new ListPackagingConfigurationsRequestPrivate(MediaPackageVodRequest::ListPackagingConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPackagingConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPackagingConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPackagingConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListPackagingConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::ListPackagingConfigurationsRequestPrivate
 * \brief The ListPackagingConfigurationsRequestPrivate class provides private implementation for ListPackagingConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ListPackagingConfigurationsRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
ListPackagingConfigurationsRequestPrivate::ListPackagingConfigurationsRequestPrivate(
    const MediaPackageVodRequest::Action action, ListPackagingConfigurationsRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPackagingConfigurationsRequest
 * class' copy constructor.
 */
ListPackagingConfigurationsRequestPrivate::ListPackagingConfigurationsRequestPrivate(
    const ListPackagingConfigurationsRequestPrivate &other, ListPackagingConfigurationsRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
