// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionconfigurationsrequest.h"
#include "listdistributionconfigurationsrequest_p.h"
#include "listdistributionconfigurationsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListDistributionConfigurationsRequest
 * \brief The ListDistributionConfigurationsRequest class provides an interface for ImageBuilder ListDistributionConfigurations requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listDistributionConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionConfigurationsRequest::ListDistributionConfigurationsRequest(const ListDistributionConfigurationsRequest &other)
    : ImageBuilderRequest(new ListDistributionConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionConfigurationsRequest object.
 */
ListDistributionConfigurationsRequest::ListDistributionConfigurationsRequest()
    : ImageBuilderRequest(new ListDistributionConfigurationsRequestPrivate(ImageBuilderRequest::ListDistributionConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListDistributionConfigurationsRequestPrivate
 * \brief The ListDistributionConfigurationsRequestPrivate class provides private implementation for ListDistributionConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListDistributionConfigurationsRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListDistributionConfigurationsRequestPrivate::ListDistributionConfigurationsRequestPrivate(
    const ImageBuilderRequest::Action action, ListDistributionConfigurationsRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionConfigurationsRequest
 * class' copy constructor.
 */
ListDistributionConfigurationsRequestPrivate::ListDistributionConfigurationsRequestPrivate(
    const ListDistributionConfigurationsRequestPrivate &other, ListDistributionConfigurationsRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
