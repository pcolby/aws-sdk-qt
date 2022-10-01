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

#include "getviolationdetailsrequest.h"
#include "getviolationdetailsrequest_p.h"
#include "getviolationdetailsresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetViolationDetailsRequest
 * \brief The GetViolationDetailsRequest class provides an interface for Fms GetViolationDetails requests.
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
 * \sa FmsClient::getViolationDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetViolationDetailsRequest::GetViolationDetailsRequest(const GetViolationDetailsRequest &other)
    : FmsRequest(new GetViolationDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetViolationDetailsRequest object.
 */
GetViolationDetailsRequest::GetViolationDetailsRequest()
    : FmsRequest(new GetViolationDetailsRequestPrivate(FmsRequest::GetViolationDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetViolationDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetViolationDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetViolationDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetViolationDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetViolationDetailsRequestPrivate
 * \brief The GetViolationDetailsRequestPrivate class provides private implementation for GetViolationDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetViolationDetailsRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetViolationDetailsRequestPrivate::GetViolationDetailsRequestPrivate(
    const FmsRequest::Action action, GetViolationDetailsRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetViolationDetailsRequest
 * class' copy constructor.
 */
GetViolationDetailsRequestPrivate::GetViolationDetailsRequestPrivate(
    const GetViolationDetailsRequestPrivate &other, GetViolationDetailsRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
