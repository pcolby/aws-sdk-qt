// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinfrastructureconfigurationrequest.h"
#include "getinfrastructureconfigurationrequest_p.h"
#include "getinfrastructureconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetInfrastructureConfigurationRequest
 * \brief The GetInfrastructureConfigurationRequest class provides an interface for ImageBuilder GetInfrastructureConfiguration requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getInfrastructureConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetInfrastructureConfigurationRequest::GetInfrastructureConfigurationRequest(const GetInfrastructureConfigurationRequest &other)
    : ImageBuilderRequest(new GetInfrastructureConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInfrastructureConfigurationRequest object.
 */
GetInfrastructureConfigurationRequest::GetInfrastructureConfigurationRequest()
    : ImageBuilderRequest(new GetInfrastructureConfigurationRequestPrivate(ImageBuilderRequest::GetInfrastructureConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetInfrastructureConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInfrastructureConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInfrastructureConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetInfrastructureConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetInfrastructureConfigurationRequestPrivate
 * \brief The GetInfrastructureConfigurationRequestPrivate class provides private implementation for GetInfrastructureConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetInfrastructureConfigurationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetInfrastructureConfigurationRequestPrivate::GetInfrastructureConfigurationRequestPrivate(
    const ImageBuilderRequest::Action action, GetInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInfrastructureConfigurationRequest
 * class' copy constructor.
 */
GetInfrastructureConfigurationRequestPrivate::GetInfrastructureConfigurationRequestPrivate(
    const GetInfrastructureConfigurationRequestPrivate &other, GetInfrastructureConfigurationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
