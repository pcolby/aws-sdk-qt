// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicequotaincreaserequestfromtemplaterequest.h"
#include "deleteservicequotaincreaserequestfromtemplaterequest_p.h"
#include "deleteservicequotaincreaserequestfromtemplateresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::DeleteServiceQuotaIncreaseRequestFromTemplateRequest
 * \brief The DeleteServiceQuotaIncreaseRequestFromTemplateRequest class provides an interface for ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::deleteServiceQuotaIncreaseRequestFromTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateRequest::DeleteServiceQuotaIncreaseRequestFromTemplateRequest(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest &other)
    : ServiceQuotasRequest(new DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceQuotaIncreaseRequestFromTemplateRequest object.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateRequest::DeleteServiceQuotaIncreaseRequestFromTemplateRequest()
    : ServiceQuotasRequest(new DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate(ServiceQuotasRequest::DeleteServiceQuotaIncreaseRequestFromTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceQuotaIncreaseRequestFromTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceQuotaIncreaseRequestFromTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceQuotaIncreaseRequestFromTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceQuotaIncreaseRequestFromTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate
 * \brief The DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate class provides private implementation for DeleteServiceQuotaIncreaseRequestFromTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate::DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate(
    const ServiceQuotasRequest::Action action, DeleteServiceQuotaIncreaseRequestFromTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceQuotaIncreaseRequestFromTemplateRequest
 * class' copy constructor.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate::DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate(
    const DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate &other, DeleteServiceQuotaIncreaseRequestFromTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
