/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listinfrastructureconfigurationsrequest.h"
#include "listinfrastructureconfigurationsrequest_p.h"
#include "listinfrastructureconfigurationsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListInfrastructureConfigurationsRequest
 * \brief The ListInfrastructureConfigurationsRequest class provides an interface for imagebuilder ListInfrastructureConfigurations requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listInfrastructureConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListInfrastructureConfigurationsRequest::ListInfrastructureConfigurationsRequest(const ListInfrastructureConfigurationsRequest &other)
    : imagebuilderRequest(new ListInfrastructureConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInfrastructureConfigurationsRequest object.
 */
ListInfrastructureConfigurationsRequest::ListInfrastructureConfigurationsRequest()
    : imagebuilderRequest(new ListInfrastructureConfigurationsRequestPrivate(imagebuilderRequest::ListInfrastructureConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInfrastructureConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInfrastructureConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInfrastructureConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListInfrastructureConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::ListInfrastructureConfigurationsRequestPrivate
 * \brief The ListInfrastructureConfigurationsRequestPrivate class provides private implementation for ListInfrastructureConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListInfrastructureConfigurationsRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
ListInfrastructureConfigurationsRequestPrivate::ListInfrastructureConfigurationsRequestPrivate(
    const imagebuilderRequest::Action action, ListInfrastructureConfigurationsRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInfrastructureConfigurationsRequest
 * class' copy constructor.
 */
ListInfrastructureConfigurationsRequestPrivate::ListInfrastructureConfigurationsRequestPrivate(
    const ListInfrastructureConfigurationsRequestPrivate &other, ListInfrastructureConfigurationsRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
