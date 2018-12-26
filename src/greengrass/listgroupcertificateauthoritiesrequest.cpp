/*
    Copyright 2013-2018 Paul Colby

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

#include "listgroupcertificateauthoritiesrequest.h"
#include "listgroupcertificateauthoritiesrequest_p.h"
#include "listgroupcertificateauthoritiesresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupCertificateAuthoritiesRequest
 * \brief The ListGroupCertificateAuthoritiesRequest class provides an interface for Greengrass ListGroupCertificateAuthorities requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listGroupCertificateAuthorities
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupCertificateAuthoritiesRequest::ListGroupCertificateAuthoritiesRequest(const ListGroupCertificateAuthoritiesRequest &other)
    : GreengrassRequest(new ListGroupCertificateAuthoritiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupCertificateAuthoritiesRequest object.
 */
ListGroupCertificateAuthoritiesRequest::ListGroupCertificateAuthoritiesRequest()
    : GreengrassRequest(new ListGroupCertificateAuthoritiesRequestPrivate(GreengrassRequest::ListGroupCertificateAuthoritiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupCertificateAuthoritiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupCertificateAuthoritiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupCertificateAuthoritiesRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupCertificateAuthoritiesResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListGroupCertificateAuthoritiesRequestPrivate
 * \brief The ListGroupCertificateAuthoritiesRequestPrivate class provides private implementation for ListGroupCertificateAuthoritiesRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListGroupCertificateAuthoritiesRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListGroupCertificateAuthoritiesRequestPrivate::ListGroupCertificateAuthoritiesRequestPrivate(
    const GreengrassRequest::Action action, ListGroupCertificateAuthoritiesRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupCertificateAuthoritiesRequest
 * class' copy constructor.
 */
ListGroupCertificateAuthoritiesRequestPrivate::ListGroupCertificateAuthoritiesRequestPrivate(
    const ListGroupCertificateAuthoritiesRequestPrivate &other, ListGroupCertificateAuthoritiesRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
