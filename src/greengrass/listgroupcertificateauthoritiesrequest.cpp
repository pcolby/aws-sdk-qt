// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
