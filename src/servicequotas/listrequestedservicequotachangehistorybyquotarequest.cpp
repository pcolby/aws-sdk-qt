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

#include "listrequestedservicequotachangehistorybyquotarequest.h"
#include "listrequestedservicequotachangehistorybyquotarequest_p.h"
#include "listrequestedservicequotachangehistorybyquotaresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListRequestedServiceQuotaChangeHistoryByQuotaRequest
 * \brief The ListRequestedServiceQuotaChangeHistoryByQuotaRequest class provides an interface for ServiceQuotas ListRequestedServiceQuotaChangeHistoryByQuota requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listRequestedServiceQuotaChangeHistoryByQuota
 */

/*!
 * Constructs a copy of \a other.
 */
ListRequestedServiceQuotaChangeHistoryByQuotaRequest::ListRequestedServiceQuotaChangeHistoryByQuotaRequest(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest &other)
    : ServiceQuotasRequest(new ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRequestedServiceQuotaChangeHistoryByQuotaRequest object.
 */
ListRequestedServiceQuotaChangeHistoryByQuotaRequest::ListRequestedServiceQuotaChangeHistoryByQuotaRequest()
    : ServiceQuotasRequest(new ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate(ServiceQuotasRequest::ListRequestedServiceQuotaChangeHistoryByQuotaAction, this))
{

}

/*!
 * \reimp
 */
bool ListRequestedServiceQuotaChangeHistoryByQuotaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRequestedServiceQuotaChangeHistoryByQuotaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRequestedServiceQuotaChangeHistoryByQuotaRequest::response(QNetworkReply * const reply) const
{
    return new ListRequestedServiceQuotaChangeHistoryByQuotaResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate
 * \brief The ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate class provides private implementation for ListRequestedServiceQuotaChangeHistoryByQuotaRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate::ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate(
    const ServiceQuotasRequest::Action action, ListRequestedServiceQuotaChangeHistoryByQuotaRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRequestedServiceQuotaChangeHistoryByQuotaRequest
 * class' copy constructor.
 */
ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate::ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate(
    const ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate &other, ListRequestedServiceQuotaChangeHistoryByQuotaRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
