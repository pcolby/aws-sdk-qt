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

#include "disableawsorganizationsaccessrequest.h"
#include "disableawsorganizationsaccessrequest_p.h"
#include "disableawsorganizationsaccessresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisableAWSOrganizationsAccessRequest
 * \brief The DisableAWSOrganizationsAccessRequest class provides an interface for ServiceCatalog DisableAWSOrganizationsAccess requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::disableAWSOrganizationsAccess
 */

/*!
 * Constructs a copy of \a other.
 */
DisableAWSOrganizationsAccessRequest::DisableAWSOrganizationsAccessRequest(const DisableAWSOrganizationsAccessRequest &other)
    : ServiceCatalogRequest(new DisableAWSOrganizationsAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableAWSOrganizationsAccessRequest object.
 */
DisableAWSOrganizationsAccessRequest::DisableAWSOrganizationsAccessRequest()
    : ServiceCatalogRequest(new DisableAWSOrganizationsAccessRequestPrivate(ServiceCatalogRequest::DisableAWSOrganizationsAccessAction, this))
{

}

/*!
 * \reimp
 */
bool DisableAWSOrganizationsAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableAWSOrganizationsAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableAWSOrganizationsAccessRequest::response(QNetworkReply * const reply) const
{
    return new DisableAWSOrganizationsAccessResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DisableAWSOrganizationsAccessRequestPrivate
 * \brief The DisableAWSOrganizationsAccessRequestPrivate class provides private implementation for DisableAWSOrganizationsAccessRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisableAWSOrganizationsAccessRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DisableAWSOrganizationsAccessRequestPrivate::DisableAWSOrganizationsAccessRequestPrivate(
    const ServiceCatalogRequest::Action action, DisableAWSOrganizationsAccessRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableAWSOrganizationsAccessRequest
 * class' copy constructor.
 */
DisableAWSOrganizationsAccessRequestPrivate::DisableAWSOrganizationsAccessRequestPrivate(
    const DisableAWSOrganizationsAccessRequestPrivate &other, DisableAWSOrganizationsAccessRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
