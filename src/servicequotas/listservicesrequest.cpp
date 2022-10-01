// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservicesrequest.h"
#include "listservicesrequest_p.h"
#include "listservicesresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListServicesRequest
 * \brief The ListServicesRequest class provides an interface for ServiceQuotas ListServices requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listServices
 */

/*!
 * Constructs a copy of \a other.
 */
ListServicesRequest::ListServicesRequest(const ListServicesRequest &other)
    : ServiceQuotasRequest(new ListServicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServicesRequest object.
 */
ListServicesRequest::ListServicesRequest()
    : ServiceQuotasRequest(new ListServicesRequestPrivate(ServiceQuotasRequest::ListServicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListServicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServicesRequest::response(QNetworkReply * const reply) const
{
    return new ListServicesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::ListServicesRequestPrivate
 * \brief The ListServicesRequestPrivate class provides private implementation for ListServicesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListServicesRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ServiceQuotasRequest::Action action, ListServicesRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServicesRequest
 * class' copy constructor.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ListServicesRequestPrivate &other, ListServicesRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
