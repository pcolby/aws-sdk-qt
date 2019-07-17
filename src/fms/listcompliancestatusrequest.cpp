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

#include "listcompliancestatusrequest.h"
#include "listcompliancestatusrequest_p.h"
#include "listcompliancestatusresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::ListComplianceStatusRequest
 * \brief The ListComplianceStatusRequest class provides an interface for FMS ListComplianceStatus requests.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
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
 * \class QtAws::FMS::ListComplianceStatusRequestPrivate
 * \brief The ListComplianceStatusRequestPrivate class provides private implementation for ListComplianceStatusRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
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

} // namespace FMS
} // namespace QtAws
