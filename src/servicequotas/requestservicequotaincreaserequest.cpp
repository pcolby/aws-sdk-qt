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

#include "requestservicequotaincreaserequest.h"
#include "requestservicequotaincreaserequest_p.h"
#include "requestservicequotaincreaseresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::RequestServiceQuotaIncreaseRequest
 * \brief The RequestServiceQuotaIncreaseRequest class provides an interface for ServiceQuotas RequestServiceQuotaIncrease requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::requestServiceQuotaIncrease
 */

/*!
 * Constructs a copy of \a other.
 */
RequestServiceQuotaIncreaseRequest::RequestServiceQuotaIncreaseRequest(const RequestServiceQuotaIncreaseRequest &other)
    : ServiceQuotasRequest(new RequestServiceQuotaIncreaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RequestServiceQuotaIncreaseRequest object.
 */
RequestServiceQuotaIncreaseRequest::RequestServiceQuotaIncreaseRequest()
    : ServiceQuotasRequest(new RequestServiceQuotaIncreaseRequestPrivate(ServiceQuotasRequest::RequestServiceQuotaIncreaseAction, this))
{

}

/*!
 * \reimp
 */
bool RequestServiceQuotaIncreaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RequestServiceQuotaIncreaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RequestServiceQuotaIncreaseRequest::response(QNetworkReply * const reply) const
{
    return new RequestServiceQuotaIncreaseResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::RequestServiceQuotaIncreaseRequestPrivate
 * \brief The RequestServiceQuotaIncreaseRequestPrivate class provides private implementation for RequestServiceQuotaIncreaseRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a RequestServiceQuotaIncreaseRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
RequestServiceQuotaIncreaseRequestPrivate::RequestServiceQuotaIncreaseRequestPrivate(
    const ServiceQuotasRequest::Action action, RequestServiceQuotaIncreaseRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RequestServiceQuotaIncreaseRequest
 * class' copy constructor.
 */
RequestServiceQuotaIncreaseRequestPrivate::RequestServiceQuotaIncreaseRequestPrivate(
    const RequestServiceQuotaIncreaseRequestPrivate &other, RequestServiceQuotaIncreaseRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
