// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappslistrequest.h"
#include "deleteappslistrequest_p.h"
#include "deleteappslistresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DeleteAppsListRequest
 * \brief The DeleteAppsListRequest class provides an interface for Fms DeleteAppsList requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::deleteAppsList
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppsListRequest::DeleteAppsListRequest(const DeleteAppsListRequest &other)
    : FmsRequest(new DeleteAppsListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppsListRequest object.
 */
DeleteAppsListRequest::DeleteAppsListRequest()
    : FmsRequest(new DeleteAppsListRequestPrivate(FmsRequest::DeleteAppsListAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppsListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppsListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppsListRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppsListResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::DeleteAppsListRequestPrivate
 * \brief The DeleteAppsListRequestPrivate class provides private implementation for DeleteAppsListRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DeleteAppsListRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DeleteAppsListRequestPrivate::DeleteAppsListRequestPrivate(
    const FmsRequest::Action action, DeleteAppsListRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppsListRequest
 * class' copy constructor.
 */
DeleteAppsListRequestPrivate::DeleteAppsListRequestPrivate(
    const DeleteAppsListRequestPrivate &other, DeleteAppsListRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
