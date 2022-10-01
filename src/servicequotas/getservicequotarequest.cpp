// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicequotarequest.h"
#include "getservicequotarequest_p.h"
#include "getservicequotaresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetServiceQuotaRequest
 * \brief The GetServiceQuotaRequest class provides an interface for ServiceQuotas GetServiceQuota requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::getServiceQuota
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceQuotaRequest::GetServiceQuotaRequest(const GetServiceQuotaRequest &other)
    : ServiceQuotasRequest(new GetServiceQuotaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceQuotaRequest object.
 */
GetServiceQuotaRequest::GetServiceQuotaRequest()
    : ServiceQuotasRequest(new GetServiceQuotaRequestPrivate(ServiceQuotasRequest::GetServiceQuotaAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceQuotaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceQuotaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceQuotaRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceQuotaResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::GetServiceQuotaRequestPrivate
 * \brief The GetServiceQuotaRequestPrivate class provides private implementation for GetServiceQuotaRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetServiceQuotaRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
GetServiceQuotaRequestPrivate::GetServiceQuotaRequestPrivate(
    const ServiceQuotasRequest::Action action, GetServiceQuotaRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceQuotaRequest
 * class' copy constructor.
 */
GetServiceQuotaRequestPrivate::GetServiceQuotaRequestPrivate(
    const GetServiceQuotaRequestPrivate &other, GetServiceQuotaRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
