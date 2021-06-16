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

#include "listsecurityconfigurationsrequest.h"
#include "listsecurityconfigurationsrequest_p.h"
#include "listsecurityconfigurationsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListSecurityConfigurationsRequest
 * \brief The ListSecurityConfigurationsRequest class provides an interface for EMR ListSecurityConfigurations requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::listSecurityConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSecurityConfigurationsRequest::ListSecurityConfigurationsRequest(const ListSecurityConfigurationsRequest &other)
    : EmrRequest(new ListSecurityConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSecurityConfigurationsRequest object.
 */
ListSecurityConfigurationsRequest::ListSecurityConfigurationsRequest()
    : EmrRequest(new ListSecurityConfigurationsRequestPrivate(EmrRequest::ListSecurityConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSecurityConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSecurityConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSecurityConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSecurityConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::ListSecurityConfigurationsRequestPrivate
 * \brief The ListSecurityConfigurationsRequestPrivate class provides private implementation for ListSecurityConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListSecurityConfigurationsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListSecurityConfigurationsRequestPrivate::ListSecurityConfigurationsRequestPrivate(
    const EmrRequest::Action action, ListSecurityConfigurationsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSecurityConfigurationsRequest
 * class' copy constructor.
 */
ListSecurityConfigurationsRequestPrivate::ListSecurityConfigurationsRequestPrivate(
    const ListSecurityConfigurationsRequestPrivate &other, ListSecurityConfigurationsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
