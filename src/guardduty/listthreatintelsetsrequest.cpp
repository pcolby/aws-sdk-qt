/*
    Copyright 2013-2019 Paul Colby

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

#include "listthreatintelsetsrequest.h"
#include "listthreatintelsetsrequest_p.h"
#include "listthreatintelsetsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListThreatIntelSetsRequest
 * \brief The ListThreatIntelSetsRequest class provides an interface for GuardDuty ListThreatIntelSets requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listThreatIntelSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListThreatIntelSetsRequest::ListThreatIntelSetsRequest(const ListThreatIntelSetsRequest &other)
    : GuardDutyRequest(new ListThreatIntelSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThreatIntelSetsRequest object.
 */
ListThreatIntelSetsRequest::ListThreatIntelSetsRequest()
    : GuardDutyRequest(new ListThreatIntelSetsRequestPrivate(GuardDutyRequest::ListThreatIntelSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListThreatIntelSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThreatIntelSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThreatIntelSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListThreatIntelSetsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::ListThreatIntelSetsRequestPrivate
 * \brief The ListThreatIntelSetsRequestPrivate class provides private implementation for ListThreatIntelSetsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListThreatIntelSetsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
ListThreatIntelSetsRequestPrivate::ListThreatIntelSetsRequestPrivate(
    const GuardDutyRequest::Action action, ListThreatIntelSetsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThreatIntelSetsRequest
 * class' copy constructor.
 */
ListThreatIntelSetsRequestPrivate::ListThreatIntelSetsRequestPrivate(
    const ListThreatIntelSetsRequestPrivate &other, ListThreatIntelSetsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
