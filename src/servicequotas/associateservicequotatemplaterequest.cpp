// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateservicequotatemplaterequest.h"
#include "associateservicequotatemplaterequest_p.h"
#include "associateservicequotatemplateresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::AssociateServiceQuotaTemplateRequest
 * \brief The AssociateServiceQuotaTemplateRequest class provides an interface for ServiceQuotas AssociateServiceQuotaTemplate requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::associateServiceQuotaTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateServiceQuotaTemplateRequest::AssociateServiceQuotaTemplateRequest(const AssociateServiceQuotaTemplateRequest &other)
    : ServiceQuotasRequest(new AssociateServiceQuotaTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateServiceQuotaTemplateRequest object.
 */
AssociateServiceQuotaTemplateRequest::AssociateServiceQuotaTemplateRequest()
    : ServiceQuotasRequest(new AssociateServiceQuotaTemplateRequestPrivate(ServiceQuotasRequest::AssociateServiceQuotaTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateServiceQuotaTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateServiceQuotaTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateServiceQuotaTemplateRequest::response(QNetworkReply * const reply) const
{
    return new AssociateServiceQuotaTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::AssociateServiceQuotaTemplateRequestPrivate
 * \brief The AssociateServiceQuotaTemplateRequestPrivate class provides private implementation for AssociateServiceQuotaTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a AssociateServiceQuotaTemplateRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
AssociateServiceQuotaTemplateRequestPrivate::AssociateServiceQuotaTemplateRequestPrivate(
    const ServiceQuotasRequest::Action action, AssociateServiceQuotaTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateServiceQuotaTemplateRequest
 * class' copy constructor.
 */
AssociateServiceQuotaTemplateRequestPrivate::AssociateServiceQuotaTemplateRequestPrivate(
    const AssociateServiceQuotaTemplateRequestPrivate &other, AssociateServiceQuotaTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
