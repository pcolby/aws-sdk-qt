// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
