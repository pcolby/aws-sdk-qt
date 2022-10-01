// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putservicequotaincreaserequestintotemplaterequest.h"
#include "putservicequotaincreaserequestintotemplaterequest_p.h"
#include "putservicequotaincreaserequestintotemplateresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::PutServiceQuotaIncreaseRequestIntoTemplateRequest
 * \brief The PutServiceQuotaIncreaseRequestIntoTemplateRequest class provides an interface for ServiceQuotas PutServiceQuotaIncreaseRequestIntoTemplate requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::putServiceQuotaIncreaseRequestIntoTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
PutServiceQuotaIncreaseRequestIntoTemplateRequest::PutServiceQuotaIncreaseRequestIntoTemplateRequest(const PutServiceQuotaIncreaseRequestIntoTemplateRequest &other)
    : ServiceQuotasRequest(new PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutServiceQuotaIncreaseRequestIntoTemplateRequest object.
 */
PutServiceQuotaIncreaseRequestIntoTemplateRequest::PutServiceQuotaIncreaseRequestIntoTemplateRequest()
    : ServiceQuotasRequest(new PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(ServiceQuotasRequest::PutServiceQuotaIncreaseRequestIntoTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool PutServiceQuotaIncreaseRequestIntoTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutServiceQuotaIncreaseRequestIntoTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutServiceQuotaIncreaseRequestIntoTemplateRequest::response(QNetworkReply * const reply) const
{
    return new PutServiceQuotaIncreaseRequestIntoTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate
 * \brief The PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate class provides private implementation for PutServiceQuotaIncreaseRequestIntoTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate::PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(
    const ServiceQuotasRequest::Action action, PutServiceQuotaIncreaseRequestIntoTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutServiceQuotaIncreaseRequestIntoTemplateRequest
 * class' copy constructor.
 */
PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate::PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(
    const PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate &other, PutServiceQuotaIncreaseRequestIntoTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
