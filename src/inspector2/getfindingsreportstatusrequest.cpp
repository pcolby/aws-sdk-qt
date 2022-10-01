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

#include "getfindingsreportstatusrequest.h"
#include "getfindingsreportstatusrequest_p.h"
#include "getfindingsreportstatusresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetFindingsReportStatusRequest
 * \brief The GetFindingsReportStatusRequest class provides an interface for Inspector2 GetFindingsReportStatus requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getFindingsReportStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingsReportStatusRequest::GetFindingsReportStatusRequest(const GetFindingsReportStatusRequest &other)
    : Inspector2Request(new GetFindingsReportStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingsReportStatusRequest object.
 */
GetFindingsReportStatusRequest::GetFindingsReportStatusRequest()
    : Inspector2Request(new GetFindingsReportStatusRequestPrivate(Inspector2Request::GetFindingsReportStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingsReportStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingsReportStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingsReportStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsReportStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::GetFindingsReportStatusRequestPrivate
 * \brief The GetFindingsReportStatusRequestPrivate class provides private implementation for GetFindingsReportStatusRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetFindingsReportStatusRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
GetFindingsReportStatusRequestPrivate::GetFindingsReportStatusRequestPrivate(
    const Inspector2Request::Action action, GetFindingsReportStatusRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsReportStatusRequest
 * class' copy constructor.
 */
GetFindingsReportStatusRequestPrivate::GetFindingsReportStatusRequestPrivate(
    const GetFindingsReportStatusRequestPrivate &other, GetFindingsReportStatusRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
