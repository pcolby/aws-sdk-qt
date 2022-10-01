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

#include "createfindingsreportrequest.h"
#include "createfindingsreportrequest_p.h"
#include "createfindingsreportresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::CreateFindingsReportRequest
 * \brief The CreateFindingsReportRequest class provides an interface for Inspector2 CreateFindingsReport requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::createFindingsReport
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFindingsReportRequest::CreateFindingsReportRequest(const CreateFindingsReportRequest &other)
    : Inspector2Request(new CreateFindingsReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFindingsReportRequest object.
 */
CreateFindingsReportRequest::CreateFindingsReportRequest()
    : Inspector2Request(new CreateFindingsReportRequestPrivate(Inspector2Request::CreateFindingsReportAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFindingsReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFindingsReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFindingsReportRequest::response(QNetworkReply * const reply) const
{
    return new CreateFindingsReportResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::CreateFindingsReportRequestPrivate
 * \brief The CreateFindingsReportRequestPrivate class provides private implementation for CreateFindingsReportRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a CreateFindingsReportRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
CreateFindingsReportRequestPrivate::CreateFindingsReportRequestPrivate(
    const Inspector2Request::Action action, CreateFindingsReportRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFindingsReportRequest
 * class' copy constructor.
 */
CreateFindingsReportRequestPrivate::CreateFindingsReportRequestPrivate(
    const CreateFindingsReportRequestPrivate &other, CreateFindingsReportRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
