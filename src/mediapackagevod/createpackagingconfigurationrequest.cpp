// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
