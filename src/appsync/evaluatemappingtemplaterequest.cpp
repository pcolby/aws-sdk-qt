// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "evaluatemappingtemplaterequest.h"
#include "evaluatemappingtemplaterequest_p.h"
#include "evaluatemappingtemplateresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::EvaluateMappingTemplateRequest
 * \brief The EvaluateMappingTemplateRequest class provides an interface for AppSync EvaluateMappingTemplate requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::evaluateMappingTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
EvaluateMappingTemplateRequest::EvaluateMappingTemplateRequest(const EvaluateMappingTemplateRequest &other)
    : AppSyncRequest(new EvaluateMappingTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EvaluateMappingTemplateRequest object.
 */
EvaluateMappingTemplateRequest::EvaluateMappingTemplateRequest()
    : AppSyncRequest(new EvaluateMappingTemplateRequestPrivate(AppSyncRequest::EvaluateMappingTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool EvaluateMappingTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EvaluateMappingTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EvaluateMappingTemplateRequest::response(QNetworkReply * const reply) const
{
    return new EvaluateMappingTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::EvaluateMappingTemplateRequestPrivate
 * \brief The EvaluateMappingTemplateRequestPrivate class provides private implementation for EvaluateMappingTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a EvaluateMappingTemplateRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
EvaluateMappingTemplateRequestPrivate::EvaluateMappingTemplateRequestPrivate(
    const AppSyncRequest::Action action, EvaluateMappingTemplateRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EvaluateMappingTemplateRequest
 * class' copy constructor.
 */
EvaluateMappingTemplateRequestPrivate::EvaluateMappingTemplateRequestPrivate(
    const EvaluateMappingTemplateRequestPrivate &other, EvaluateMappingTemplateRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
