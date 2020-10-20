/*
    Copyright 2013-2020 Paul Colby

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

#include "listrequestedservicequotachangehistoryrequest.h"
#include "listrequestedservicequotachangehistoryrequest_p.h"
#include "listrequestedservicequotachangehistoryresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListRequestedServiceQuotaChangeHistoryRequest
 * \brief The ListRequestedServiceQuotaChangeHistoryRequest class provides an interface for ServiceQuotas ListRequestedServiceQuotaChangeHistory requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  Service Quotas is a web service that you can use to manage many of your AWS service quotas. Quotas, also referred to as
 *  limits, are the maximum values for a resource, item, or operation. This guide provide descriptions of the Service Quotas
 *  actions that you can call from an API. For the Service Quotas user guide, which explains how to use Service Quotas from
 *  the console, see <a href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">What is Service
 *  Quotas</a>.
 * 
 *  </p <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for programming languages and platforms (Java, Ruby, .NET,
 *  iOS, Android, etc...,). The SDKs provide a convenient way to create programmatic access to Service Quotas and AWS. For
 *  information about the AWS SDKs, including how to download and install them, see the <a
 *  href="https://docs.aws.amazon.com/aws.amazon.com/tools">Tools for Amazon Web Services</a>
 *
 * \sa ServiceQuotasClient::listRequestedServiceQuotaChangeHistory
 */

/*!
 * Constructs a copy of \a other.
 */
ListRequestedServiceQuotaChangeHistoryRequest::ListRequestedServiceQuotaChangeHistoryRequest(const ListRequestedServiceQuotaChangeHistoryRequest &other)
    : ServiceQuotasRequest(new ListRequestedServiceQuotaChangeHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRequestedServiceQuotaChangeHistoryRequest object.
 */
ListRequestedServiceQuotaChangeHistoryRequest::ListRequestedServiceQuotaChangeHistoryRequest()
    : ServiceQuotasRequest(new ListRequestedServiceQuotaChangeHistoryRequestPrivate(ServiceQuotasRequest::ListRequestedServiceQuotaChangeHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListRequestedServiceQuotaChangeHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRequestedServiceQuotaChangeHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRequestedServiceQuotaChangeHistoryRequest::response(QNetworkReply * const reply) const
{
    return new ListRequestedServiceQuotaChangeHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::ListRequestedServiceQuotaChangeHistoryRequestPrivate
 * \brief The ListRequestedServiceQuotaChangeHistoryRequestPrivate class provides private implementation for ListRequestedServiceQuotaChangeHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListRequestedServiceQuotaChangeHistoryRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
ListRequestedServiceQuotaChangeHistoryRequestPrivate::ListRequestedServiceQuotaChangeHistoryRequestPrivate(
    const ServiceQuotasRequest::Action action, ListRequestedServiceQuotaChangeHistoryRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRequestedServiceQuotaChangeHistoryRequest
 * class' copy constructor.
 */
ListRequestedServiceQuotaChangeHistoryRequestPrivate::ListRequestedServiceQuotaChangeHistoryRequestPrivate(
    const ListRequestedServiceQuotaChangeHistoryRequestPrivate &other, ListRequestedServiceQuotaChangeHistoryRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
