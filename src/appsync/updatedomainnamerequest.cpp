// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainnamerequest.h"
#include "updatedomainnamerequest_p.h"
#include "updatedomainnameresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateDomainNameRequest
 * \brief The UpdateDomainNameRequest class provides an interface for AppSync UpdateDomainName requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest(const UpdateDomainNameRequest &other)
    : AppSyncRequest(new UpdateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainNameRequest object.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest()
    : AppSyncRequest(new UpdateDomainNameRequestPrivate(AppSyncRequest::UpdateDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateDomainNameRequestPrivate
 * \brief The UpdateDomainNameRequestPrivate class provides private implementation for UpdateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateDomainNameRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const AppSyncRequest::Action action, UpdateDomainNameRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainNameRequest
 * class' copy constructor.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const UpdateDomainNameRequestPrivate &other, UpdateDomainNameRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
