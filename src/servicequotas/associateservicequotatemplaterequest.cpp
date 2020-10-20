/*
    Copyright 2013-2020 Paul Colby

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
 *  Service Quotas is a web service that you can use to manage many of your AWS service quotas. Quotas, also referred to as
 *  limits, are the maximum values for a resource, item, or operation. This guide provide descriptions of the Service Quotas
 *  actions that you can call from an API. For the Service Quotas user guide, which explains how to use Service Quotas from
 *  the console, see <a href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">What is Service
 *  Quotas</a>.
 * 
 *  </p <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for programming languages and platforms (Java, Ruby, .NET,
 *  iOS, Android, etc...,). The SDKs provide a convenient way to create programmatic access to Service Quotas and AWS. For
 *  information about the AWS SDKs, including how to download and install them, see the <a
 *  href="https://docs.aws.amazon.com/aws.amazon.com/tools">Tools for Amazon Web Services</a>
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
