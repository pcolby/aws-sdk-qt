// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdistributionconfigurationrequest.h"
#include "getdistributionconfigurationrequest_p.h"
#include "getdistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetDistributionConfigurationRequest
 * \brief The GetDistributionConfigurationRequest class provides an interface for ImageBuilder GetDistributionConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetDistributionConfigurationRequest::GetDistributionConfigurationRequest(const GetDistributionConfigurationRequest &other)
    : ImageBuilderRequest(new GetDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDistributionConfigurationRequest object.
 */
GetDistributionConfigurationRequest::GetDistributionConfigurationRequest()
    : ImageBuilderRequest(new GetDistributionConfigurationRequestPrivate(ImageBuilderRequest::GetDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetDistributionConfigurationRequestPrivate
 * \brief The GetDistributionConfigurationRequestPrivate class provides private implementation for GetDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetDistributionConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetDistributionConfigurationRequestPrivate::GetDistributionConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, GetDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDistributionConfigurationRequest
 * class' copy constructor.
 */
GetDistributionConfigurationRequestPrivate::GetDistributionConfigurationRequestPrivate(
    const GetDistributionConfigurationRequestPrivate &other, GetDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
