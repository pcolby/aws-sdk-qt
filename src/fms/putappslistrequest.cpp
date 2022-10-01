// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putappslistrequest.h"
#include "putappslistrequest_p.h"
#include "putappslistresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::PutAppsListRequest
 * \brief The PutAppsListRequest class provides an interface for Fms PutAppsList requests.
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
 * \sa FmsClient::putAppsList
 */

/*!
 * Constructs a copy of \a other.
 */
PutAppsListRequest::PutAppsListRequest(const PutAppsListRequest &other)
    : FmsRequest(new PutAppsListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAppsListRequest object.
 */
PutAppsListRequest::PutAppsListRequest()
    : FmsRequest(new PutAppsListRequestPrivate(FmsRequest::PutAppsListAction, this))
{

}

/*!
 * \reimp
 */
bool PutAppsListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAppsListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAppsListRequest::response(QNetworkReply * const reply) const
{
    return new PutAppsListResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::PutAppsListRequestPrivate
 * \brief The PutAppsListRequestPrivate class provides private implementation for PutAppsListRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a PutAppsListRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
PutAppsListRequestPrivate::PutAppsListRequestPrivate(
    const FmsRequest::Action action, PutAppsListRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAppsListRequest
 * class' copy constructor.
 */
PutAppsListRequestPrivate::PutAppsListRequestPrivate(
    const PutAppsListRequestPrivate &other, PutAppsListRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
