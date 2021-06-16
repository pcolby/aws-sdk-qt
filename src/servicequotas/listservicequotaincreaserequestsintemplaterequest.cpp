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
