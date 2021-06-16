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

#include "getprotectionstatusrequest.h"
#include "getprotectionstatusrequest_p.h"
#include "getprotectionstatusresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetProtectionStatusRequest
 * \brief The GetProtectionStatusRequest class provides an interface for FMS GetProtectionStatus requests.
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
 * \sa FmsClient::getProtectionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetProtectionStatusRequest::GetProtectionStatusRequest(const GetProtectionStatusRequest &other)
    : FmsRequest(new GetProtectionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProtectionStatusRequest object.
 */
GetProtectionStatusRequest::GetProtectionStatusRequest()
    : FmsRequest(new GetProtectionStatusRequestPrivate(FmsRequest::GetProtectionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetProtectionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProtectionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProtectionStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetProtectionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::FMS::GetProtectionStatusRequestPrivate
 * \brief The GetProtectionStatusRequestPrivate class provides private implementation for GetProtectionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a GetProtectionStatusRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetProtectionStatusRequestPrivate::GetProtectionStatusRequestPrivate(
    const FmsRequest::Action action, GetProtectionStatusRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProtectionStatusRequest
 * class' copy constructor.
 */
GetProtectionStatusRequestPrivate::GetProtectionStatusRequestPrivate(
    const GetProtectionStatusRequestPrivate &other, GetProtectionStatusRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
