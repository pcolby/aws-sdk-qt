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

#include "createpackagingconfigurationrequest.h"
#include "createpackagingconfigurationrequest_p.h"
#include "createpackagingconfigurationresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingConfigurationRequest
 * \brief The CreatePackagingConfigurationRequest class provides an interface for MediaPackageVod CreatePackagingConfiguration requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::createPackagingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePackagingConfigurationRequest::CreatePackagingConfigurationRequest(const CreatePackagingConfigurationRequest &other)
    : MediaPackageVodRequest(new CreatePackagingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePackagingConfigurationRequest object.
 */
CreatePackagingConfigurationRequest::CreatePackagingConfigurationRequest()
    : MediaPackageVodRequest(new CreatePackagingConfigurationRequestPrivate(MediaPackageVodRequest::CreatePackagingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePackagingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePackagingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePackagingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreatePackagingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingConfigurationRequestPrivate
 * \brief The CreatePackagingConfigurationRequestPrivate class provides private implementation for CreatePackagingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a CreatePackagingConfigurationRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
CreatePackagingConfigurationRequestPrivate::CreatePackagingConfigurationRequestPrivate(
    const MediaPackageVodRequest::Action action, CreatePackagingConfigurationRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePackagingConfigurationRequest
 * class' copy constructor.
 */
CreatePackagingConfigurationRequestPrivate::CreatePackagingConfigurationRequestPrivate(
    const CreatePackagingConfigurationRequestPrivate &other, CreatePackagingConfigurationRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
