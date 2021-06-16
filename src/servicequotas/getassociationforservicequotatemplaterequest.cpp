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

#include "getassociationforservicequotatemplaterequest.h"
#include "getassociationforservicequotatemplaterequest_p.h"
#include "getassociationforservicequotatemplateresponse.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::GetAssociationForServiceQuotaTemplateRequest
 * \brief The GetAssociationForServiceQuotaTemplateRequest class provides an interface for ServiceQuotas GetAssociationForServiceQuotaTemplate requests.
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
 * \sa ServiceQuotasClient::getAssociationForServiceQuotaTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssociationForServiceQuotaTemplateRequest::GetAssociationForServiceQuotaTemplateRequest(const GetAssociationForServiceQuotaTemplateRequest &other)
    : ServiceQuotasRequest(new GetAssociationForServiceQuotaTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssociationForServiceQuotaTemplateRequest object.
 */
GetAssociationForServiceQuotaTemplateRequest::GetAssociationForServiceQuotaTemplateRequest()
    : ServiceQuotasRequest(new GetAssociationForServiceQuotaTemplateRequestPrivate(ServiceQuotasRequest::GetAssociationForServiceQuotaTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssociationForServiceQuotaTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssociationForServiceQuotaTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssociationForServiceQuotaTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetAssociationForServiceQuotaTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceQuotas::GetAssociationForServiceQuotaTemplateRequestPrivate
 * \brief The GetAssociationForServiceQuotaTemplateRequestPrivate class provides private implementation for GetAssociationForServiceQuotaTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a GetAssociationForServiceQuotaTemplateRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
GetAssociationForServiceQuotaTemplateRequestPrivate::GetAssociationForServiceQuotaTemplateRequestPrivate(
    const ServiceQuotasRequest::Action action, GetAssociationForServiceQuotaTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssociationForServiceQuotaTemplateRequest
 * class' copy constructor.
 */
GetAssociationForServiceQuotaTemplateRequestPrivate::GetAssociationForServiceQuotaTemplateRequestPrivate(
    const GetAssociationForServiceQuotaTemplateRequestPrivate &other, GetAssociationForServiceQuotaTemplateRequest * const q)
    : ServiceQuotasRequestPrivate(other, q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
