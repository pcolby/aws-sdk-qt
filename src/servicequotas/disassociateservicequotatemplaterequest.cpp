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
