/*
    Copyright 2013-2019 Paul Colby

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
