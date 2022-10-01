// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateservicequotatemplaterequest.h"
#include "disassociateservicequotatemplaterequest_p.h"
#include "disassociateservicequotatemplateresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::DisassociateServiceQuotaTemplateRequest
 * \brief The DisassociateServiceQuotaTemplateRequest class provides an interface for ServiceQuotas DisassociateServiceQuotaTemplate requests.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::disassociateServiceQuotaTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateServiceQuotaTemplateRequest::DisassociateServiceQuotaTemplateRequest(const DisassociateServiceQuotaTemplateRequest &other)
    : ServiceQuotasRequest(new DisassociateServiceQuotaTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateServiceQuotaTemplateRequest object.
 */
DisassociateServiceQuotaTemplateRequest::DisassociateServiceQuotaTemplateRequest()
    : ServiceQuotasRequest(new DisassociateServiceQuotaTemplateRequestPrivate(ServiceQuotasRequest::DisassociateServiceQuotaTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateServiceQuotaTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateServiceQuotaTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateServiceQuotaTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateServiceQuotaTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::DisassociateServiceQuotaTemplateRequestPrivate
 * \brief The DisassociateServiceQuotaTemplateRequestPrivate class provides private implementation for DisassociateServiceQuotaTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a DisassociateServiceQuotaTemplateRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
DisassociateServiceQuotaTemplateRequestPrivate::DisassociateServiceQuotaTemplateRequestPrivate(
    const ServiceQuotasRequest::Action action, DisassociateServiceQuotaTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateServiceQuotaTemplateRequest
 * class' copy constructor.
 */
DisassociateServiceQuotaTemplateRequestPrivate::DisassociateServiceQuotaTemplateRequestPrivate(
    const DisassociateServiceQuotaTemplateRequestPrivate &other, DisassociateServiceQuotaTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
