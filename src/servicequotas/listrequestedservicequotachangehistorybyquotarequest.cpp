// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
