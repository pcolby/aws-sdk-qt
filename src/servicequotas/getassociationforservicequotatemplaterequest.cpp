// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
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
