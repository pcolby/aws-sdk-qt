// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
