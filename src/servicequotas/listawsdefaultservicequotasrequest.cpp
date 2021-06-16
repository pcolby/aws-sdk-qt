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

#include "listawsdefaultservicequotasrequest.h"
#include "listawsdefaultservicequotasrequest_p.h"
#include "listawsdefaultservicequotasresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListAWSDefaultServiceQuotasRequest
 * \brief The ListAWSDefaultServiceQuotasRequest class provides an interface for ServiceQuotas ListAWSDefaultServiceQuotas requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listAWSDefaultServiceQuotas
 */

/*!
 * Constructs a copy of \a other.
 */
ListAWSDefaultServiceQuotasRequest::ListAWSDefaultServiceQuotasRequest(const ListAWSDefaultServiceQuotasRequest &other)
    : ServiceQuotasRequest(new ListAWSDefaultServiceQuotasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAWSDefaultServiceQuotasRequest object.
 */
ListAWSDefaultServiceQuotasRequest::ListAWSDefaultServiceQuotasRequest()
    : ServiceQuotasRequest(new ListAWSDefaultServiceQuotasRequestPrivate(ServiceQuotasRequest::ListAWSDefaultServiceQuotasAction, this))
{

}

/*!
 * \reimp
 */
bool ListAWSDefaultServiceQuotasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAWSDefaultServiceQuotasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAWSDefaultServiceQuotasRequest::response(QNetworkReply * const reply) const
{
    return new ListAWSDefaultServiceQuotasResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::ListAWSDefaultServiceQuotasRequestPrivate
 * \brief The ListAWSDefaultServiceQuotasRequestPrivate class provides private implementation for ListAWSDefaultServiceQuotasRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListAWSDefaultServiceQuotasRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
ListAWSDefaultServiceQuotasRequestPrivate::ListAWSDefaultServiceQuotasRequestPrivate(
    const ServiceQuotasRequest::Action action, ListAWSDefaultServiceQuotasRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAWSDefaultServiceQuotasRequest
 * class' copy constructor.
 */
ListAWSDefaultServiceQuotasRequestPrivate::ListAWSDefaultServiceQuotasRequestPrivate(
    const ListAWSDefaultServiceQuotasRequestPrivate &other, ListAWSDefaultServiceQuotasRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
