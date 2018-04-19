/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::disassociateAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateAdminAccountRequest::DisassociateAdminAccountRequest(const DisassociateAdminAccountRequest &other)
    : FMSRequest(new DisassociateAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateAdminAccountRequest object.
 */
DisassociateAdminAccountRequest::DisassociateAdminAccountRequest()
    : FMSRequest(new DisassociateAdminAccountRequestPrivate(FMSRequest::DisassociateAdminAccountAction, this))
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
 * Constructs a DisassociateAdminAccountRequestPrivate object for FMS \a action,
 * with public implementation \a q.
 */
DisassociateAdminAccountRequestPrivate::DisassociateAdminAccountRequestPrivate(
    const FMSRequest::Action action, DisassociateAdminAccountRequest * const q)
    : FMSRequestPrivate(action, q)
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
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
