// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinfrastructureconfigurationrequest.h"
#include "deleteinfrastructureconfigurationrequest_p.h"
#include "deleteinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteInfrastructureConfigurationRequest
 * \brief The DeleteInfrastructureConfigurationRequest class provides an interface for ImageBuilder DeleteInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInfrastructureConfigurationRequest::DeleteInfrastructureConfigurationRequest(const DeleteInfrastructureConfigurationRequest &other)
    : ImageBuilderRequest(new DeleteInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInfrastructureConfigurationRequest object.
 */
DeleteInfrastructureConfigurationRequest::DeleteInfrastructureConfigurationRequest()
    : ImageBuilderRequest(new DeleteInfrastructureConfigurationRequestPrivate(ImageBuilderRequest::DeleteInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteInfrastructureConfigurationRequestPrivate
 * \brief The DeleteInfrastructureConfigurationRequestPrivate class provides private implementation for DeleteInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteInfrastructureConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteInfrastructureConfigurationRequestPrivate::DeleteInfrastructureConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInfrastructureConfigurationRequest
 * class' copy constructor.
 */
DeleteInfrastructureConfigurationRequestPrivate::DeleteInfrastructureConfigurationRequestPrivate(
    const DeleteInfrastructureConfigurationRequestPrivate &other, DeleteInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
