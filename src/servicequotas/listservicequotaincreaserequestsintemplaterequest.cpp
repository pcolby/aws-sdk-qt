// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservicequotaincreaserequestsintemplaterequest.h"
#include "listservicequotaincreaserequestsintemplaterequest_p.h"
#include "listservicequotaincreaserequestsintemplateresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotaIncreaseRequestsInTemplateRequest
 * \brief The ListServiceQuotaIncreaseRequestsInTemplateRequest class provides an interface for ServiceQuotas ListServiceQuotaIncreaseRequestsInTemplate requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::listServiceQuotaIncreaseRequestsInTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
ListServiceQuotaIncreaseRequestsInTemplateRequest::ListServiceQuotaIncreaseRequestsInTemplateRequest(const ListServiceQuotaIncreaseRequestsInTemplateRequest &other)
    : ServiceQuotasRequest(new ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServiceQuotaIncreaseRequestsInTemplateRequest object.
 */
ListServiceQuotaIncreaseRequestsInTemplateRequest::ListServiceQuotaIncreaseRequestsInTemplateRequest()
    : ServiceQuotasRequest(new ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate(ServiceQuotasRequest::ListServiceQuotaIncreaseRequestsInTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool ListServiceQuotaIncreaseRequestsInTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServiceQuotaIncreaseRequestsInTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServiceQuotaIncreaseRequestsInTemplateRequest::response(QNetworkReply * const reply) const
{
    return new ListServiceQuotaIncreaseRequestsInTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate
 * \brief The ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate class provides private implementation for ListServiceQuotaIncreaseRequestsInTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate::ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate(
    const ServiceQuotasRequest::Action action, ListServiceQuotaIncreaseRequestsInTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServiceQuotaIncreaseRequestsInTemplateRequest
 * class' copy constructor.
 */
ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate::ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate(
    const ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate &other, ListServiceQuotaIncreaseRequestsInTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
