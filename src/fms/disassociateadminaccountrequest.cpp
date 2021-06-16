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

#include "disassociateadminaccountrequest.h"
#include "disassociateadminaccountrequest_p.h"
#include "disassociateadminaccountresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::DisassociateAdminAccountRequest
 * \brief The DisassociateAdminAccountRequest class provides an interface for FMS DisassociateAdminAccount requests.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::disassociateAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateAdminAccountRequest::DisassociateAdminAccountRequest(const DisassociateAdminAccountRequest &other)
    : FmsRequest(new DisassociateAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateAdminAccountRequest object.
 */
DisassociateAdminAccountRequest::DisassociateAdminAccountRequest()
    : FmsRequest(new DisassociateAdminAccountRequestPrivate(FmsRequest::DisassociateAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::FMS::DisassociateAdminAccountRequestPrivate
 * \brief The DisassociateAdminAccountRequestPrivate class provides private implementation for DisassociateAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a DisassociateAdminAccountRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DisassociateAdminAccountRequestPrivate::DisassociateAdminAccountRequestPrivate(
    const FmsRequest::Action action, DisassociateAdminAccountRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateAdminAccountRequest
 * class' copy constructor.
 */
DisassociateAdminAccountRequestPrivate::DisassociateAdminAccountRequestPrivate(
    const DisassociateAdminAccountRequestPrivate &other, DisassociateAdminAccountRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
