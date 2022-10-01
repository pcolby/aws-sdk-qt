// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
