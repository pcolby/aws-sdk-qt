// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdistributionconfigurationrequest.h"
#include "createdistributionconfigurationrequest_p.h"
#include "createdistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateDistributionConfigurationRequest
 * \brief The CreateDistributionConfigurationRequest class provides an interface for ImageBuilder CreateDistributionConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDistributionConfigurationRequest::CreateDistributionConfigurationRequest(const CreateDistributionConfigurationRequest &other)
    : ImageBuilderRequest(new CreateDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDistributionConfigurationRequest object.
 */
CreateDistributionConfigurationRequest::CreateDistributionConfigurationRequest()
    : ImageBuilderRequest(new CreateDistributionConfigurationRequestPrivate(ImageBuilderRequest::CreateDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateDistributionConfigurationRequestPrivate
 * \brief The CreateDistributionConfigurationRequestPrivate class provides private implementation for CreateDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateDistributionConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateDistributionConfigurationRequestPrivate::CreateDistributionConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, CreateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDistributionConfigurationRequest
 * class' copy constructor.
 */
CreateDistributionConfigurationRequestPrivate::CreateDistributionConfigurationRequestPrivate(
    const CreateDistributionConfigurationRequestPrivate &other, CreateDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
