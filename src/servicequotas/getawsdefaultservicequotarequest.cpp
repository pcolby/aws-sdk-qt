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

#include "getawsdefaultservicequotarequest.h"
#include "getawsdefaultservicequotarequest_p.h"
#include "getawsdefaultservicequotaresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetAWSDefaultServiceQuotaRequest
 * \brief The GetAWSDefaultServiceQuotaRequest class provides an interface for ServiceQuotas GetAWSDefaultServiceQuota requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::getAWSDefaultServiceQuota
 */

/*!
 * Constructs a copy of \a other.
 */
GetAWSDefaultServiceQuotaRequest::GetAWSDefaultServiceQuotaRequest(const GetAWSDefaultServiceQuotaRequest &other)
    : ServiceQuotasRequest(new GetAWSDefaultServiceQuotaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAWSDefaultServiceQuotaRequest object.
 */
GetAWSDefaultServiceQuotaRequest::GetAWSDefaultServiceQuotaRequest()
    : ServiceQuotasRequest(new GetAWSDefaultServiceQuotaRequestPrivate(ServiceQuotasRequest::GetAWSDefaultServiceQuotaAction, this))
{

}

/*!
 * \reimp
 */
bool GetAWSDefaultServiceQuotaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAWSDefaultServiceQuotaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAWSDefaultServiceQuotaRequest::response(QNetworkReply * const reply) const
{
    return new GetAWSDefaultServiceQuotaResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::GetAWSDefaultServiceQuotaRequestPrivate
 * \brief The GetAWSDefaultServiceQuotaRequestPrivate class provides private implementation for GetAWSDefaultServiceQuotaRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetAWSDefaultServiceQuotaRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
GetAWSDefaultServiceQuotaRequestPrivate::GetAWSDefaultServiceQuotaRequestPrivate(
    const ServiceQuotasRequest::Action action, GetAWSDefaultServiceQuotaRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAWSDefaultServiceQuotaRequest
 * class' copy constructor.
 */
GetAWSDefaultServiceQuotaRequestPrivate::GetAWSDefaultServiceQuotaRequestPrivate(
    const GetAWSDefaultServiceQuotaRequestPrivate &other, GetAWSDefaultServiceQuotaRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
