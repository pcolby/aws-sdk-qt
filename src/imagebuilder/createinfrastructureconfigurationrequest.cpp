// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinfrastructureconfigurationrequest.h"
#include "createinfrastructureconfigurationrequest_p.h"
#include "createinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateInfrastructureConfigurationRequest
 * \brief The CreateInfrastructureConfigurationRequest class provides an interface for ImageBuilder CreateInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInfrastructureConfigurationRequest::CreateInfrastructureConfigurationRequest(const CreateInfrastructureConfigurationRequest &other)
    : ImageBuilderRequest(new CreateInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInfrastructureConfigurationRequest object.
 */
CreateInfrastructureConfigurationRequest::CreateInfrastructureConfigurationRequest()
    : ImageBuilderRequest(new CreateInfrastructureConfigurationRequestPrivate(ImageBuilderRequest::CreateInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateInfrastructureConfigurationRequestPrivate
 * \brief The CreateInfrastructureConfigurationRequestPrivate class provides private implementation for CreateInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateInfrastructureConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateInfrastructureConfigurationRequestPrivate::CreateInfrastructureConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, CreateInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInfrastructureConfigurationRequest
 * class' copy constructor.
 */
CreateInfrastructureConfigurationRequestPrivate::CreateInfrastructureConfigurationRequestPrivate(
    const CreateInfrastructureConfigurationRequestPrivate &other, CreateInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
