// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedistributionconfigurationrequest.h"
#include "updatedistributionconfigurationrequest_p.h"
#include "updatedistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateDistributionConfigurationRequest
 * \brief The UpdateDistributionConfigurationRequest class provides an interface for ImageBuilder UpdateDistributionConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDistributionConfigurationRequest::UpdateDistributionConfigurationRequest(const UpdateDistributionConfigurationRequest &other)
    : ImageBuilderRequest(new UpdateDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDistributionConfigurationRequest object.
 */
UpdateDistributionConfigurationRequest::UpdateDistributionConfigurationRequest()
    : ImageBuilderRequest(new UpdateDistributionConfigurationRequestPrivate(ImageBuilderRequest::UpdateDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::UpdateDistributionConfigurationRequestPrivate
 * \brief The UpdateDistributionConfigurationRequestPrivate class provides private implementation for UpdateDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateDistributionConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
UpdateDistributionConfigurationRequestPrivate::UpdateDistributionConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, UpdateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDistributionConfigurationRequest
 * class' copy constructor.
 */
UpdateDistributionConfigurationRequestPrivate::UpdateDistributionConfigurationRequestPrivate(
    const UpdateDistributionConfigurationRequestPrivate &other, UpdateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
