// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackagingconfigurationrequest.h"
#include "deletepackagingconfigurationrequest_p.h"
#include "deletepackagingconfigurationresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingConfigurationRequest
 * \brief The DeletePackagingConfigurationRequest class provides an interface for MediaPackageVod DeletePackagingConfiguration requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::deletePackagingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePackagingConfigurationRequest::DeletePackagingConfigurationRequest(const DeletePackagingConfigurationRequest &other)
    : MediaPackageVodRequest(new DeletePackagingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePackagingConfigurationRequest object.
 */
DeletePackagingConfigurationRequest::DeletePackagingConfigurationRequest()
    : MediaPackageVodRequest(new DeletePackagingConfigurationRequestPrivate(MediaPackageVodRequest::DeletePackagingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePackagingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePackagingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePackagingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeletePackagingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingConfigurationRequestPrivate
 * \brief The DeletePackagingConfigurationRequestPrivate class provides private implementation for DeletePackagingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DeletePackagingConfigurationRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
DeletePackagingConfigurationRequestPrivate::DeletePackagingConfigurationRequestPrivate(
    const MediaPackageVodRequest::Action action, DeletePackagingConfigurationRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePackagingConfigurationRequest
 * class' copy constructor.
 */
DeletePackagingConfigurationRequestPrivate::DeletePackagingConfigurationRequestPrivate(
    const DeletePackagingConfigurationRequestPrivate &other, DeletePackagingConfigurationRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
