// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcompliancestatusrequest.h"
#include "listcompliancestatusrequest_p.h"
#include "listcompliancestatusresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListComplianceStatusRequest
 * \brief The ListComplianceStatusRequest class provides an interface for Fms ListComplianceStatus requests.
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
 * \sa FmsClient::listComplianceStatus
 */

/*!
 * Constructs a copy of \a other.
 */
ListComplianceStatusRequest::ListComplianceStatusRequest(const ListComplianceStatusRequest &other)
    : FmsRequest(new ListComplianceStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComplianceStatusRequest object.
 */
ListComplianceStatusRequest::ListComplianceStatusRequest()
    : FmsRequest(new ListComplianceStatusRequestPrivate(FmsRequest::ListComplianceStatusAction, this))
{

}

/*!
 * \reimp
 */
bool ListComplianceStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComplianceStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComplianceStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListComplianceStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::ListComplianceStatusRequestPrivate
 * \brief The ListComplianceStatusRequestPrivate class provides private implementation for ListComplianceStatusRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListComplianceStatusRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListComplianceStatusRequestPrivate::ListComplianceStatusRequestPrivate(
    const FmsRequest::Action action, ListComplianceStatusRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComplianceStatusRequest
 * class' copy constructor.
 */
ListComplianceStatusRequestPrivate::ListComplianceStatusRequestPrivate(
    const ListComplianceStatusRequestPrivate &other, ListComplianceStatusRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
