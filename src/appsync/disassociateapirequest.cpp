// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateapirequest.h"
#include "disassociateapirequest_p.h"
#include "disassociateapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DisassociateApiRequest
 * \brief The DisassociateApiRequest class provides an interface for AppSync DisassociateApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::disassociateApi
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateApiRequest::DisassociateApiRequest(const DisassociateApiRequest &other)
    : AppSyncRequest(new DisassociateApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateApiRequest object.
 */
DisassociateApiRequest::DisassociateApiRequest()
    : AppSyncRequest(new DisassociateApiRequestPrivate(AppSyncRequest::DisassociateApiAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateApiRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DisassociateApiRequestPrivate
 * \brief The DisassociateApiRequestPrivate class provides private implementation for DisassociateApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DisassociateApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DisassociateApiRequestPrivate::DisassociateApiRequestPrivate(
    const AppSyncRequest::Action action, DisassociateApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateApiRequest
 * class' copy constructor.
 */
DisassociateApiRequestPrivate::DisassociateApiRequestPrivate(
    const DisassociateApiRequestPrivate &other, DisassociateApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
