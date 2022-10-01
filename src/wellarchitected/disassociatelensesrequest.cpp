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

#include "disassociatelensesrequest.h"
#include "disassociatelensesrequest_p.h"
#include "disassociatelensesresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DisassociateLensesRequest
 * \brief The DisassociateLensesRequest class provides an interface for WellArchitected DisassociateLenses requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::disassociateLenses
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateLensesRequest::DisassociateLensesRequest(const DisassociateLensesRequest &other)
    : WellArchitectedRequest(new DisassociateLensesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateLensesRequest object.
 */
DisassociateLensesRequest::DisassociateLensesRequest()
    : WellArchitectedRequest(new DisassociateLensesRequestPrivate(WellArchitectedRequest::DisassociateLensesAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateLensesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateLensesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateLensesRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateLensesResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::DisassociateLensesRequestPrivate
 * \brief The DisassociateLensesRequestPrivate class provides private implementation for DisassociateLensesRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DisassociateLensesRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
DisassociateLensesRequestPrivate::DisassociateLensesRequestPrivate(
    const WellArchitectedRequest::Action action, DisassociateLensesRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateLensesRequest
 * class' copy constructor.
 */
DisassociateLensesRequestPrivate::DisassociateLensesRequestPrivate(
    const DisassociateLensesRequestPrivate &other, DisassociateLensesRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
