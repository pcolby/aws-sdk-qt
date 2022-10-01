// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinfrastructureconfigurationrequest.h"
#include "updateinfrastructureconfigurationrequest_p.h"
#include "updateinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationRequest
 * \brief The UpdateInfrastructureConfigurationRequest class provides an interface for ImageBuilder UpdateInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInfrastructureConfigurationRequest::UpdateInfrastructureConfigurationRequest(const UpdateInfrastructureConfigurationRequest &other)
    : ImageBuilderRequest(new UpdateInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInfrastructureConfigurationRequest object.
 */
UpdateInfrastructureConfigurationRequest::UpdateInfrastructureConfigurationRequest()
    : ImageBuilderRequest(new UpdateInfrastructureConfigurationRequestPrivate(ImageBuilderRequest::UpdateInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationRequestPrivate
 * \brief The UpdateInfrastructureConfigurationRequestPrivate class provides private implementation for UpdateInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateInfrastructureConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
UpdateInfrastructureConfigurationRequestPrivate::UpdateInfrastructureConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, UpdateInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInfrastructureConfigurationRequest
 * class' copy constructor.
 */
UpdateInfrastructureConfigurationRequestPrivate::UpdateInfrastructureConfigurationRequestPrivate(
    const UpdateInfrastructureConfigurationRequestPrivate &other, UpdateInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
