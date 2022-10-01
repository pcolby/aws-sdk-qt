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
