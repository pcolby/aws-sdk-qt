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

#include "putdraftappversiontemplaterequest.h"
#include "putdraftappversiontemplaterequest_p.h"
#include "putdraftappversiontemplateresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::PutDraftAppVersionTemplateRequest
 * \brief The PutDraftAppVersionTemplateRequest class provides an interface for ResilienceHub PutDraftAppVersionTemplate requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::putDraftAppVersionTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
PutDraftAppVersionTemplateRequest::PutDraftAppVersionTemplateRequest(const PutDraftAppVersionTemplateRequest &other)
    : ResilienceHubRequest(new PutDraftAppVersionTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDraftAppVersionTemplateRequest object.
 */
PutDraftAppVersionTemplateRequest::PutDraftAppVersionTemplateRequest()
    : ResilienceHubRequest(new PutDraftAppVersionTemplateRequestPrivate(ResilienceHubRequest::PutDraftAppVersionTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool PutDraftAppVersionTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDraftAppVersionTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDraftAppVersionTemplateRequest::response(QNetworkReply * const reply) const
{
    return new PutDraftAppVersionTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::PutDraftAppVersionTemplateRequestPrivate
 * \brief The PutDraftAppVersionTemplateRequestPrivate class provides private implementation for PutDraftAppVersionTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a PutDraftAppVersionTemplateRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
PutDraftAppVersionTemplateRequestPrivate::PutDraftAppVersionTemplateRequestPrivate(
    const ResilienceHubRequest::Action action, PutDraftAppVersionTemplateRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDraftAppVersionTemplateRequest
 * class' copy constructor.
 */
PutDraftAppVersionTemplateRequestPrivate::PutDraftAppVersionTemplateRequestPrivate(
    const PutDraftAppVersionTemplateRequestPrivate &other, PutDraftAppVersionTemplateRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
