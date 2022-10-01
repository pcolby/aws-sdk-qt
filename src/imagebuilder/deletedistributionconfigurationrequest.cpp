// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedistributionconfigurationrequest.h"
#include "deletedistributionconfigurationrequest_p.h"
#include "deletedistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteDistributionConfigurationRequest
 * \brief The DeleteDistributionConfigurationRequest class provides an interface for ImageBuilder DeleteDistributionConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDistributionConfigurationRequest::DeleteDistributionConfigurationRequest(const DeleteDistributionConfigurationRequest &other)
    : ImageBuilderRequest(new DeleteDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDistributionConfigurationRequest object.
 */
DeleteDistributionConfigurationRequest::DeleteDistributionConfigurationRequest()
    : ImageBuilderRequest(new DeleteDistributionConfigurationRequestPrivate(ImageBuilderRequest::DeleteDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteDistributionConfigurationRequestPrivate
 * \brief The DeleteDistributionConfigurationRequestPrivate class provides private implementation for DeleteDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteDistributionConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteDistributionConfigurationRequestPrivate::DeleteDistributionConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDistributionConfigurationRequest
 * class' copy constructor.
 */
DeleteDistributionConfigurationRequestPrivate::DeleteDistributionConfigurationRequestPrivate(
    const DeleteDistributionConfigurationRequestPrivate &other, DeleteDistributionConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
